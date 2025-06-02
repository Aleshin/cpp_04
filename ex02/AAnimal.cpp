#include "AAnimal.hpp"

AAnimal::AAnimal() : type("Unknown") {
    std::cout << "Animal's default constructor called\n";
}

AAnimal::AAnimal(const AAnimal& other) : type(other.type) {
    std::cout << "Animal's copy constructor called\n";
}

AAnimal& AAnimal::operator=(const AAnimal& other) {
    std::cout << "Animal's copy assignment operator called\n";
    if (this != &other)
        this->type = other.type;
    return *this;
}

AAnimal::~AAnimal() {
    std::cout << "Animal's destructor called\n";
}

void AAnimal::makeSound() const {
    std::cout << "Animal makes a generic sound\n";
}

std::string AAnimal::getType() const {
    return this->type;
}
