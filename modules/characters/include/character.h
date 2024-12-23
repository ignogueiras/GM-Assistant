#ifndef GM_ASSISTANT_CHARACTER_HPP
#define GM_ASSISTANT_CHARACTER_HPP

#include <iostream>
#include <string>

struct Character {
   private:
    std::string _name;
    std::string _role;
    std::string _description;
    int _age;

   public:
    Character(const std::string& name, int age, const std::string& role);
    std::string getDescription() const;
};

#endif  // GM_ASSISTANT_CHARACTER_HPP
