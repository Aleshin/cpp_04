#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() {
    this->type = "WrongCat";
    std::cout << "[WrongCat] Constructor called\n";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
    std::cout << "[WrongCat] Copy constructor called\n";
    *this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
    std::cout << "[WrongCat] Copy assignment operator called\n";
    if (this != &other)
        this->type = other.type;
    return *this;
}

WrongCat::~WrongCat() {
    std::cout << "[WrongCat] Destructor called\n";
}

void WrongCat::makeSound() const {
    std::cout << "[WrongCat] Meow meow!\n";
}
