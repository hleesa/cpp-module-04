
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

Character::Character() : name("none"), idx(0) {
	printMessageCall("Default constructor");
	initInventory();
	initRemainigMateria();
}

Character::Character(const std::string name) : name(name), idx(0) {
	printMessageCall("Parameterized constructor");
	initInventory();
	initRemainigMateria();
}

Character::Character(const Character& other) : name(other.name), idx(0) {
	printMessageCall("Copy constructor called");
	for (int i = 0; i < size; ++i) {
		if (other.inventory[i] == NULL) {
			inventory[i] = NULL;
		}
		else {
			inventory[i] = other.inventory[i]->clone();
		}
	}
	initRemainigMateria();
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
	for (int i = 0; i < idx; ++i) {
		if (remainingMateria[i] != NULL) {
			delete remainingMateria[i];
		}
	}
}

int Character::getEmptyInvenIdx() {
	int idx = 0;
	while (idx < size && inventory[idx] != NULL) {
		++idx;
	}
	return idx;
}

std::string const& Character::getName() const {
	return name;
}

void Character::equip(AMateria* m) {
	int idx = getEmptyInvenIdx();
	if (idx == size) {
		std::cout << "equip: Inventory is full." << std::endl;
		return;
	}
	inventory[idx] = m;
}

void Character::unequip(int idx) {
	if (idx < 0 || size <= idx || inventory[idx] == NULL) {
		std::cout << "unequip: Not available." << std::endl;
		return;
	}
	remainingMateria[Character::idx++] = inventory[idx];
	inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || size <= idx || inventory[idx] == NULL) {
		std::cout << "use(): Not available." << std::endl;
		return;
	}
	inventory[idx]->use(target);
}
