
#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

private:
	size_t idx;
	const size_t size = 4;
	AMateria materias[size];

public:

	MateriaSource();

	MateriaSource(const MateriaSource& other);

	MateriaSource& operator=(const MateriaSource& other);

	~MateriaSource();

	void learnMateria(AMateria*);

	AMateria* createMateria(const std::string& type);

};


#endif //MATERIASOURCE_HPP
