#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Defective unknown") {
    std::cout << getType() << "\'s default constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type) {
    std::cout << getType() << "\'s copy constructor called\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
    std::cout << getType() << "\'s copy assignment operator called\n";
    if (this != &other)
        this->type = other.type;
    return *this;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "Wrong animal's destructor called\n";
}

void WrongAnimal::makeSound() const {
    std::cout << getType() << " makes a generic sound\n";
}

std::string WrongAnimal::getType() const {
    return this->type;
}
