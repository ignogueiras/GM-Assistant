#include "character.h"
#include "location.h"
#include "story.h"

int main() {
    // Crear una nueva historia
    Story myStory("The Quest for the Lost Artifact");
    myStory.addEvent("The hero receives a mysterious letter.");
    myStory.addEvent("The journey begins through treacherous lands.");
    myStory.addEvent("An ancient secret is uncovered.");

    // Crear un personaje
    Character hero("Arlen the Brave", 32, "Protagonist");

    // Mostrar resultados
    std::cout << "Story Synopsis:\n" << myStory.getSynopsis() << std::endl;
    std::cout << "Main Character:\n" << hero.getDescription() << std::endl;

    return 0;
}
