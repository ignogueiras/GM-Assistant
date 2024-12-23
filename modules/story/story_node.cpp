#include "story_node.h"

StoryNode::StoryNode(const std::string& title) : _title(title) {};

void StoryNode::display() const {
    std::cout << "Scene: " << _title << std::endl;
    std::cout << _content << std::endl;
    for (size_t i = 0; i < _choices.size(); ++i) {
        std::cout << i + 1 << ". " << _choices[i] << std::endl;
    }
}