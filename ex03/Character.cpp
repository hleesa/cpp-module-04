
#include "Character.hpp"

void Character::initInventory() {
	for (int i = 0; i < size; ++i) {
		inventory[i] = NULL;
	}
}

void Character::initRemainigMateria() {
	for (int i = 0; i < remainingSize; ++i) {
		remainingMateria[i] = NULL;
	}
}

void Character::printMessageCall(std::string msg) {
	std::cout << msg << " called, Character name: " << name << std::endl;
}

int Character::getEmptyInvenIdx() {
	int i;
	for (i = 0; i < size; ++i) {
		if (inventory[i] == NULL) {
			break;
		}
	}
	return i;
}

bool Character::isDuplicateMateria(AMateria* m) {
	for (int i = 0; i < size; ++i) {
		if (inventory[i] == m) {
			return true;
		}
	}
	return false;
}

bool Character::isValidIdx(int idx) {
	if (idx < 0 || size <= idx || inventory[idx] == NULL) {
		return false;
	}
	return true;
}

Character::Character() : name("none"), rIdx(0) {
	printMessageCall("Default constructor");
	initInventory();
	initRemainigMateria();
}

Character::Character(const std::string name) : name(name), rIdx(0) {
	printMessageCall("Parameterized constructor");
	initInventory();
	initRemainigMateria();
}

Character::Character(const Character& other) : name(other.name), rIdx(0) {
	printMessageCall("Copy constructor called");
	initInventory();
	initRemainigMateria();
	for (int i = 0; i < size; ++i) {
		if (other.inventory[i] != NULL) {
			inventory[i] = other.inventory[i]->clone();
		}
	}
}

Character& Character::operator=(const Character& other) {
	printMessageCall("Copy assignment operator");
	if (this != &other) {
		name = other.name;
		for (int i = 0; i < size; ++i) {
			if (inventory[i] != NULL) {
				delete inventory[i];
			}
			if (other.inventory[i] == NULL) {
				inventory[i] = NULL;
			}
			else {
				inventory[i] = other.inventory[i]->clone();
			}
		}
	}
	return *this;
}

Character::~Character() {
	printMessageCall("Destructor");
	for (int i = 0; i < size; ++i) {
		if (inventory[i] != NULL) {
			delete inventory[i];
		}
	}
	for (int i = 0; i < rIdx; ++i) {
		if (remainingMateria[i] != NULL) {
			delete remainingMateria[i];
		}
	}
}

std::string const& Character::getName() const {
	return name;
}

void Character::equip(AMateria* m) {
	if (m == NULL || isDuplicateMateria(m)) {
		std::cout << "< equip: Invalid materia >" << std::endl;
		return;
	}
	int idx = getEmptyInvenIdx();
	if (idx == size) {
		std::cout << "< equip: Inventory is full >" << std::endl;
		return;
	}
	std::cout << "< equip " << m->getType() << ", " << "Character name: " << name << " >" << std::endl;
	inventory[idx] = m;
}

void Character::unequip(int idx) {
	if (!isValidIdx(idx)) {
		std::cout << "< unequip: Not available>" << std::endl;
		return;
	}
	std::cout << "< unequip " << inventory[idx]->getType() << ", " << "Character name: " << name << " >" << std::endl;
	remainingMateria[rIdx++] = inventory[idx];
	inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (!isValidIdx(idx)) {
		std::cout << "< use(): Not available >" << std::endl;
		return;
	}
	inventory[idx]->use(target);
}
