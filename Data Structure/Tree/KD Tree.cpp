#include<bits/stdc++.h>
using namespace std;

const int k = 2;  // no.of properties each data point has
// Represent the node
struct Node
{
    int point[k];  // data points with size k
    Node *left, *right;
};

// A method to create a node of KD Tree
struct Node* newNode(int arr[]) //input array that contains the values in a node
{
       struct Node* temp = new Node;  // node pointer

       for(int i = 0; i < k; i++)
            temp -> point[i] = arr[i];  // assign all values into the node

       temp -> left = temp -> right = NULL;

       return temp;
};

// A method to insert a new node and returns root of the modified tree
// The parameter depth is used to decide axis of comparison
Node *insertRec(Node* root, int point[], unsigned depth)
{
    // check if the tree is empty
    if (root == NULL)
        // create a new node with the values of points passed to the function
        return newNode(point);

    // calculate the current dimension (x, y)
    unsigned cd = depth % k;  // if we want to create a node at depth 1, so 1 % 2 results 1 which means y coordinate

    // compare the new point with root on current dimensions 'cd' and decide the left or right subtree
    if (point[cd] < (root -> point[cd]))
        root -> left = insertRec(root -> left, point, depth + 1);
    else
        root -> right = insertRec(root -> right, point, depth + 1);

    return root;
}

// A method to insert a new point with given point in KD Tree and return new root
Node* insert_(Node* root, int point[])
{
    return insertRec(root, point, 0);
}

// A method to find the minimum of 3 integers
Node* minNode(Node* x, Node* y, Node* z, int d)
{
    Node *res = x;
    if (y != NULL && y -> point[d] < res -> point[d])
        res = y;
    if(z != NULL && z -> point[d] < res -> point[d])
        res = z;

    return res;
}


// A method to find the minimum of d'th dimension in the KD Tree
Node* findMinRec(Node* root, int d, unsigned depth)
{
    if (root == NULL)
        return NULL;

    // compute current dimension
    unsigned cd = depth % k;

    // compare point with root with respect to cd
    if (cd == d){
        if(root -> left == NULL)
            return root;
        return findMinRec(root -> left, d, depth + 1);
    }

    // if current dimension is different, then minimum can be anywhere
    return minNode(root, findMinRec(root -> left, d, depth + 1),
                   findMinRec(root -> right, d, depth + 1), d);
}

Node* findMin(Node *root, int d)
{
    return findMinRec(root, d, 0);
}

// A method to determine if two points are same in the KD space
bool arePointsSame(int point1[], int point2[])
{
    for(int i = 0; i < k; ++i)
        if(point1[i] != point2[i])
            return false;
    return true;
}

// A method to copy p2 to p1
void copyPoint(int p1[], int p2[])
{
    for(int i = 0; i < k; i++)
        p1[i] = p2[i];
}

// A method to search a point represented by 'point[]'
// The depth is used to determine the current coordinate (x, y)
bool searchRec(Node* root, int point[], unsigned depth)
{
    if (root == NULL)
        return false;
    if (arePointsSame(root -> point, point))
        return true;

    // compute the current dimension(coordinate/axis)
    unsigned cd = depth % k;

    // compare point with root with respect to cd
    if (point[cd] < root -> point[cd])
        return searchRec(root -> left, point, depth + 1);

    return searchRec(root -> right, point, depth + 1);
}

// A method to search a point in the KD tree
bool search_(Node* root, int point[])
{
    // pass current depth as 0
    return searchRec(root, point, 0);
}

// A method to delete a given point (point[]) from tree with root 'root'
// depth is the current dimension
// returns the root of the modified tree
Node *deleteNodeRec(Node *root, int point[], int depth)
{
    if (root == NULL)
        return NULL;

    // find current dimension
    int cd = depth % k;

    // if the point to be deleted is present at root
    if (arePointsSame(root -> point, point)){

        // 1. If the node has a right subtree
        if (root -> right != NULL){
            // find minimum of root's dimension in right subtree
            Node *min_ = findMin(root -> right, cd);
            // copy the minimum to root
            copyPoint(root -> point, min_ -> point);
            // recursively delete the minimum
            root -> right = deleteNodeRec(root -> right, min_-> point, depth + 1);
        }

        // 2. In case it has a left subtree
        else if (root -> left != NULL){
            // find minimum of root's dimension in left subtree
            Node *min_ = findMin(root -> left, cd);
            // find minimum to root
            copyPoint(root -> point, min_ -> point);
            // recursively delete the minimum
            root -> right = deleteNodeRec(root -> left, min_ -> point, depth + 1);
        }

        // 3. If the node is a leaf node
        else{
            delete root;
            return NULL;
        }
        return root;
    }

    // If the current node does not contain point, search downward
    if (point[cd] < root -> point[cd])
        root -> left = deleteNodeRec(root -> left, point, depth + 1);
    else
        root -> right = deleteNodeRec(root -> right, point, depth + 1);
    return root;
}

// A method to delete a given point from K D Tree with 'root'
 Node* deleteNode(Node *root, int point[])
{
   // Pass depth as 0
   return deleteNodeRec(root, point, 0);
}

int main()
{
    struct Node *root = NULL;
    int points[][k] = {{30, 40}, {5, 25}, {70, 70},
                      {10, 12}, {50, 30}, {35, 45}};

    int n = sizeof(points)/sizeof(points[0]);

    for (int i=0; i<n; i++)
       root = insert_(root, points[i]);

    // delete (3, 6)
    root = deleteNode(root, points[0]);

    int point1[] = {35, 45};
    (search_(root, point1))? cout << "Found\n": cout << "Not Found\n";

    int point2[] = {12, 19};
    (search_(root, point2))? cout << "Found\n": cout << "Not Found\n";

    cout << "Root after deletion of (30, 40)\n";
    cout << root->point[0] << ", " << root->point[1] << endl;

    return 0;
}
