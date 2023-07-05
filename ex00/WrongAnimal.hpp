
#ifndef WrongAnimal_HPP
#define WrongAnimal_HPP

#include <iostream>

class WrongAnimal {

private:
	void printMessageCall(std::string msg);

protected:
	std::string type;

public:
	WrongAnimal();

	WrongAnimal(const WrongAnimal& other);

	WrongAnimal& operator=(const WrongAnimal& other);

	~WrongAnimal();

	std::string getType() const;

	void makeWrongSound() const;

};


#endif //WrongAnimal_HPP
