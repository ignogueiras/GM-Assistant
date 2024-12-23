#include "story.h"

Story::Story(const std::string& title) : _title(title) {}

void Story::addNode(const StoryNode& node) {
    _nodes.push_back(node);
}

void Story::display() const {
    std::cout << "Story: " + _title + "\nEvents:" << std::endl;
    for (const auto& node : _nodes) {
        node.display();
    };
}