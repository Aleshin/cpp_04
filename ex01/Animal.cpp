#include "Animal.hpp"

Animal::Animal() : type("Unknown") {
    std::cout << "Animal's default constructor called\n";
}

Animal::Animal(const Animal& other) : type(other.type) {
    std::cout << "Animal's copy constructor called\n";
}

Animal& Animal::operator=(const Animal& other) {
    std::cout << "Animal's copy assignment operator called\n";
    if (this != &other)
        this->type = other.type;
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal's destructor called\n";
}

void Animal::makeSound() const {
    std::cout << "Animal makes a generic sound\n";
}

std::string Animal::getType() const {
    return this->type;
}
