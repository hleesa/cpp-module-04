
#ifndef WrongCat_HPP
#define WrongCat_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

private:
	void printMessageCall(std::string msg);

public:
	WrongCat();

	WrongCat(const WrongCat& other);

	WrongCat& operator=(const WrongCat& other);

	~WrongCat();

	void makeWrongSound() const;
};


#endif //WrongCat_HPP
