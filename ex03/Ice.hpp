
#ifndef ICE_H
#define ICE_H

#include "AMateria.hpp"

class Ice : public AMateria {


public:
	Ice();

	Ice(const Ice& other);

	Ice& operator=(const Ice& other);

	~Ice();

};


#endif //ICE_H
