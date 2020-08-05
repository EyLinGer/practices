#ifndef __BINSTRTREE_H
#define __BINSTRTREE_H
#include "TreeNode.h"
class BinStrTree
{
private:
    TreeNode *root;
public:
    BinStrTree(TreeNode *r);
    BinStrTree(const BinStrTree &orig);
    BinStrTree &operator=(const BinStrTree &rhs);
    ~BinStrTree();
};

#endif