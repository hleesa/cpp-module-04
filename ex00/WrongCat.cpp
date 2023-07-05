
#include "WrongCat.hpp"

void WrongCat::printMessageCall(std::string msg) {
	std::cout << msg << " called, WrongCat type: " << type << std::endl;
}

WrongCat::WrongCat() : WrongAnimal() {
	type = "WrongCat";
	printMessageCall("Default constructor");
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
	printMessageCall("Copy constructor");
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
	printMessageCall("Copy assignment operator");
	if (this != &other) {
		WrongAnimal::operator=(other);
	}
	return *this;
}

WrongCat::~WrongCat() {
	printMessageCall("Destructor");
}

void WrongCat::makeWrongSound() const {
	std::cout << "m i a o w" << std::endl;
}
