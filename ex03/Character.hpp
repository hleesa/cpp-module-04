
#ifndef CPP_HLEESA_CHARACTER_HPP
#define CPP_HLEESA_CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {

private:
	std::string name;
	int idx;
	static const int size = 4;
	AMateria* inventory[size];

public:

	Character();

	Character(const std::string name);

	Character(const Character& other);

	Character& operator=(const Character& other);

	~Character();

	const std::string& getName() const;

	void equip(AMateria* m);

	void unequip(int idx);

	void use(int idx, ICharacter& target);

};


#endif //CPP_HLEESA_CHARACTER_HPP
