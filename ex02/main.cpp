#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main() {
    // Animal a;
    // Animal* wrong = new Animal();

    AAnimal* dog = new Dog();
    AAnimal* cat = new Cat();

    std::cout << dog->getType() << ": ";
    dog->makeSound(); // "Dog woof!"

    std::cout << cat->getType() << ": ";
    cat->makeSound(); // "Cat meow!"

    delete dog;
    delete cat;

    return 0;
}
