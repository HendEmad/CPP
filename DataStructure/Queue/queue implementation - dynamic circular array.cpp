#include<bits/stdc++.h>
using namespace std;
//const int MAX_LENGTH = 100;

class arrayQueueType{
    int Rear;  //addition
    int Front;  //deletion
    int Length;  //count
    //dynamic
    int *arr;
    int maxSize;

public:
    //constructor
    arrayQueueType(int Size){
        if(Size <= 0)
            maxSize = 100;
        else
            maxSize = Size;
        Front = 0;
        arr = new int[maxSize];
        Rear = maxSize - 1;
        Length = 0;
    }

    //functions
    int isEmpty(){
        return Length == 0;
    }

    bool isFull(){
        return Length == maxSize;
    }

    void addQue(int Element){
        if(isFull()){
            cout << "Queue full!" << endl;
        }
        else{
            Rear = (Rear + 1) % maxSize;
            arr[Rear] = Element;
            Length++;
        }
    }

    void deleteQueue(){
        if(isEmpty()){
            cout << "empty queue!" << endl;
        }
        else{
            Front = (Front + 1) % maxSize;
            --Length;
        }
    }

    int frontQueue(){ //get frony
        //it takes boolean input and if true, it will continue the code, and if false it breaks and points to the like of the false statement
        assert(!isEmpty());
        return arr[Front];
    } //or
    /*void getFront(int &getFront){
        getFront = arr[Front];
    }*/

    int RearQueue()
    {
        assert(!isEmpty());
        return arr[Rear];
    }

    void printQueue()
    {
        assert(!isEmpty());
        for(size_t i = Front; i != Rear + 1; i = (i + 1) % maxSize){
            cout << arr[i] << " ";
        }
        //cout << arr[Rear];
    }
};


int main(){
    arrayQueueType q1(5);
    q1.addQue(10);
    q1.addQue(20);
    q1.addQue(30);
    q1.addQue(40);
    q1.addQue(50);
    //q1.addQue(60); // It will be added as it is dynamic array
    //q1.deleteQueue();
    //cout << q1.RearQueue();
    q1.printQueue();
    return 0;
}
