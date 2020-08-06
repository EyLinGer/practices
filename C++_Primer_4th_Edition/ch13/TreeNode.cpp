#include "TreeNode.h"
TreeNode::TreeNode(const std::string &val, const int cnt)
    : value(std::string(val)),
      count(cnt),
      left(new TreeNode("lnull", 0)),
      right(new TreeNode("rnull", 0))
{
}

TreeNode::TreeNode(const TreeNode &orig)
    :
    value(orig.value),
    count(orig.count),
    left(new TreeNode("lnull", 0)),
    right(new TreeNode("rnull", 0))
{
    *left = *orig.left;
    *right = *orig.right;
}

TreeNode & TreeNode::operator=(const TreeNode &rhs)
{
    value = rhs.value;
    count = rhs.count;
    *left = *rhs.left;
    *right = *rhs.right;
}

TreeNode::~TreeNode()
{
    delete left;
    delete right;
}