
#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

private:
	int idx;
	static const int size = 4;
	static const int leftoverSize = 12345678;
	AMateria* learned[size];
	AMateria* leftover[leftoverSize];

	int getEmptyIdx();

public:

	MateriaSource();

	MateriaSource(const MateriaSource& other);

	MateriaSource& operator=(const MateriaSource& other);

	~MateriaSource();

	void learnMateria(AMateria*);

	AMateria* createMateria(std::string const& type);

};


#endif //MATERIASOURCE_HPP
