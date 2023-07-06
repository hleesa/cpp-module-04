
#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

private:
	Brain *brain;

	void printMessageCall(std::string msg);

public:
	Dog();

	Dog(const Dog& other);

	Dog& operator=(const Dog& other);

	~Dog();

	void makeSound() const;

	void openBrain();
};


#endif //DOG_HPP
