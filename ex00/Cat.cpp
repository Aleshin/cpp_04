#include "Cat.hpp"
#include <iostream>

Cat::Cat() {
    this->type = "Cat";
    std::cout << "[Cat] Constructor called\n";
}

Cat::Cat(const Cat& other) : Animal(other) {
    std::cout << "[Cat] Copy constructor called\n";
    *this = other;
}

Cat& Cat::operator=(const Cat& other) {
    std::cout << "[Cat] Copy assignment operator called\n";
    if (this != &other)
        this->type = other.type;
    return *this;
}

Cat::~Cat() {
    std::cout << "[Cat] Destructor called\n";
}

void Cat::makeSound() const {
    std::cout << "[Cat] Meow meow!\n";
}
