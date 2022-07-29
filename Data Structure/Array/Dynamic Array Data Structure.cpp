#include<bits/stdc++.h>
using namespace std;

class arrayList
{
    int *arr;
    int maxSize;
    int length;
public:
    arrayList(int s)
    {
        if(s < 0)
            maxSize = 10;
        else
            maxSize = s;
        length = 0;
        arr = new int[maxSize];
    }

    bool isEmpty()
    {
        return length == 0;
    }

    bool isFull()
    {
        return length == maxSize;
    }

    int getSize()
    {
        return length;
    }

    void printArr()
    {
        for(size_t i = 0; i < length; i++)
            cout << arr[i] << " ";

        cout << endl;
    }

    void insertAt(int pos, int element)
    {
        if(isFull())
            cout << "List is full!" << endl;
        else if(pos < 0 || pos > length)
            cout << "Out of range!" << endl;
        else{
            for(size_t i = length; i > pos; i++)
                arr[i] = arr[i - 1];

            arr[pos] = element;
            length++;
        }
    }

    void insertAtEnd(int element)
    {
        if(isFull())
            cout << "The list is full!";
        else
            arr[length] = element;

        length++;
    }

    int searchEl(int element)
    {
        for(size_t i = 0; i < length; i++){
            if(arr[i] == element)
                return i;
        }
        return -1;
    }

    void insertNoDuplicate(int element)
    {
        if(searchEl(element) == -1)
            insertAtEnd(element);
        else
            cout << "The element is exist!" << endl;

    }

    void updateAt(int pos, int element)
    {
        if(pos < 0 || pos >= length)
            cout << "out of range!" << endl;
        else
            arr[pos] = element;
    }

    int getElement(int pos)
    {
        if(pos < 0 || pos >= length)
            cout << "Out of range!" << endl;
        else
            return arr[pos];
    }

    ~arrayList()
    {
        //delete elements at the end of the program
        delete[]arr;
    }

    void clearArr()
    {
        length = 0;
    }

    void deleteAt(int pos)
    {
        if(isEmpty())
            cout << "Empty list!" << endl;
        else if(pos < 0 || pos > length)
            cout << "Out of range!" << endl;
        else
            for(size_t i = pos; i < length; i++)
                arr[i] = arr[i + 1];

            length--;

    }
};

int main()
{
    arrayList ar(100);
    ar.insertAt(0, 10);
    ar.insertAt(1, 20);
    ar.insertAtEnd(30);
    ar.insertNoDuplicate(40);
    ar.updateAt(0, 5);
    cout << ar.getElement(1) << endl;
    //ar.printArr();
    ar.clearArr();
    ar.printArr();
    cout << ar.getSize() << endl;
}
