#include <bits/stdc++.h>
using namespace std;

class Cll
{
    struct Node
    {
        int item;
        Node* next;
        };
    Node* head;
    Node* tail;
    int length;

public:
    Cll()
    {
        head = tail = NULL;
        length = 0;
    }

    bool isEmpty()
    {
        return (length == 0);
    }

    void displayItems()
    {
        Node* curr = head;
        do
        {
            cout << curr -> item << " ";
            curr = curr -> next;
        } while (curr != head);
    }

    // insertion at the tail function
    void insertAtTail(int item)
    {
        Node* newNode = new Node;
        newNode -> item = item;
        if (isEmpty())
        {
            tail = head = newNode;
            tail -> next = newNode;
        }
        else{
            tail -> next = newNode;
            newNode -> next = head;
            tail = newNode;
        }

        length ++;
    }
};

int main()
{
    Cll c1;
    c1.insertAtTail(5);
    c1.insertAtTail(10);
    c1.insertAtTail(100);
    c1.insertAtTail(500);
    c1.displayItems();
}
