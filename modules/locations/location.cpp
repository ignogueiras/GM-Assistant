#include "location.h"

void Location::describe() const {
    std::cout << "Lugar: " << name << "\n";
    std::cout << "Descripción: " << description << "\n";
}
