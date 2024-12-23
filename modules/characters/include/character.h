#ifndef GM_ASSISTANT_CHARACTER_HPP
#define GM_ASSISTANT_CHARACTER_HPP

#include <iostream>
#include <string>

struct Character {
    std::string name;
    std::string role;
    std::string description;

    void describe() const;
};

#endif // GM_ASSISTANT_CHARACTER_HPP