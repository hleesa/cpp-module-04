
#ifndef WrongCat_HPP
#define WrongCat_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public:

	WrongCat();

	WrongCat(const WrongCat& other);

	WrongCat& operator=(const WrongCat& other);

	~WrongCat();

	void makeWrongSound() const;
};


#endif //WrongCat_HPP
