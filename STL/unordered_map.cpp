#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, string> unorderedmap;  // based on hashmap; unsorted

    unorderedmap[1] = "one";
    unorderedmap[2] = "two";
    unorderedmap[3] = "three";

    cout << "unirdered map elements: " << endl;
    for(const auto& pair : unorderedmap) {
        cout << pair.first << ": " << pair.second << endl;
    }

    cout << "element with key2: " << unorderedmap[2] << endl;

    auto it = unorderedmap.find(3); // O(1)
    if(it != unorderedmap.end()) {
        cout << "Element found at index " << it-> second << endl;
    }else {
        cout << "not found.";
    }
    return 0;
}