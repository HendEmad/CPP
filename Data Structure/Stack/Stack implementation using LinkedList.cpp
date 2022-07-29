#include<bits/stdc++.h>
using namespace std;

template<class t>
class Stack{
    //set the node (value item + pointer next which points to the node itself)
    struct node{
        t item;
        node *next;
    };
    node *top, *cur;

public:
    //set initial value for the pointer top --> using constructor
    Stack(){
        top = NULL;
    }

    //INSERTION
    //----------
    //push funciton
    void push(t newItem){
       node *newItemPtr = new node;
       newItemPtr -> item = newItem;
       newItemPtr -> next = top;
       top = newItemPtr;
    }

    //check if the stack is empty or not
    bool isempty(){
        return top == NULL;
    }

    //DELETION
    //---------
    //pop function --> delete element without saving
    void pop(){
        if(isempty())
            cout << "Stack empty on pop";
        else{
            node* temp = new node;
            temp = top;
            //These two lines can written as
            //node* temp = top;
            top = top -> next;
            temp = temp -> next = NULL;
            delete temp;
        }
    }

    //pop function --> delete element after saving
    void pop(t &stacktop){
        if(isempty())
            cout << "Stack empty on pop";
        else{
            //top -> item means top(item) --> top of the item
            // top -> item --> the element exists on the top pointer
            stacktop = top -> item;
            node *temp = top;
            top = top -> next;
            temp = temp -> next = NULL;
            delete temp;
        }
    }

    //Function to get the element exists at the top of the stack
    void getTop(t &stacktop){
        if(isempty())
            cout << "Stack empty on gettop";
        else{
            stacktop = top -> item;

        }
    }

    // TRAVERSE
    //--------------
    //Function to print all elements of the stack
    void display(){
        // to avoid changing top pointer --> to avoid deleting any element by mistake
        cur = top;
        cout << "\nItems in the stack: ";
        cout << "[";
        while(cur != NULL){
            cout << cur -> item << " ";
            cur = cur -> next;
        }
        cout << "]";
    }
};

int main(){

    //INSERTION
    //-----------
    Stack<int>s;
    s.push(100);
    s.push(200);
    s.push(300);
    s.pop();
    s.display();

    int x = 0;
    s.getTop(x);
    cout << endl;
    cout << "The top element is: " << x << endl;
}
