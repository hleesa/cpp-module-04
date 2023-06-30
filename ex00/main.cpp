
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() {
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound();
	dog->makeSound();
	meta->makeSound();
	std::cout << "============================================================" << std::endl;
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();
	std::cout << wrongCat->getType() << std::endl;
	wrongCat->makeWrongSound();
	wrongMeta->makeWrongSound();
	return 0;
}