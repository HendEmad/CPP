#include<bits/stdc++.h>
using namespace std;

class linkedList
{
    struct node
    {
        int item;
        node *next;
    };
    node *head;
    node *tail;
    int length;
public:
    linkedList()
    {
        head = tail = NULL;
        length = 0;
    }

    bool isEmpty()
    {
        return length == 0;
        //head == NULL;
    }
//Insertion
//-----------------------------------------------
    void insertFirst(int element)
    {
        node *newNode = new node;
        newNode -> item = element;
        if(length == 0){
            head = tail = newNode;
            newNode -> next = NULL;
        }
        else{
            newNode -> next = head;
            head = newNode;
        }
        length++;
    }

    void insertTail(int element)
    {
        node *newNode = new node;
        newNode -> item = element;
        if(length == 0){
            head = tail = newNode;
            newNode -> next = NULL;
        }
        else{
             tail -> next = newNode;
             newNode -> next = NULL;
             tail = newNode;
        }
        length++;
    }

    void insertAtPos(int pos, int element)
    {
        if(pos < 0 || pos > length)
            cout << "Out of range!" << endl;
        else{
            node *newNode = new node;
            newNode -> item = element;
            if(pos == 0)
                insertFirst(element);
            else if(pos == length)
                insertTail(element);
            else{
                node *cur = head;
                for(size_t i = 1; i < pos; i++){
                    cur = cur -> next;
                }
                newNode -> next = cur -> next;
                cur -> next = newNode;
                length++;
            }
        }
    }

    // Deletion
    //--------------------------------------------------------
    void removeFirst()
    {
        if(length == 0)
            cout << "Empty list!" << endl;
        else if(length == 1){
            delete head;
            tail = head = NULL;
            length--;
        }
        else{
            node *cur = head;
            head = head -> next;
            delete cur;
            length--;
        }
    }

    void removeBack()
    {
        if(length == 0)
            cout << "Empty list!" << endl;
        else if(length == 1){
            delete tail;
            tail = head = NULL;
            length--;
        }
        else{
            node *cur = head -> next;
            node *prev = head;
            while(cur != tail){
                prev = cur;
                cur = cur -> next;
            }
            delete cur;
            prev -> next = NULL;
            tail = prev;
            length--;
        }
    }


    void Remove(int element)
    {
        if(isEmpty())
            cout << "Empty list!" << endl;
        node *cur, *prev;
        //if the input element is the first element in the list
        if(head -> item == element){
            cur = head;
            head = head -> next;
            delete cur;
            length--;
            if(length == 0)
                tail = NULL;
        }
        else{
            prev = cur;
            cur = head -> next;
            while(cur != NULL){
                if(cur -> item == element)
                    break;
                prev = cur;
                cur = cur -> next;
            }
            if(cur == NULL)
                cout << "Not found!" << endl;
            else{
                prev -> next = cur -> next;
                if(tail == cur)
                    tail = prev;
                delete cur;
                length--;
            }
        }

    }

    void removeAt(int pos)
    {
        if(pos < 0 || pos >= length)
            cout << "Out of range!" << endl;
        else{
            node *cur, *prev;
            if(pos == 0){
                cur = head;
                head = head -> next;
                delete cur;
                length--;
                if(length == 0)
                    tail = NULL;
            }
            else{
                cur = head -> next;
                prev = head;
                for(size_t i = 1; i < pos; i++){
                    prev = cur;
                    cur = cur -> next;
                }
                prev -> next = cur -> next;
                if(tail == cur)
                    tail = prev;
                delete cur;
                length--;
            }
        }
    }

    //REVERSE
    //--------------------------------------------------------
    void Reverse()
    {
        node *prev, *cur, *next;
        prev = NULL;
        cur = head;
        next = cur -> next;
        while(next != NULL){
            next = cur -> next;
            cur -> next = prev;
            prev = cur;
            cur = next;
        }
        head = prev;
    }

    //SEARCH
    //-------------------------------------------------------
    int Search(int element)
    {
        node *cur = head;
        int pos = 0;
        while(cur != NULL){
            if(cur -> item == element)
                return pos;
            cur = cur -> next;
            pos++;
        }
        return -1;
    }


    //PRINT
    //-------------------------------------------------------
    void print()
    {
        node *cur = head;
        while(cur != NULL){
            cout << cur -> item << " ";
            cur = cur -> next;
        }
    }
};

int main()
{
    linkedList l;
    l.insertFirst(10);
    l.insertTail(30);
    l.insertTail(40);
    l.insertAtPos(1, 20);
    l.insertFirst(0);
    l.insertTail(50);
    // 0 10 20 30 40 50
    l.removeFirst();  // 10 20 30 40 50
    l.removeBack();  // 10 20 30 40
    l.Remove(30);  // 10 20 40
    l.removeAt(1); // 10 40
    l.Reverse();  // 40 10
    cout << "--------------" << endl;
    cout << l.Search(10) << endl; //1
    cout << "-----------------" << endl;
    l.print();
    return 0;
}
