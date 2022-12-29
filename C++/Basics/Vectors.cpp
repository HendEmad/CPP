#include<bits/stdc++.h>
using namespace std;

// vectors
vector <int> num;  // It can be any primitive data type int, float, char

// We don't specify the size of vectors during the declaration as it changes dynamically

// Vectors initialization
vector <int> vector1 = {1, 2, 3, 4, 5};

vector <int> vector2 {1, 2, 3, 4, 5};


// Method 2 for vectors initialization
vector <int> vector3 (5, 12);  // 5 --> size, initialize vector with the value of 12
// The previous line is equivalent to:
vector <int> vector3 = {12, 12, 12, 12, 12};


int main()
{
    for(int i = 0; i < vector3.size(); i++)
        cout << vector3[i] << " ";
    cout << endl;
    cout << "VECTORS MODIFIERS....." << endl;
    // assign() --> It assigns a new value to the vector by replacing old ones.
    vector <int> v;
    v.assign(5, 10);
    cout << "The vector elements are: ";
    for(const int& i : v)
        cout << i << " ";

    // push_back() --> Push the elements into a vector from the back
    v.push_back(15);
    int n = v.size();  // size() --> get the size of the vector(starting with 1)
    cout << "\n After push_back, the last element is: " << v[n-1];

    // pop_back --> is to pop or remove elements from the vector from the back
    v.pop_back();

    cout << "\n The new vector elements are: ";
    for (const int& i : v)
        cout << i << " ";

    // insert() --> inserts new elements before the element at the specified position
    v.insert(v.begin(), 5);

    cout << "\n The first element is: " << v[0];
    cout << "\n The new vector elements are: ";
    for (const int& i : v)
        cout << i << " "; // prints 5 before the begin position

    // erase() --> to remove elements from a container from the specified position or range
    v.erase(v.begin());
    cout << "\n After erasing, the first element is: " << v[0];

    // emplace() -–> It extends the container by inserting new element at position
    // insertion at the beginning
    v.emplace(v.begin(), 5); // iterator pointing to the first element, the opposite is end()
    cout << "\n After emplacing, the first element is: " << v[0];

    // Insertion at the end
    v.emplace_back(20);
    n = v.size();
    cout << "\n The last element is: " << v[n-1];

    // Erase the vector
    v.clear();
    cout << "\n Vector size after erase(): " << v.size();

    // Two vectors to perform swapping
    vector <int> v1, v2;
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
    v2.push_back(4);

    cout << "\n\n Vector 1: ";
    for(int i = 0;i < v1.size(); i++)
        cout << v1[i] << " ";

    cout << "\n Vector 2: ";
    for(const int&i : v2)
        cout << i << " ";

    // swap v1 and v2
    v1.swap(v2);

    cout << "\n Vector 1 after swapping: ";
    for(int i = 0;i < v1.size(); i++)
        cout << v1[i] << " ";

    cout << "\n Vector 2 after swapping: ";
    for(const int&i : v2)
        cout << i << " ";

    return 0;
}

// Compute capacity
/*
size(): This function returns the number of elements in the vector.

max_size(): The max_size() function returns the maximum number of elements that the vector can hold.
capacity(): The capacity() function returns the size of the storage space currently allocated to the vector expressed as number of elements based on the memory allocated to the vector.
resize(): This function resizes the container so that it contains ‘n’ elements. If the current size of the vector is greater than n then the back elements are removed from the vector and id the current size is smaller than n then extra elements are inserted at the back of the vector.
empty(): Returns whether the container is empty, it return true if vector is empty else returns false.
*/


// Time complexity
/*
Random access – constant O(1)
Insertion or removal of elements at the end – constant O(1)
Insertion or removal of elements – linear in the distance to the end of the vector O(N)
Knowing the size – constant O(1)
Resizing the vector- Linear O(N)
*/
