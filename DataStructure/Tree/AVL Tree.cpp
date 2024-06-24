#include<bits/stdc++.h>
using namespace std;

//AVL tree node
struct node
{
    int data;
    node* left;
    node* right;
    int height;
};

// Initialize a global pointer to node for tree's root
node* root;

//in-order function
void inOrder(node* curr)
{
    if(curr == NULL)
        return;
    inOrder(curr -> left);
    cout << curr -> data << " ";
    inOrder(curr -> right);
}

//pre-order function
void preOrder(node* curr)
{
    if(curr == NULL)
        return;
    cout << curr -> data << " ";
    preOrder(curr -> left);
    preOrder(curr -> right);
}

//post-order function
void postOrder(node* curr)
{
    if(curr == NULL)
        return;
    postOrder(curr -> left);
    postOrder(curr -> right);
    cout << curr -> data << " ";
}

//Search function
bool search(node* curr, int data)
{
    if(curr == NULL)
        return false;
    if(curr -> data == data)
        return true;
    if(data < curr -> data)
        return search(curr -> left, data);
    else
        return search(curr -> right, data);
}

//height computing function
int height(node* curr)
{
    if(curr == NULL)
        return 0;
    return curr -> height;
}

// right rotation
node* rightRotation(node* y)
{
    if(y == NULL || y -> left == NULL)
        return NULL;
    node* x = y -> left;
    node* t2 = x -> right;
    //perform rotation
    x -> right = y;
    y -> left = t2;
    //update heights
    y -> height = max(height(y -> left), height(y -> right)) + 1;
    x -> height = max(height(x -> left), height(x -> right)) + 1;
    //return new root
    return x;
}

//left rotation
node* leftRotation(node* x)
{
    if(x == NULL || x -> right == NULL)
        return NULL;
    node* y = x -> right;
    node* t2 = y -> left;
    //perform rotation
    y -> left = x;
    x -> right = t2;
    //update heights
    x -> height = max(height(x -> left), height(x -> right)) + 1;
    y -> height = max(height(y -> left), height(y -> right)) + 1;
    //return new root
    return y;
}

// calculate balance factor
int calcBalanceFactor(node* curr)
{
    if(curr == NULL)
        return 0;
    return height(curr -> left) - height(curr -> right);
}

// this function inserts a new node with given position to the AVL Tree
node* insertNode(node* curr, int newData)
{
    if(curr == NULL){
        node* newNode = new node();
        newNode -> data = newData;
        newNode -> height = 1;
        return newNode;
    }

    //repeat the same definition of insert at left and right subtrees
    if(newData < curr -> data)
        curr -> left = insertNode(curr -> left, newData);
    else if(newData > curr -> data)
        curr -> right = insertNode(curr -> right, newData);
    else
        return curr;

    //update the height of the node
    curr -> height = 1 + max(height(curr -> left), height(curr -> right));

    //check whether the tree is balanced or not
    int balance = calcBalanceFactor(curr);

    //case 1: left left case
    if(balance > 1 && newData < curr -> left -> data)
        return rightRotation(curr);
    //case 2: right right case
    if(balance < -1 && newData > curr -> right -> data)
        return leftRotation(curr);
    //case 3: left right case
    if(balance > 1 && newData > curr -> left -> data){
        curr -> left = leftRotation(curr -> left);
        return rightRotation(curr);
    }
    //case r: right left case
    if(balance > -1 && newData < curr -> right -> data){
        curr -> right = rightRotation(curr -> right);
        return leftRotation(curr);
    }

    return curr;
}

//Node with minimum value
node* minNode(node* curr)
{
    node* res = curr;
    while(res -> left != NULL)
        res = res -> left;
    return res;
}

//Node with maximum value
node* maxNode(node* curr)
{
    node* res = curr;
    while(res -> right != NULL)
        res = res -> right;
    return res;
}

//delete node
node* deleteNode(node* pos, int data)
{
    if(pos == NULL)
        return pos;
    if(data < pos -> data)
        pos -> left = deleteNode(pos -> left, data);
    if(data > pos -> data)
        pos -> right = deleteNode(pos -> right, data);
    else{
        //node with no child
        if(pos -> left == NULL && pos -> right == NULL){
            node* temp;
            pos = NULL;
            delete(temp);
        }
        //node with one right child
        else if(pos -> left == NULL){
            node* temp = pos -> right;
            pos = temp;
            delete(temp);
        }
        //node with one left chils
        else if(pos -> right == NULL){
            node* temp = pos -> left;
            pos = temp;
            delete(temp);
        }
        //node with two children
        else{
            node* temp = minNode(pos -> right);
            pos -> data = temp -> data;
            pos -> right = deleteNode(pos -> right, temp -> data);
        }
    }

    //return current node of the tree has only one node
    if(pos == NULL)
        return pos;
    //update the height of the tree
    pos -> height = 1 + max(height(pos -> left), height(pos -> right));
    //check balance
    int balance = calcBalanceFactor(pos);
    // in case of imbalance
    // case I: left left case
    if (balance > 1 && calcBalanceFactor(pos -> left) >= 0)
        return rightRotation(pos);
    // case II: right right case
    if (balance < -1 && calcBalanceFactor(pos -> right) <= 0)
        return leftRotation(pos);
    // case III: left right case
    if (balance > 1 && calcBalanceFactor(pos -> left) < 0) {
        pos -> left =  leftRotation(pos -> left);
        return rightRotation(pos);
    }
    // case IV: right left case
    if (balance < -1 && calcBalanceFactor(pos -> right) > 0) {
        pos -> right = rightRotation(pos -> right);
        return leftRotation(pos);

    return pos;
    }
}
int main(){
    return 0;
}
