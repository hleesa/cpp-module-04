
#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria {

protected:
	std::string type;

public:
	AMateria(std::string const& type);

	virtual ~AMateria();

	std::string const& getType() const; //Returns the materia type

	virtual AMateria* clone() const = 0;

	virtual void use(ICharacter& target);

	/**
	 * 소멸자?
	 * 기본 생성자, 복사 생성자, 복사 대입연산자?
	 */
};

#endif //AMATERIA_HPP
