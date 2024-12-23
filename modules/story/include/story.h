#ifndef GM_ASSISTANT_STORY_HPP
#define GM_ASSISTANT_STORY_HPP

#include <string>
#include <vector>

#include "story_node.h"

class Story {
private:
    std::string _title;
    std::vector<StoryNode> _nodes;

public:
    Story(const std::string& title);
    void addEvent(const StoryNode& node);
    void addEvent(const std::string& event_title);
    std::string getSynopsis() const;
};

#endif // GM_ASSISTANT_STORY_HPP