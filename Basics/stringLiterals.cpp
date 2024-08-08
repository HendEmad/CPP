#include <iostream>
#include <string>
using namespace std;

int main() {
    using namespace string_literals;
    const char* name0 = R"(Emad
    Sbaer
    Insamil
    Hend)";
    const char* name = "Hend";
    // name[2] = 'h';
    cout << name;
    cout << endl << name0;
    return 0;
}