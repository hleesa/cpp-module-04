
#ifndef CURE_H
#define CURE_H

#include "AMateria.hpp"

class Cure : public AMateria{

private:
	void printMessageCall(std::string msg);

public:
	Cure();

	Cure(const Cure& other);

	Cure& operator=(const Cure& other);

	~Cure();

	AMateria* clone() const;

	void use(ICharacter& target);
};


#endif //CURE_H
