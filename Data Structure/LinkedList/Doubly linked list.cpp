/*
Advantages:
- Traverse (from head to tail & from tail to head) (Multi-directional).
- We can easily get the elements before and after specific element.
- We can easily reverse the function(easier than single linked list).

Disadvantages:
- more space needed(address next, prevoius, ...).
- We need to be careful while linking nodes.
*/

#include<bits/stdc++.h>
using namespace std;

class doublyLinkedList
{
private:
    struct node
    {
        int item;
        node *next;
        node *prev;
    };
    node *head;
    node *tail;
    int length;

public:
    //constructor for initial values
    doublyLinkedList()
    {
        head = NULL;
        tail = NULL;
        length = 0;
    }

    // Function to check if the pos to use is empty or not
    bool isEmpty()
    {
        if(length == 0)
            return true;
        else
            return false;
    }

    //INSERTION
    //---------------------------------------------------------

    // Function to add new node at the head of given node
    void insertFirst(int element)
    {
        node *newNode = new node;
        newNode -> item = element;
        if(length == 0){
            head = tail = newNode;
            newNode -> next = newNode -> prev = NULL;
        }
        else{
            newNode -> next = head;
            newNode -> prev = NULL;
            head -> prev = newNode;
            head = newNode;
        }
        length++;
    }

    // Function to add new node at the tail of given node
    void insertLast(int element)
    {
        node *newNode = new node;
        newNode -> item = element;
        if(length == 0){
            head = tail = newNode;
            newNode -> next = newNode -> prev = NULL;
        }
        else{
            newNode -> next = NULL;
            newNode -> prev = tail;
            tail -> next = newNode;
            tail = newNode;
        }
        length++;
    }

    // Function to add new node at any pos
    void insertAt(int pos, int element)
    {
        if(pos < 0 || pos > length)
            cout << "Out of range!" << endl;
        else{
            node *newNode = new node;
            newNode -> item = element;
            if(pos == 0)
                insertFirst(element);
            else if(pos == length)
                insertLast(element);
            else{
                node *cur = head;
                for(size_t i = 1; i < pos; i++)
                    cur -> next = cur;
                newNode -> next = cur -> next;
                newNode -> prev = cur;
                cur -> next = newNode;
                cur -> next -> prev = newNode;
                length++;
            }
        }
    }

    //DELETION
    //---------------------------------------------------

    // Function to remove the first node
    void removeFisrt()
    {
        if(length == 0) // head == null
            cout << "List is empty!" << endl;
        else if(length == 1){ // head == tail
            delete head;
            head = tail = NULL;
        }
        else{
            node *cur = head;
            head = head -> next;
            head -> prev = NULL;
            delete cur;
        }
        length--;
    }

    // Function to remove the last node
    void removeLast()
    {
        if(length == 0)
            cout << "List is empty!" << endl;
        else if(length == 1){
            delete tail;
            head = tail = NULL;
        }
        else{
            node *cur = tail;
            tail = tail -> prev;
            tail -> next = NULL;
            delete cur;
        }
        length--;
    }

    // Function to remove a node from any position
    void removeAtElement(int element)
    {
        if(length == 0)
            cout << "Out of range!" << endl;
        else if(head -> item == element)
            removeFisrt();
        else if(tail -> item == element)
            removeLast();
        else{
            node *cur = head -> next;
            while(cur != NULL){
                if(cur -> item == element)
                    break;
                cur = cur -> next;
            }
            if(cur == NULL)
                cout << "Not found element!" << endl;
            /*else if(cur -> next == NULL)
                removeLast();*/
            else{
                cur -> prev -> next = cur -> next;
                cur -> next -> prev = cur -> prev;
                delete cur;
                length--;
            }
        }
    }

    void removeAtPos(int pos)
    {
        if (pos < 0 || pos >= length)
            cout << "Out of range!";
        else if(pos == 0)
            removeFisrt();
        else if(pos == length - 1)
            removeLast();
        else{
            node *cur = head -> next;
            for(size_t i = 1; i < pos; i++)
                cur = cur -> next;
            cur -> prev -> next = cur -> next;
            cur -> next -> prev = cur -> prev;
            delete cur;
        }
        length--;
    }

    // SEARCHING
    //-------------------

    //function to search for a specific node
    void searchElement(int element)
    {
        if(head -> item == element || tail -> item == element)
            cout << "exist" << endl;
        else{
            node *cur = head -> next;
            while(cur != NULL){
                if(cur -> item == element)
                    cout << "exist" << endl;
                cur = cur -> next;
            }
            cout << "Not exist" << endl;
        }
    }

    //PRINT
    //-----------------------------
    void printList()
    {
        cout << "List = [ ";
        node *cur = head;
        while(cur != NULL){
            cout << cur -> item << " ";
            cur = cur -> next;
        }
        cout << "]" << endl;
    }

    void printReverseList()
    {
        cout << "Reversed List = [ ";
        node *cur = tail;
        while(cur != NULL){
            cout << cur -> item << " ";
            cur = cur -> prev;
        }
        cout << "]" << endl;
    }

    // destructor for memory reset
    ~doublyLinkedList()
    {
        node *temp;
        while(head != NULL){
            temp = head;
            head = head -> next;
            delete temp;
        }
        tail = NULL;
        length = 0;
    }

};


int main()
{
    doublyLinkedList dl;
    dl.insertAt(0, 10);  //10
    dl.insertAt(1, 20);  //10 20
    dl.insertAt(2, 30);  // 10 20 30
    dl.insertAt(3, 40);  // 10 20 30 40
    dl.insertFirst(0);  //0 10 20 30 40
    dl.insertLast(50);  // 0 10 20 30 40 50
    dl.removeFisrt();  // 10 20 30 40 50
    dl.removeLast();  // 10 20 30 40
    dl.removeAtElement(20); // 10 30 40
    dl.removeAtPos(1); // 10 40
    dl.searchElement(20);
    dl.printList();  //[ 10 40 ]
    dl.printReverseList(); //[ 40 10]
    return 0;
}
