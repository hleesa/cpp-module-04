
#include "Cat.hpp"

Cat::Cat() : Animal() {
	type = "Cat";
	std::cout << "Cat type:" << type << " Default constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
	std::cout << "Cat type:" << type << " Copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	std::cout << "Cat type:" << type << " Copy assignment operator called" << std::endl;
	if (this != &other) {
		Animal::operator=(other);
	}
	return *this;
}

Cat::~Cat(){
	std::cout << "Cat type:" << type << " Destructor called" << std::endl;
}

void Cat::makeSound() const{
	std::cout << "m i a o w" << std::endl;
}
