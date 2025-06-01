#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main() {
    const int size = 10;
    Animal* animals[size];

    std::cout << "\n--- Creating animals ---\n";
    for (int i = 0; i < size / 2; ++i)
        animals[i] = new Dog();
    for (int i = size / 2; i < size; ++i)
        animals[i] = new Cat();

    std::cout << "\n--- Making sounds ---\n";
    for (int i = 0; i < size; ++i)
        animals[i]->makeSound();

    std::cout << "\n--- Deleting animals ---\n";
    for (int i = 0; i < size; ++i)
        delete animals[i];

    std::cout << "\n--- Testing deep copy ---\n";

    Dog originalDog;
    Dog copyDog = originalDog; // copy constructor
    Dog assignedDog;
    assignedDog = originalDog; // assignment

    Cat originalCat;
    Cat copyCat = originalCat;
    Cat assignedCat;
    assignedCat = originalCat;

    std::cout << "\n--- Exiting program ---\n";
    return 0;
}
