#include "character.h"

void Character::describe() const {
    std::cout << "Nombre: " << name << "\n";
    std::cout << "Rol: " << role << "\n";
    std::cout << "Descripción: " << description << "\n";
}