#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Unknown") {
    std::cout << "[WrongAnimal] Default constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type) {
    std::cout << "[WrongAnimal] Copy constructor called\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
    std::cout << "[WrongAnimal] Copy assignment operator called\n";
    if (this != &other)
        this->type = other.type;
    return *this;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "[WrongAnimal] Destructor called\n";
}

void WrongAnimal::makeSound() const {
    std::cout << "[WrongAnimal] makes a generic sound\n";
}

std::string WrongAnimal::getType() const {
    return this->type;
}
