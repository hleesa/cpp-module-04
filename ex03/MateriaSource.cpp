
#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : idx(0) {

}

MateriaSource::MateriaSource(const MateriaSource& other) : idx(0) {
	for (int i = 0; i < size; ++i) {
		if (other.learned[i] != NULL) {
			learned[i] = other.learned[i]->clone();
		}
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
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
	learned[idx] = m;
	++idx;
}

AMateria* MateriaSource::createMateria(const std::string& type) {
	for (int i = 0; i < size; ++i) {
		if (learned[i]->getType() == type) {
			return learned[i]->clone();
		}
	}
	std::cout << "createMateria: Unknown type" << std::endl;
	return 0;
}