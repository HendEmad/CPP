#include<bits/stdc++.h>
using namespace std;

int main()
{

    // Program to print the following shape:
    /*
    *****
    *****
    *****
    *****
    *****
    */

    for (int i = 0; i < 5; i++){  //rows
        for (int j = 0; j < 5; j++){  //columns
            cout << "*";
        }
        cout << endl;
    }
//============================================================


    // Program to print the following shape:
    /*
    *
    **
    ***
    ****
    *****
    */

    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
//=========================================================


    /*
    *****
    ****
    ***
    **
    *
    */

    for(int i = 5; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
//========================================================


    /*
    *
    **
    ***
    ****
    *****
    */

    for(int i = 1; i <= 5; i++){
        for (int j = 4; j >= i; j--){
            cout << " ";
        }
        for (int k = 1; k <= i; k++){
            cout << "*";
        }
        cout << endl;
    }
//=====================================================


    /*
    *****
     ****
      ***
       **
        *
    */

    for(int i = 0; i < 5; i++){
        for(int k = 0; k < i; k++){
            cout << " ";
        }
        for(int j = 4; j >= i; j--){
            cout << "*";
        }
        cout << endl;
    }
//=====================================================


    /*
        *
       ***
      *****
     *******
    *********
    */

    for(int i = 1; i <= 5; i++){
        for(int j = 4; j >= i; j--){
            cout << " ";
        }
        for(int k = 1; k <= i*2-1; k++){
            cout << "*";
        }
        cout << endl;
    }
//======================================================


    /*
    *********
     *******
      *****
       ***
        *
    */

    int e = 9;
    for(int i = 1; i <= 5; i++){
        for(int j = 0; j < i-1; j++){
            cout << " ";
        }
        for(int k = 0; k < e; k++){
            cout << "*";
        }
        cout << endl;
        e -= 2;
    }
}
