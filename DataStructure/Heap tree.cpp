#include <iostream>
#include <vector>
using namespace std;

class Heap {
    vector <int> heapTree;

public:
    void heapify(int i) {
        int size = heapTree.size();
        int maxi = i;
        int l = i * 2 + 1;
        int r = i * 2 + 2;
        if(l < size && heapTree[l] > heapTree[maxi])
            maxi = l;
        if(r < size && heapTree[r] > heapTree[maxi])
            maxi = r;
        if (maxi != i) {
            swap(heapTree[i], heapTree[maxi]);
            heapify(maxi);
        }
    }

    void insertNode(int newNum) {
        int size = heapTree.size();
        if(size == 0)
            heapTree.emplace_back(newNum);
        else {
            heapTree.emplace_back(newNum);
            for(int i = size /2 - 1; i >= 0; i--) {
                heapify(i);
            }
        }
    }

    void deleteNode(int num) {
        int size = heapTree.size();
        int i;
        for(i = 0; i < size; i++) 
            if(num == heapTree[i])
                break;

        swap(heapTree[i], heapTree[size - 1]);
        heapTree.pop_back();

        for(int i = size/2 - 1; i >= 0; i--) 
            heapify(i);
    }

    void printTree() {
        int size = heapTree.size();
        for(int i = 0; i < size; i++) 
            cout << heapTree[i] << " ";
        cout << "\n";
    }
};

int main() {
    Heap maxHeap;
    maxHeap.insertNode(3);
    maxHeap.insertNode(4);
    maxHeap.insertNode(9);
    maxHeap.insertNode(5);
    maxHeap.insertNode(2);
    
    cout << " Max heap array: \n";
    maxHeap.printTree();

    maxHeap.deleteNode(9);

    cout << "After deleing element 9: \n";
    maxHeap.printTree();
}