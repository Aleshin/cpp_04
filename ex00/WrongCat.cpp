#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() {
    this->type = "WrongCat";
    std::cout << getType() << "\'s constructor called\n";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
    std::cout << getType() << "\'s copy constructor called\n";
    *this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
    std::cout << getType() << "\'s copy assignment operator called\n";
    if (this != &other)
        this->type = other.type;
    return *this;
}

WrongCat::~WrongCat() {
    std::cout << getType() << "\'s destructor called\n";
}

void WrongCat::makeSound() const {
    std::cout << getType() << " meow meow!\n";
}
