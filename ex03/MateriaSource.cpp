
#include "MateriaSource.hpp"

//int MateriaSource::idx = 0;

//AMateria* MateriaSource::allMateria[] = {NULL,};

void MateriaSource::printMessageCall(std::string msg) {
	std::cout << msg << " called, MateriaSource" << std::endl;
}

MateriaSource::MateriaSource() {
	printMessageCall("Default constructor");
	for (int i = 0; i < size; ++i) {
		learned[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource& other) {
	printMessageCall("Copy constructor called");
	for (int i = 0; i < size; ++i) {
		if (other.learned[i] == NULL) {
			learned[i] = NULL;
		}
		else {
			learned[i] = other.learned[i]->clone();
//			allMateria[idx++] = learned[i];
		}
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
	printMessageCall("Copy assignment operator");
	if (this != &other) {
		for (int i = 0; i < size; ++i) {
			if (other.learned[i] == NULL) {
				learned[i] = NULL;
			}
			else {
				learned[i] = other.learned[i]->clone();
//				allMateria[idx++] = learned[i];
			}
		}
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	printMessageCall("Destructor");
	for (int i = 0; i < size; ++i) {
		if (learned[i] != NULL)
			delete learned[i];
	}
//	std::cout << idx << '\n';
//	for (int i = 0; i < idx; ++i) {
//		std::cout << allMateria[i] << ", " << i << std::endl;
//		if (allMateria[i] != NULL)
//			delete allMateria[i];
//	}
}

int MateriaSource::getEmptyLearnedIdx() {
	int i = 0;
	while (i < size && learned[i] != NULL) {
		++i;
	}
	return i;
}

void MateriaSource::learnMateria(AMateria* m) {
	int i = getEmptyLearnedIdx();
	if (i == size) {
		std::cout << "learnMateria: You can't learn anymore" << std::endl;
		return;
	}
	std::cout << "[learn " << m->getType() << ", MateriaSource]" << std::endl;
	learned[i] = m;
//	allMateria[idx++] = m;
}

AMateria* MateriaSource::createMateria(const std::string& type) {
	for (int i = 0; i < size; ++i) {
		if (learned[i]->getType() == type) {
//			allMateria[idx++] = learned[i]->clone();
//			std::cout << "create: " << allMateria[idx - 1] << '\n';
			std::cout << "[create " << learned[i]->getType() << ", MateriaSource]" << std::endl;
//			return allMateria[idx - 1];
			return learned[i]->clone();
		}
	}
	return 0;
}