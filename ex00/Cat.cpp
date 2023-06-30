
#include "Cat.hpp"

Cat::Cat() : Animal() {
	type = "Cat";
	std::cout << "Default constructor called, Cat type:" << type <<  std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
	std::cout << "Copy constructor called, Cat type:" << type <<  std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	std::cout << "Copy assignment operator called, Cat type:" << type <<  std::endl;
	if (this != &other) {
		Animal::operator=(other);
	}
	return *this;
}

Cat::~Cat(){
	std::cout << "Destructor called, Cat type:" << type <<  std::endl;
}

void Cat::makeSound() const{
	std::cout << "m i a o w" << std::endl;
}
