
#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : idx(0) {

}

MateriaSource::MateriaSource(const MateriaSource& other) {
	idx = 0;
	while (idx < other.idx) {
		materias[idx] = other.materias[idx]->clone();
		++idx;
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
	if (this != &other) {
		idx = 0;
		if (other.idx != 0) {
			while (idx < other.idx) {
				delete materias[idx];
				materias[idx] = other.materias[idx]->clone();
				++idx;
			}
		}
	}
	return *this;

}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < idx; ++i) {
		delete materias[i];
	}
}

void MateriaSource::learnMateria(AMateria* materia) {
	(void) materia;
}

AMateria* MateriaSource::createMateria(const std::string& type) {

}