#include<bits/stdc++.h>
using namespace std;

int main()
{
    //********************1. Assignment********************
    /*
    string x = "Ahmed", y;
    y = x; // Assignment of y equal to x
    cout << "Y way 1: " << y << endl;  // Ahmed

    y.assign(x); // Another way to assign x to y
    cout << "Y way 2: " << y << endl;  // Ahmed
    */

    // Taking string input from the user
    /*
    cout << "Please input string x: " << endl;
    cin >> x;  // Hend Emad
    cout << "User string input x: " << x << endl;  // Hend
    */

    //cin reads the input till finding a space, so use getline() in this case
    /*
    string x;
    cout << "Please input string x: " << endl;
    getline(cin, x);  // Hend Emad
    cout << "User string input x: " << x << endl;  // Hend Emad
    */

    // Functions of string class
    string x = "Ahmed Mostafa";
    // 1. at(); takes number (index), returns the first character of the string
    cout << "First char in the string is: " << x.at(0) << endl;  // A

    // 2.length(); returns the length of the string
    cout << "The length of the string is (length): " << x.length() << endl;  // 13

    // 3. size(); same as length, but size() is better in complexity
    cout << "The length of the string is(size): " << x.size() << endl;  // 13

    // 4. substr(); takes one or two parameters, returns a sub string from the original one
    cout << "Sub string from 1st to 3rd char of the original string: " << x.substr(1, 3) << endl;  // hme
    cout << "Sub string from 4th to the final char of the original string: " << x.substr(4) << endl;  // d Mostafa

    // 5. swap(); takes 2 inputs, returns the 2 inputs but swapped
    // This function is better than using a 3rd variable to swap as it avoid useful memory consuming
    string x2 = "22";
    x.swap(x2);
    cout << "After swapping, x =  " << x << endl;  // 22

    // 6. find(); takes a parameter string, returns the position of this specified string
    cout << "The index of A char in the x2 string: " << x2.find("A") << endl;

    // find() function ==> searches for a char from left to right, so if we have the same char in 2 different positions, this function will return the left most one
    // 7. find() ==> Same as find(), but searches form right to left
    string z = "Hendemad";
    cout << "find output= " << z.find("e") << endl;  // 1
    cout << "rfind output = " << z.rfind("e") << endl;  // 4

    // 8. erase(); takes one or two parameters, returns the string but without the specified parameters
    // The second parameter is execlusive
    cout << "Erase output: " << x2.erase(0, 3) << endl;  // ed Mostafa
    cout << "X2 after earsing(cutting): " << x2 << endl;  // Changes the original string
    cout << "Erase output 2: " << x2.erase(2) << endl;  // ed

    // 9. replace(); takes 3 parameters, the first is the position to start replacing, the second, is the size of the chars to be replaces, the third is the char or string to replace the original one with
    string name = "HendMostafaAhmed";
    cout << "The new name after replacing: " << name.replace(4, 7, "Ali") << endl;  // HendAliAhmed

    cout << "The name after the second replacing: " << name.replace(name.rfind("A"), 5, "Adel") << endl;  // HendAliAdel
    cout << "The name after the third replacing: " << name.replace(name.find("H"), 4, "Sara") << endl;  // SaraAliAdel

    // 10. insert(); takes two parameters, the first is the position of the char to be inserted, the second one is the char itself to be inserted, returns the string after insertion the new char to it.
    cout << "The name after adding the fourth name: " << name.insert(11, "Ebraheem") << endl;  // SaraAliAdelEbraheem
}
