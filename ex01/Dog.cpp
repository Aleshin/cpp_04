#include "Dog.hpp"
#include <iostream>

Dog::Dog() : brain(new Brain()) {
    this->type = "Dog";
    std::cout << "Dog's constructor called\n";
}

Dog::Dog(const Dog& other) : Animal(other), brain(new Brain(*other.brain)) {
    std::cout << "Dog's copy constructor called\n";
}

Dog& Dog::operator=(const Dog& other) {
    std::cout << "Dog's copy assignment operator called\n";
    if (this != &other) {
        this->type = other.type;

        Brain* newBrain = new Brain(*other.brain); // exception-safe: old brain not deleted yet
        delete brain;
        brain = newBrain;
    }
    return *this;
}

Dog::~Dog() {
    delete brain;
    std::cout << "Dog's destructor called\n";
}

void Dog::makeSound() const {
    std::cout << "Dog's woof woof!\n";
}
