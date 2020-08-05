#include "TextQuery.h"

std::set<TextQuery::line_no> TextQuery::run_query(const std::string &word) const
{
    std::map<std::string, std::set<TextQuery::line_no>>::const_iterator target;
    target = word_map.find(word);
    if (target == word_map.end())
    {
        return std::set<line_no>();
    }
    return target->second;
}

std::string TextQuery::text_line(TextQuery::line_no no) const
{
    if(no < lines_of_text.size())
    {
        return lines_of_text[no];
    }
    throw std::out_of_range("line number out of range");
}