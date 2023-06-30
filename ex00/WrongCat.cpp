
#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	type = "WrongCat";
	std::cout << "WrongCat type:" << type << " Default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
	std::cout << "WrongCat type:" << type << " Copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
	std::cout << "WrongCat type:" << type << " Copy assignment operator called" << std::endl;
	if (this != &other) {
		WrongAnimal::operator=(other);
	}
	return *this;
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat type:" << type << " Destructor called" << std::endl;
}

void WrongCat::makeWrongSound() const{
	std::cout << "m i a o w" << std::endl;
}
