#include "Cat.hpp"
#include "Dog.hpp"

void test1() {
	std::cout << "############################################################" << std::endl;
	std::cout << "############################################################" << std::endl;
	const int size = 4;
	Animal* animals[size];
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
	for (int i = 0; i < size; ++i) {
		std::cout << "i:" << i << std::endl;
		delete animals[i];
	}
	std::cout << "############################################################" << std::endl;
	std::cout << "############################################################" << std::endl;
}

void test2() {
	std::cout << "############################################################" << std::endl;
	std::cout << "############################################################" << std::endl;
	Dog* boolDog = new Dog();
	Dog* hotDog = new Dog(*boolDog);
	delete boolDog;
	hotDog->openBrain();
	delete hotDog;
	std::cout << "############################################################" << std::endl;
	std::cout << "############################################################" << std::endl;
}

void test3() {
	std::cout << "############################################################" << std::endl;
	std::cout << "############################################################" << std::endl;
//	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	std::cout << "============================================================" << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << "============================================================" << std::endl;
	dog->makeSound();
	cat->makeSound();
//	meta->makeSound();
	std::cout << "============================================================" << std::endl;
//	delete meta;
	delete dog;
	delete cat;
	std::cout << "############################################################" << std::endl;
	std::cout << "############################################################" << std::endl;
}

int main() {
	test1();
	test2();
	test3();
	system("leaks abstract");
	return 0;
}