
#ifndef ICE_H
#define ICE_H

#include "AMateria.hpp"

class Ice : public AMateria {

private:
	void printMessageCall(std::string msg);

public:
	Ice();

	Ice(const Ice& other);

	Ice& operator=(const Ice& other);

	~Ice();

	AMateria* clone() const;

	void use(ICharacter& target);
};


#endif //ICE_H
