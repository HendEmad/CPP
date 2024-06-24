#include<bits/stdc++.h>
using namespace std;
const int MAX_LENGTH = 100;

class arrayQueueType{
    int Rear;  //addition
    int Front;  //deletion
    int Length;  //count
    int arr[MAX_LENGTH];
public:
    //constructor
    arrayQueueType(){
        Front = 0;
        Rear = MAX_LENGTH - 1;
        Length = 0;
    }

    //functions
    int isEmpty(){
        return Length == 0;
    }

    bool isFull(){
        return Length == MAX_LENGTH;
    }

    void addQue(int Element){
        if(isFull()){
            cout << "Queue full!" << endl;
        }
        else{
            Rear = (Rear + 1) % MAX_LENGTH;
            arr[Rear] = Element;
            Length++;
        }
    }

    void deleteQueue(){
        if(isEmpty()){
            cout << "empty queue!" << endl;
        }
        else{
            Front = (Front + 1) % MAX_LENGTH;
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
        for(size_t i = Front; i != Rear + 1; i = (i + 1) % MAX_LENGTH){
            cout << arr[i] << " ";
        }
        //cout << arr[Rear];
    }
};


int main(){
    arrayQueueType q1;
    q1.addQue(10);
    q1.addQue(20);
    q1.addQue(30);
    q1.addQue(40);
    q1.deleteQueue();
    cout << q1.RearQueue();
    //q1.printQueue();
    return 0;
}
