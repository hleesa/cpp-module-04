
#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

private:
	static const int size = 4;
	AMateria* learned[size];

	void printMessageCall(std::string msg);

	int getEmptyLearnedIdx();

public:

	MateriaSource();

	MateriaSource(const MateriaSource& other);

	MateriaSource& operator=(const MateriaSource& other);

	~MateriaSource();

	void learnMateria(AMateria*);

	AMateria* createMateria(std::string const& type);

};


#endif //MATERIASOURCE_HPP
