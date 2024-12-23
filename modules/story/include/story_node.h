#ifndef GM_ASSISTANT_STORY_NODE_HPP
#define GM_ASSISTANT_STORY_NODE_HPP

#include <iostream>
#include <string>
#include <vector>

struct StoryNode {
    private:
        std::string _title;
        std::string _content;
        std::vector<std::string> _choices;

    public:
        StoryNode(const std::string& title);
        void display() const;
};

#endif // GM_ASSISTANT_STORY_NODE_HPP