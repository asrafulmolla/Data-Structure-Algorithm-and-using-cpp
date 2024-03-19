#include <iostream>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Function to insert a value into a BST
TreeNode* insert(TreeNode* root, int val) {
    // If the tree is empty, create a new node and return it as the new root
    if (root == NULL) {
        return new TreeNode(val);
    }

    // Otherwise, traverse the tree to find the appropriate position for the new value
    if (val < root->val) {
        root->left = insert(root->left, val); // Insert into the left subtree
    } else {
        root->right = insert(root->right, val); // Insert into the right subtree
    }

    return root;
}

// Function to print the inorder traversal of a BST
void inorderTraversal(TreeNode* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        cout << root->val << " ";
        inorderTraversal(root->right);
    }
}

int main() {
    TreeNode* root = NULL; // Initialize an empty BST

    // Insert elements into the BST
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    // Print the inorder traversal of the BST
    cout << "Inorder traversal of the BST: ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}
