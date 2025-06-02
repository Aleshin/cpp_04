#include "Cat.hpp"
#include <iostream>

Cat::Cat() : brain(new Brain()) {
    this->type = "Cat";
    std::cout << "Cat's constructor called\n";
}

Cat::Cat(const Cat& other) : AAnimal(other), brain(new Brain(*other.brain)) {
    std::cout << "Cat's copy constructor called\n";
}

Cat& Cat::operator=(const Cat& other) {
    std::cout << "Cat's copy assignment operator called\n";
    if (this != &other) {
        this->type = other.type;

        Brain* newBrain = new Brain(*other.brain); // exception-safe: old brain not deleted yet
        delete brain;
        brain = newBrain;
    }
    return *this;
}

Cat::~Cat() {
    delete brain;
    std::cout << "Cat's destructor called\n";
}

void Cat::makeSound() const {
    std::cout << "Cat meow meow!\n";
}
