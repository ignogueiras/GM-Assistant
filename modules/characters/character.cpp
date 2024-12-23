#include "character.h"

Character::Character(const std::string& name, int age, const std::string& role)
    : _name(name), _age(age), _role(role) {}

std::string Character::getDescription() const {
    return "Name: " + _name + "\nAge: " + std::to_string(_age) + "\nRole: " + _role;
}