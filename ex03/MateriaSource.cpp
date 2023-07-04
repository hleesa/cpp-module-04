
#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : idx(0) {
	std::cout << "Default constructor called, MateriaSource" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& other) : idx(0) {
	std::cout << "Copy constructor called, MateriaSource" << std::endl;
	for (int i = 0; i < size; ++i) {
		if (other.learned[i] != NULL) {
			learned[i] = other.learned[i]->clone();
		}
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
	std::cout << "Copy assignment operator called, MateriaSource" << std::endl;
	if (this != &other) {
		idx = 0;
		for (int i = 0; i < size; ++i) {
			if (learned[i] != NULL) {
				delete learned[i];
			}
			learned[i] = other.learned[i]->clone();
		}
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	std::cout << "Destructor called, MateriaSource" << std::endl;
	for (int i = 0; i < size; ++i) {
		delete learned[i];
	}
	for (int i = 0; i < idx; ++i) {
		delete leftover[i];
	}
}

int MateriaSource::getEmptyIdx() {
	int idx = 0;
	while (idx < size && learned[idx] != NULL) {
		++idx;
	}
	return idx;
}

void MateriaSource::learnMateria(AMateria* m) {
	int idx = getEmptyIdx();
	if (idx == size) {
		std::cout << "learnMateria: You can't learn anymore" << std::endl;
		return;
	}
//	std::cout << "learn: " << learned[idx]->getType() << std::endl;
	learned[idx] = m;
	++idx;
}

AMateria* MateriaSource::createMateria(const std::string& type) {
	for (int i = 0; i < size; ++i) {
		if (learned[i]->getType() == type) {
			leftover[idx++] = learned[i]->clone();
//			std::cout << "create: " << leftover[idx - 1]->getType() << std::endl;
			return leftover[idx - -1];
		}
	}
	std::cout << "createMateria: Unknown type" << std::endl;
	return 0;
}