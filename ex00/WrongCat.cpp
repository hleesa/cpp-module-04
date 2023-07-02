
#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	type = "WrongCat";
	std::cout << "Default constructor called, WrongCat type: " << type << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
	std::cout << "Copy constructor called, WrongCat type: " << type << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
	std::cout << "Copy assignment operator called, WrongCat type: " << type << std::endl;
	if (this != &other) {
		WrongAnimal::operator=(other);
	}
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "Destructor called, WrongCat type: " << type << std::endl;
}

void WrongCat::makeWrongSound() const {
	std::cout << "m i a o w" << std::endl;
}
