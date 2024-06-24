#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* left;
    node* right;
};

node* root;

// in-order traversal
void inOrder(node* p)
{
    if(p == NULL)
        return;
    inOrder(p -> left);
    cout << p -> data << " ";
    inOrder(p -> right);
}

//pre-order traversal
void preorder(node* p)
{
    if(p == NULL)
        return;
    cout << p -> data << " ";
    preOrder(p -> left);
    preOrder(p -> right);
}

//post-order traversal
void postOrder(node* p)
{
    if(p == NULL)
        return;
    postOrder(p -> left);
    postOrder(p -> right);
    cout << p -> data << " ";
}

//Search if the given data is in the binary search tree
bool search(node* p, int data)
{
    if(p == NULL)
        return false;

    if(p -> data == data)
        return true;

    if(data < p -> data)
        return search(p -> left, data);
    else
        return search(p -> right, data);
}

//insert node --> return pointer(node -> newData & node -> position)
node* insertNode(node* p, int newData)
{
    //base case we reach a null node
    if(p == NULL){
        p = new node();
        p -> data = newData;
        return p;
    }
    //repeat the same function of insert at left OR right subtrees
    if(newData < p -> data)
        p -> data = insertNode(p -> left, newData);
    else if(newData > p -> data)
        p -> right = insertNode(p -> right, newData);
    return p;
}

// This function returns the node with minimum value found in the given tree
node* minNode(node* p)
{
    node* res = p;
    while(res -> left != NULL)
        res = res -> left;
    return res;
}

// This function returns the node with maximum value found in the given tree
node* maxNode(node* p)
{
    node* res = p;
    while(res -> right != NULL)
        res = res -> right;
    return res;
}

// This function deletes the given data in the binary search tree if exists
node* deleteNode(node* p, int data)
{
    if(p == NULL)
        return p;
    if(data < p -> data)
        p -> left = deleteNode(p -> left, data);
    else if(data > p -> data)
        p -> right = deleteNode(p -> right, data);
    else{
        //node with no child
        if(p -> left == NULL && p -> right == NULL){
            delete(p);
            return p;
        }
        //node with one right child
        else if(p -> left == NULL){
            node* temp = p -> right;
            delete(p);
            return temp;
        }
        //node with one left child
        else if(p -> right == NULL){
            node* temp = p -> left;
            delete(p);
            return temp;
        }
        //node with two children
        else{
            //get the inorder successor (smallest in the right subtree)
            node* temp = minNode(p -> right);
            // copy the successors content to this node
            p -> data = temp -> data;
            //delete the inorder successor
            p -> right = deleteNode(p -> right, temp -> data)
        }
    }
    return p;
}

// This function traverses the binary search tree in postorder to delete all nodes
void delete_tree(node* curr) {
    // base case we reach a null node
    if (curr == NULL)
        return;
    // repeat the same definition of postorder traversal
    delete_tree(curr->left);
    delete_tree(curr->right);
    delete(curr);
}
