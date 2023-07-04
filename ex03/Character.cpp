
#include "Character.hpp"

Character::Character() : name("none") {
	std::cout << "Default constructor called, Character name: " << name << std::endl;
}

Character::Character(const std::string name) : name(name) {
	std::cout << "parameterized constructor called, Character name: " << name << std::endl;
}

Character::Character(const Character& other) : name(other.name) {
	std::cout << "Copy constructor called, Character name: " << name << std::endl;
	for (int i = 0; i < size; ++i) {
		if (other.inventory[i] != NULL) {
			inventory[i] = other.inventory[i]->clone();
		}
	}
}

Character& Character::operator=(const Character& other) {
	std::cout << "Copy assignment operator called, Character name: " << name << std::endl;
	if (this != &other) {
		name = other.name;
		for (int i = 0; i < size; ++i) {
			if (inventory[i] != NULL) {
				delete inventory[i];
			}
			inventory[i] = other.inventory[i]->clone();
		}
	}
	return *this;
}

Character::~Character() {
	std::cout << "Destructor called, Character name: " << name << std::endl;
	for (int i = 0; i < size; ++i) {
		if (inventory[i] != NULL) {
			delete inventory[i];
		}
	}
}

int Character::getEmptyIdx() {
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
	std::cout << "Character::equip(), name: " << name << std::endl;
	int idx = getEmptyIdx();
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
	std::cout << "unequip():  " << inventory[idx] << std::endl;
	inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || size <= idx || inventory[idx] == NULL) {
		std::cout << "use(): Not available." << std::endl;
		return;
	}
	std::cout << "use():  " << inventory[idx] << std::endl;
	inventory[idx]->use(target);
}
