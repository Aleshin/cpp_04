#include "Animal.hpp"

Animal::Animal() : type("Unknown") {
    std::cout << "[Animal] Default constructor called\n";
}

Animal::Animal(const Animal& other) : type(other.type) {
    std::cout << "[Animal] Copy constructor called\n";
}

Animal& Animal::operator=(const Animal& other) {
    std::cout << "[Animal] Copy assignment operator called\n";
    if (this != &other)
        this->type = other.type;
    return *this;
}

Animal::~Animal() {
    std::cout << "[Animal] Destructor called\n";
}

void Animal::makeSound() const {
    std::cout << "[Animal] makes a generic sound\n";
}

std::string Animal::getType() const {
    return this->type;
}
