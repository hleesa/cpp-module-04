
#include "Character.hpp"

Character::Character() : name("none"), idx(0) {
}

Character::Character(const std::string name) : name(name), idx(0) {
}

Character::Character(const Character& other) : name(other.name) {
	while (idx < other.idx) {
		inventory[idx] = other.inventory[idx]->clone();
		++idx;
	}
}

Character& Character::operator=(const Character& other) {
	if (this != &other) {
		name = other.name;
		idx = 0;
		if (other.idx != 0) {
			while (idx < other.idx) {
				delete inventory[idx];
				inventory[idx] = other.inventory[idx]->clone();
				++idx;
			}
		}
	}
	return *this;
}

Character::~Character() {
	for (int i = 0; i < idx; ++i) {
		delete inventory[i];
	}
}

const std::string& Character::getName() const {
	return name;
}

void Character::equip(AMateria* m) {
	if (idx >= size) {
		std::cout << "Inventory is full." << std::endl;
		return;
	}
	inventory[idx] = m;
	++idx;
}

void Character::unequip(int idx) {
	(void) idx;
}

void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx >= size) {
		std::cout << "Not available." << std::endl;
		return;
	}
	inventory[idx]->use(target);
}
