
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main() {

	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter *me = new Character("me");

	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter *bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	ICharacter* my = new Character("my");
	*my = *bob;
	my->use(0, *me);
//	me->unequip(1);
//	me->unequip(0);
//	salee.equip(tmp);
//	salee.use(0, *me);

	delete bob;
	delete me;
	delete src;

//	ICharacter *me = new Character("me");
//	std::cout << me << '\n';
//	Character you = Character(*me);
//	std::cout << you << '\n';
//	Character a = Character("a");
//	std::cout << &a << '\n';
//	Character b = a;
//	std::cout << &b << '\n';

//	system("leaks abstarctclass");
	return 0;
}