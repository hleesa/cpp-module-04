
#include "Dog.hpp"

Dog::Dog() : Animal() {
	type = "Dog";
	std::cout << "Default constructor called, Dog type:" << type <<  std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
	std::cout << "Copy constructor called, Dog type:" << type <<  std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << "Copy assignment operator called, Dog type:" << type <<  std::endl;
	if (this != &other) {
		Animal::operator=(other);
	}
	return *this;
}

Dog::~Dog() {
	std::cout << "Destructor called, Dog type:" << type <<  std::endl;
}

void Dog::makeSound() const{
	std::cout << "b a r k" << std::endl;
}