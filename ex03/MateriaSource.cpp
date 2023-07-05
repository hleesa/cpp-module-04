
#include "MateriaSource.hpp"

void MateriaSource::printMessageCall(std::string msg) {
	std::cout << msg << " called, MateriaSource" << std::endl;
}

void MateriaSource::initLearned() {
	for (int i = 0; i < size; ++i) {
		learned[i] = NULL;
	}
}
MateriaSource::MateriaSource() {
	printMessageCall("Default constructor");
	initLearned();
}

MateriaSource::MateriaSource(const MateriaSource& other) {
	printMessageCall("Copy constructor called");
	initLearned();
	for (int i = 0; i < size; ++i) {
		if (other.learned[i] != NULL) {
			learned[i] = other.learned[i]->clone();
		}
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
	printMessageCall("Copy assignment operator");
	if (this != &other) {
		for (int i = 0; i < size; ++i) {
			if (learned[i] != NULL) {
				delete learned[i];
			}
			if (other.learned[i] == NULL) {
				learned[i] = NULL;
			}
			else {
				learned[i] = other.learned[i]->clone();
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
}

int MateriaSource::getEmptyLearnedIdx() {
	int i;
	for (i = 0; i < size; ++i) {
		if (learned[i] == NULL) {
			break;
		}
	}
	return i;
}

void MateriaSource::learnMateria(AMateria* m) {
	if (m == NULL) {
		std::cout << "[ Invalid materia, MateriaSource ]" << std::endl;
		return;
	}
	int i = getEmptyLearnedIdx();
	if (i == size) {
		std::cout << "[ You can't learn anymore, MateriaSource ]" << std::endl;
		delete m;
		return;
	}
	std::cout << "[ learn " << m->getType() << ", MateriaSource ]" << std::endl;
	learned[i] = m;
}

AMateria* MateriaSource::createMateria(const std::string& type) {
	for (int i = 0; i < size; ++i) {
		if (learned[i] == NULL) {
			continue;
		}
		if (learned[i]->getType() == type) {
			std::cout << "[ create " << learned[i]->getType() << ", MateriaSource ]" << std::endl;
			return learned[i]->clone();
		}
	}
	std::cout << "[ Can't create " << type << ", MateriaSource ]" << std::endl;
	return 0;
}
