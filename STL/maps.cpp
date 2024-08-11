#include <iostream>
#include <map>
using namespace std;

int main() {
    map <int, string> myMap;  // based on balanced binary search tree; sorted based on the key value

    myMap[1] = "one";
    myMap[2] = "two";
    myMap[3] = "three";

    cout << "my map elements: ";
    for(const auto& pair : myMap){  // const pair<const int, string>& pair : myMap
        cout << pair.first << ": " << pair.second << endl;
    }

    cout << "Elements of key 2: " << myMap[2] << endl;

    auto it = myMap.find(3);  // O(log n)
    if(it != myMap.end()) {
        cout << "Found element " << it -> second << endl;
    } else{
        cout << "Not found " << endl;
    }

    return 0;
}