#ifndef GM_ASSISTANT_STORY_NODE_HPP
#define GM_ASSISTANT_STORY_NODE_HPP

#include <string>
#include <vector>

struct StoryNode {
   private:
    std::string _title;
    std::string _content;
    std::vector<std::string> _choices;

   public:
    explicit StoryNode(const std::string& title);
    std::string getSynopsis() const;
};

#endif  // GM_ASSISTANT_STORY_NODE_HPP
