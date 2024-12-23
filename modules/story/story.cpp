#include "story.h"

Story::Story(const std::string& title) : _title(title) {}

void Story::addEvent(const StoryNode& node) { _nodes.push_back(node); }

void Story::addEvent(const std::string& event_title) {
    addEvent(StoryNode(event_title));
}

std::string Story::getSynopsis() const {
    std::string synopsis = "Story: " + _title + "\nEvents:" + '\n';
    for (const auto& node : _nodes) {
        synopsis += node.getSynopsis();
    };
    return synopsis;
}
