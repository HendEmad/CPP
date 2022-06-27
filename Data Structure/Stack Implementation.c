#include<bits/stdc++.h>
using namespace std;
const int MAX_SIZE = 100;

class stack{
  int top;
  int item[MAX_SIZE];
public:
    // constructor for top default value
    //stack():top(-1){}

    stack(){
        // The fisrt index is 0. So, we will set the initial value with 1
        // and then, we will increase it by 1.
        top = -1;
    }

    // to add elements
    void push(int element){
        if(top >= MAX_SIZE - 1) // 0 - 99
            cout << "Stack full on push";
        else
            top++;
            item[top] = element;
    }

    bool isEmpty(){
        return top == -1;
        /*if(top == -1)
            return true; // 1
        else
        return false; // 0*/
    }

    void pop(){
        if(isEmpty())
            cout << "Stack empty on pop";
        else
            top--;
    }

    void pop(int& element){
        if(isEmpty())
            cout << "Stack empty on pop";
        else{
            element = item[top];
            top--;
        }
    }

    void getTop(int& stackTop){
        if(isEmpyt())
            cout << "Stack empty on getTop";
        else{
            stackTop = item[top];
            cout << stackTop << endl;
        }
    }

    void print(){
        cout << "[";
        for(size_t i = 0; i <= top; i++){
            cout << item[i]<< " ";
        }
        cout << "]";
        cout << endl;
    }

};

int main(){
    stack s;
    s.push(5);
    s.push(10);
    s.push(15);
    s.push(20);
    s.print();
}
