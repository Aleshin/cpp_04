#include "Dog.hpp"
#include <iostream>

Dog::Dog() {
    this->type = "Dog";
    std::cout << getType() << "\'s constructor called\n";
}

Dog::Dog(const Dog& other) : Animal(other) {
    std::cout << getType() << "\'s copy constructor called\n";
    *this = other;
}

Dog& Dog::operator=(const Dog& other) {
    std::cout << getType() << "\'s copy assignment operator called\n";
    if (this != &other)
        this->type = other.type;
    return *this;
}

Dog::~Dog() {
    std::cout << getType() << "\'s destructor called\n";
}

void Dog::makeSound() const {
    std::cout << getType() << "\'s woof woof!\n";
}
