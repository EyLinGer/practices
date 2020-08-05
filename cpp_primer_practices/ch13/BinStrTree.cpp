#include "BinStrTree.h"

BinStrTree::BinStrTree(TreeNode *r):root(new TreeNode(*r))
{
}

BinStrTree::BinStrTree(const BinStrTree &orig):root(new TreeNode(*orig.root))
{
}

BinStrTree & BinStrTree::operator=(const BinStrTree &rhs)
{
    *root = *rhs.root;
}

BinStrTree::~BinStrTree()
{
    delete root;
}