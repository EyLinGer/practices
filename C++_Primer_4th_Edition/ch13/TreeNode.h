#ifndef __TREENODE_H
#define __TREENODE_H
#include <string>
class TreeNode
{
private:
    std::string value;
    int count;
    TreeNode *left;
    TreeNode *right;
public:
    TreeNode(const std::string &val, const int cnt);
    TreeNode(const TreeNode &orig);
    TreeNode &operator=(const TreeNode &rhs);
    ~TreeNode();
};

#endif