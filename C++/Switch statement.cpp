#include<bits/stdc++.h>
using namespace std;

int main()
{

     switch(2)  //It accepts the int numbers only, it accepts math expressions which results int numbers as well.
     {
     case 1: cout << "Case #1" << endl;
     break;  // To stop the switch when reaching the specified case in switch parentheses.
     case 2: cout << "Case #2" << endl;
     break;
     case 3: cout << "Case #3" << endl;
     break;
     default:
        cout << "Not of range" << endl;
        break;
     }




     int x = 5;
     switch(x / 2)  // x/2 = 5/2 = 2
     {
         case 1: cout << "Case #1" << endl;
         break;  // To stop the switch when reaching the specified case in switch parentheses.
         case 2: cout << "Case #2" << endl;
         break;
         case 3: cout << "Case #3" << endl;
         break;
         default:
            cout << "Not of range" << endl;
            break;
     }




     // ERRORRRR //
     switch(4.5)
     {
         case 1: cout << "case #1" << endl;
         break;
         case 2: cout << "Case #2" << endl;
         break;
         case 3: cout << "Case #3" << endl;
         break;
         default:
            cout << "Out of range" << endl;
            break;
     }




     char c = 'a';  // Case #a
     char cc = 'A';  // out of range
     switch(cc)
     {
         case 'a': cout << "Case #a" << endl;
         break;
         case 'b': cout << "Case #b" << endl;
         break;
         default:
            cout << "Out of range" << endl;
            break;
     }
}
