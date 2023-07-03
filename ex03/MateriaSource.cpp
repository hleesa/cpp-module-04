
#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : idx(0) {

}

MateriaSource::MateriaSource(const MateriaSource& other) {
	idx = 0;
	while (idx < other.idx) {
		//deep copy
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
	if (this != &other) {
	}
	return *this;

}

MateriaSource::~MateriaSource() {
}

void MateriaSource::learnMateria(AMateria* materia) {
	(void) materia;
}

AMateria* MateriaSource::createMateria(const std::string& type) {

}