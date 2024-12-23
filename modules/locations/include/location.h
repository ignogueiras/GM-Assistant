#ifndef GM_ASSISTANT_LOCATION_HPP
#define GM_ASSISTANT_LOCATION_HPP

#include <iostream>
#include <string>

struct Location {
    std::string name;
    std::string description;

    void describe() const;
};

#endif  // GM_ASSISTANT_LOCATION_HPP
