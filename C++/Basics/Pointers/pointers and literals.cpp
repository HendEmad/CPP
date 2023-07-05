#include<bits/stdc++.h>
using namespace std;

int main()
{
    char chr[5] = {'g', 'e', 'e', 'k'};
    char *ptr;
    ptr = chr;
    cout << ptr[3] << endl;  // k
    cout << *(ptr + 3) << endl;  // k
    cout << chr[3];  // k
}
