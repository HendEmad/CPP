#include <iostream>
#include <list>
#include <forward_list>
using namespace std;

int main() {
    list<int> my_list;

    my_list.push_back(10);
    my_list.push_back(20);
    my_list.push_back(5);

    auto it = my_list.begin();
    ++it;
    my_list.insert(it, 15);

    cout << "List elements: ";
    for(int value : my_list) {
        cout << value << " ";
    }

    my_list.pop_front();
    my_list.remove(20);
    my_list.sort();

    cout << endl << "list elements: ";
    for(int value: my_list) {
        cout << value << " ";
    }
    // =================================
    cout << "\nforward list\n";
    forward_list<int> myflist;

    myflist.push_front(10);
    myflist.push_front(20);
    myflist.push_front(30);

    auto itt = myflist.begin();
    myflist.insert_after(itt, 25);

    cout << "Forward list elements ";
    for(int value : myflist) {
        cout << value << " ";
    }
    cout << endl;

    myflist.pop_front();
    myflist.remove(25);

    cout << "Forward list elements ";
    for(int value: myflist) {
        cout << value << " ";
    }
    cout << endl;

    myflist.sort();
    cout << "Forward list elements ";
    for(int value: myflist) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}