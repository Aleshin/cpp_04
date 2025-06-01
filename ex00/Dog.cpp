#include "Dog.hpp"
#include <iostream>

Dog::Dog() {
    this->type = "Dog";
    std::cout << "[Dog] Constructor called\n";
}

Dog::Dog(const Dog& other) : Animal(other) {
    std::cout << "[Dog] Copy constructor called\n";
    *this = other;
}

Dog& Dog::operator=(const Dog& other) {
    std::cout << "[Dog] Copy assignment operator called\n";
    if (this != &other)
        this->type = other.type;
    return *this;
}

Dog::~Dog() {
    std::cout << "[Dog] Destructor called\n";
}

void Dog::makeSound() const {
    std::cout << "[Dog] Woof woof!\n";
}
