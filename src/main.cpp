#include "story.h"
#include "character.h"
#include "location.h"

int main() {
    Story myStory("The Lost Artifact");

    myStory.addNode(StoryNode("The hero discovers an ancient map."));
    myStory.addNode(StoryNode("A rival appears, claiming the artifact as their own."));
    myStory.addNode(StoryNode("A fierce battle takes place in the cursed forest."));

    Character hero{"Ariana", "Héroe", "Una valiente guerrera que busca redención."};
    Location forest{"Bosque Oscuro", "Un lugar lleno de sombras y secretos."};

    std::cout << "Historia:\n";
    myStory.display();

    std::cout << "\nPersonaje:\n";
    hero.describe();

    std::cout << "\nLugar:\n";
    forest.describe();

    return 0;
}