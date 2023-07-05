
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() {
	std::cout << "############################################################" << std::endl;
	std::cout << "############################################################" << std::endl;
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	std::cout << "============================================================" << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << "============================================================" << std::endl;
	dog->makeSound();
	cat->makeSound();
	meta->makeSound();
	std::cout << "============================================================" << std::endl;
	delete meta;
	delete dog;
	delete cat;
	std::cout << "############################################################" << std::endl;
	std::cout << "############################################################" << std::endl;
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();
	std::cout << "============================================================" << std::endl;
	std::cout << wrongCat->getType() << std::endl;
	wrongCat->makeWrongSound();
	wrongMeta->makeWrongSound();
	std::cout << "============================================================" << std::endl;
	delete wrongMeta;
	delete wrongCat;
	std::cout << "============================================================" << std::endl;
//	system("leaks polymorphsim");
	return 0;
}