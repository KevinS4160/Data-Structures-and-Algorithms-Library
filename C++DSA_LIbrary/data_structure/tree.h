#ifndef TREE_H
#define TREE_H

#include <iostream>

struct TreeNode {
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

class BinaryTree {
public:
    BinaryTree();
    ~BinaryTree();
    
    void insert(int value);
    bool search(int value);
    void inorderTraversal();
    void preorderTraversal();
    void postorderTraversal();

private:
    TreeNode* root;
    
    void insert(TreeNode*& node, int value);
    bool search(TreeNode* node, int value);
    void inorderTraversal(TreeNode* node);
    void preorderTraversal(TreeNode* node);
    void postorderTraversal(TreeNode* node);
    void destroyTree(TreeNode* node);
};

#endif // TREE_H
