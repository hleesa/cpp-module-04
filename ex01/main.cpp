#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	std::cout << "############################################################"<< std::endl;
	std::cout << "############################################################"<< std::endl;
	const int size = 4;
	Animal *animals[size];
	for (int i = 0; i < size; ++i) {
		std::cout << "i:" << i << std::endl;
		if (i % 2 == 0) {
			animals[i] = new Dog();
		}
		else {
			animals[i] = new Cat();
		}
	}
	std::cout << "================================================" << std::endl;
	for (int i = 0; i < size; ++i) {
		animals[i]->makeSound();
	}
	std::cout << "================================================" << std::endl;
	return 0;
}