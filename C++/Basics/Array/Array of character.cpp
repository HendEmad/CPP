#include<bits/stdc++.h>
using namespace std;

int main()
{
//**************EXAMPLE 1*********************
    // Initialization
    char ch[5] = {'a', 'b', 'c', 'd', '\0'};  // '\0' ==> Null ==> just tells the array to stop at this character
    // OR
    char ch[5] = {'a', 'b', 'c', 'd', NULL};
    // OR
    char ch[5] = {'a', 'b', 'c', 'd'};
    //OR
    char ch[4] = {'a', 'b', 'c', 0};
    // Print the elements; the loop is optional.
    //The best way:
    char[5] = "abcd";  //We can input only four elements in the array of size 5

    //To get the chars from the user
    char ch[10];
    cin >> ch;  //If the user inputs characters more than the size of the array, we will get run time error

    cout << ch << endl;  // abcd

    // If the user inputs a word including spaces like (ab cd ef), 'cin' will see the characters before the first space only
    // To slove this problem, we use `cin.get()`.

    cin.get(ch, 10, '$');  // It will continue to get inputs till the number of inputs exceed the size/2.

    // It passes the word to be printed and the size of this word
    cout << ch << endl;


//***************EXAMPLE 2*********************
    char ch1[10], ch2[10];
    cin.get(ch1, 10);  // Hend
    cin.get(ch2, 10);  // Emad
    cout << ch1 << endl << ch2 << endl;  // Hend
    // `cin.get()` stops reading inputs when seeing `\n`, so the second `cin.get()` will not allow to enter any other input, as it saw the `\n`.
    // To solve this, we will add another `cin.get()` between the two ones to read the `\n`.

    cin.get(ch1, 10);  // Hend
    cin.get();
    cin.get(ch2, 10);  // Emad
    cout << ch1 << endl << ch2 << endl; // Hend
                                        //  Emad

    // But this way is not efficient, so we will use `cin.getline()` instead
    cin.getline(ch1, 10);  // Hend
    cin.getline(ch2, 10);  // Emad
    cout << ch1 << endl << ch2 << endl;  // Hend
                                         // Emad


//***************EXAMPLE 3*********************
// important functions (Can be found in `cstdlib` library)

// 1. strcpy ==> string copy ==> to assign an array to another empty array
    char ch1[] = "AAA";
    char ch2[4];
    strcpy(ch2, ch1);
    cout << "ch1 = " << ch1 << endl << "ch2 = " << ch2 << endl;  // ch1 = AAA
                                                                // ch2 = AAA

// 2. strcat ==> sting concatenate ==> to concatenate two strings
    char ch1[] = "AAA";
    char ch2[4] = "HH";
    //strcat(ch2, ch1);  // HHAAA
    cout << strcat(ch2, ch1) << endl;

// 3. strcmp ==> string compare ==>
    cout << strcmp("abcd", "abc") << endl; //  1
    cout << strcmp("abc", "abcd") << endl;  // -1
    cout << strcmp("abe", "abc") << endl;  // 1
    cout << strcmp("ABC", "abc") << endl;  // -1
    cout << strcmp("abc ", "abc") << endl;  // 1
    cout << strcmp("abc12", "abc13") << endl;  // -1

// 4. strlen ==> str length ==> to find the size (length) of the array; start with 1 not 0
    char ch[] = "123456789";
    cout << strlen(ch) << endl;  // 9
}
