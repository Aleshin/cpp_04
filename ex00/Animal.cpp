#include "Animal.hpp"

Animal::Animal() : type("Unknown") {
    std::cout << getType() << "\'s default constructor called\n";
}

Animal::Animal(const Animal& other) : type(other.type) {
    std::cout << getType() << "\'s copy constructor called\n";
}

Animal& Animal::operator=(const Animal& other) {
    std::cout << getType() << "\'s copy assignment operator called\n";
    if (this != &other)
        this->type = other.type;
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal's destructor called\n";
}

void Animal::makeSound() const {
    std::cout << getType() << " makes a generic sound\n";
}

std::string Animal::getType() const {
    return this->type;
}
