#include <gtest/gtest.h>
#include "character.h"

// Test: Creación básica de un personaje
TEST(CharacterTest, BasicCreation) {
    Character character("Arlen", 30, "Hero");

    EXPECT_EQ(character.getDescription(), 
        "Name: Arlen\nAge: 30\nRole: Hero");
}