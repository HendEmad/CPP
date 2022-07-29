#include<bits/stdc++.h>
using namespace std;

// Initialize a binary tree node
struct node
{
    int data;
    node* left;
    node* right;
};

// Initialize the root pointer
node* root;

// This function performs inorder traversal of the binary tree
void inOrder(node* p)
{
    // base case
    if(p == NULL)
        return;
    inOrder(p -> left);
    cout << p -> data << " ";
    inOrder(p -> right);
}

//This funciton performs preOrder traversal of the binary tree
void preOrder(node* p)
{
    //base case
    if(p == NULL)
        return;
    cout << p -> data << " ";
    preOrder(p -> left);
    preOrder(p -> right);
}

//This function performs postorder traversal of the binary tree
void postOrder(node* p)
{
    if(p == NULL)
        return;
    postOrder(p -> left);
    postOrder(p -> right);
    cout << p -> data << " ";
}

//This function searches if the given data in the binary tree
bool search(node* p, int data)
{
    //base case
    if(p == NULL)
        return false;
    //check if we find the data at the p node
    if(p -> data == data)
        return true;
    //repeat the same funciton of the left and the right subtrees
    bool leftSearch = search(p -> left, data);
    bool rightSeacrh = search(p -> right, data);
    return leftSearch || rightSeacrh;
}

// This function traverses the binary tree in the postorder to delete all nodes
void deleteTree(node* p)
{
    //base case
    if(p == NULL)
        return;
    //repeat the same function of the traversal on the left and right subtrees
    deleteTree(p -> left);
    deleteTree(p -> right);
    delete(p);
}

int main()
{
    // Functionality testing

    //First level of binary tree
    root = new node();
    root -> data = 5;

    cout << "Binary tree in-order traversal : ";
    inOrder(root);
    cout << endl;
    cout << "Binary tree pre-order traversal : ";
    preOrder(root);
    cout << endl;
    cout << "Binary tree post-order traversal : ";
    postOrder(root);
    cout << endl << "----------------------------------------------" << endl;

    //Second level of binary tree
    root -> left = new node();
    root -> left -> data = 7;
    root -> right = new node();
    root -> right -> data = 11;

    cout << "Binary tree in-order traversal : ";
    inOrder(root);
    cout << endl;
    cout << "Binary tree pre-order traversal : ";
    preOrder(root);
    cout << endl;
    cout << "Binary tree post-order traversal : ";
    postOrder(root);
    cout << endl << "-------------------------------------------------" << endl;

    // Third level of the binary tree
    root -> left -> left = new node();
    root -> left -> left -> data = 4;
    root -> left -> right = new node();
    root -> left -> right -> data = 6;
    root -> right -> left = new node();
    root -> right -> left -> data = 9;
    root -> right -> right = new node();
    root -> right -> right -> data = 13;

    cout << "Binary tree in-order traversal : ";
    inOrder(root);
    cout << endl;
    cout << "Binary tree pre-order traversal : ";
    preOrder(root);
    cout << endl;
    cout << "Binary tree post-order traversal : ";
    postOrder(root);
    cout << endl;
    cout << "--------------------------------------------------" << endl;


    if(search(root, 9))
        cout << "element " << 9 << " in the tree" << endl;
    else
        cout << "element " << 9 << " not in the tree" << endl;

    if(search(root, 4))
        cout << "element " << 4 << " in the tree" << endl;
    else
        cout << "element " << 4 << " not in the tree\n";

    if (search(root, 8))
        cout << "element " << 8 << " in the tree\n";
    else
        cout << "element " << 8 << " not in the tree\n";

    if (search(root, 3))
        cout << "element " << 3 << " in the tree\n";
    else
        cout << "element " << 3 << " not in the tree\n";

    cout << "----------------------------------------------------\n";

    deleteTree(root);
    root = NULL;

    cout << "Binary Tree in-order traversal   : ";
    inOrder(root);
    cout << "\n";
    cout << "Binary Tree pre-order traversal  : ";
    preOrder(root);
    cout << "\n";
    cout << "Binary Tree post-order traversal : ";
    postOrder(root);
    cout << "\n----------------------------------------------------\n";

}
