
#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {

private:
	void printMessageCall(std::string msg);

public:
	Dog();

	Dog(const Dog& other);

	Dog& operator=(const Dog& other);

	~Dog();

	void makeSound() const;
};


#endif //DOG_HPP
