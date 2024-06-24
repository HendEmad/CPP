// don't need any size
#include<bits/stdc++.h>
using namespace std;
template<class t>

class linkedQueue
{
private:
    struct node
    {
        t item;
        node *next;
    };

    node *frontPtr;
    node *rearPtr;
    int length;

public:
    //constructor
    linkedQueue()
    {
        frontPtr = rearPtr = NULL;
        length = 0;
    }

    //is empty function
    bool isEmpty()
    {
        //return length == 0;
        if (rearPtr == NULL)
            return true;
        else
            return false;
    }

    //addition function
    void enqueue(t element)
    {
        if(isEmpty()){
            frontPtr = new node;
            frontPtr -> item = element;
            frontPtr -> next = NULL;
            rearPtr = frontPtr;
            length++;
        }
        else{
            node *newPtr = new node;
            newPtr -> item = element;
            newPtr -> next = NULL;
            rearPtr -> next = newPtr;
            rearPtr = newPtr;
            length++;
        }
    }

    void dequeue()
    {
        if(isEmpty())
            cout << "Empty queue!";
        else if(length == 1){
            delete frontPtr;
            rearPtr = NULL;
            length = 0;
        }
        else{
            node *tempPtr =frontPtr;
            frontPtr = frontPtr -> next;
            delete tempPtr;
            length--;
        }
    }

    t getFront()
    {
        assert(!isEmpty());
        return frontPtr -> item;
    }

    t getRear()
    {

        assert(!isEmpty());
        return rearPtr -> item;
    }

    /*
    void getFront2(int &el){
        el = frontPtr -> item;
    }
    */

    void clearQue()
    {
        node *currentPtr;
        while(frontPtr != NULL){
            currentPtr = frontPtr;
            frontPtr = frontPtr -> next;
            delete currentPtr;
        }
        rearPtr = NULL;
        length = 0;
    }

    void displayQue()
    {
        node *currentPtr = frontPtr;
        cout << "Items in the queue: [";
        while(currentPtr != NULL){
            cout << currentPtr -> item << " ";
            currentPtr = currentPtr -> next;
        }
        cout << "]" << endl;
    }

    int getSize()
    {
        return length;
    }

    void searchQue(t item)
    {
        node *currentPtr = frontPtr;
        bool flag = true;
        while(currentPtr != NULL){
            if(currentPtr -> item == item){
                cout << "The item: "<< item << " is found" << endl;
                flag = false;
                break;
            }
            currentPtr = currentPtr -> next;
        }
        if(flag)
            cout << "the item: " << item << " is not found" << endl;
    }
};

int main()
{
    linkedQueue<char>q1;
    q1.enqueue('A');
    q1.enqueue('B');
    q1.enqueue('C');
    q1.dequeue();
    q1.searchQue('B');
    q1.searchQue('A');
    cout << "front = " << q1.getFront() << endl;
    cout << "rear = " << q1.getRear() << endl;
    q1.displayQue();
    q1.clearQue();
    q1.displayQue();
    cout << q1.getSize() << endl;
}

//Time complexity
/*
addition & deletion = const time
search = linear time
*/
