#include "story.h"

#include <gtest/gtest.h>

// Test: Creación básica de una historia
TEST(StoryTest, BasicCreation) {
    Story story("The Lost Relic");

    EXPECT_EQ(story.getSynopsis(), "Story: The Lost Relic\nEvents:\n");
}

// Test: Agregar eventos a la historia
TEST(StoryTest, AddEvents) {
    Story story("The Lost Relic");
    story.addEvent("A map is discovered.");
    story.addEvent("An adventure begins.");

    EXPECT_EQ(story.getSynopsis(),
              "Story: The Lost Relic\nEvents:\n- A map is discovered.\n\n- An "
              "adventure begins.\n\n");
}
