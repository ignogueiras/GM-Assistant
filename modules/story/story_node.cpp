#include "story_node.h"

StoryNode::StoryNode(const std::string& title) : _title(title) {};

std::string StoryNode::getSynopsis() const {
    std::string synopsis = "Scene: " + _title + '\n';
    synopsis += _content + '\n';
    for (size_t i = 0; i < _choices.size(); ++i) {
       synopsis += std::to_string(i + 1) + ". " + _choices[i] + '\n';
    }
    return synopsis;
}