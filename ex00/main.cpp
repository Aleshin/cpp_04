#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main (void) {
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* r = new WrongCat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << r->getType() << " " << std::endl;
    meta->makeSound();
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    std::cout << "---------------" << std::endl;
    std::cout << "WrongCat try to make sound:" << std::endl;
    r->makeSound();
    std::cout << "---------------" << std::endl;

    delete r;
    delete j;
    delete i;
    delete meta;

    return 0;
}