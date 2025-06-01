#include "Cat.hpp"
#include <iostream>

Cat::Cat() {
    this->type = "Cat";
    std::cout << getType() << "\'s constructor called\n";
}

Cat::Cat(const Cat& other) : Animal(other) {
    std::cout << getType() << "\'s copy constructor called\n";
    *this = other;
}

Cat& Cat::operator=(const Cat& other) {
    std::cout << getType() << "\'s copy assignment operator called\n";
    if (this != &other)
        this->type = other.type;
    return *this;
}

Cat::~Cat() {
    std::cout << getType() << "\'s destructor called\n";
}

void Cat::makeSound() const {
    std::cout << getType() << " meow meow!\n";
}
