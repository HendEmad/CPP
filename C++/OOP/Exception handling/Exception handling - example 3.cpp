#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[10] = {2, 3, 4, 1, 3, 5, 6, 8, 9};
    int index;
    cout << "Enter the index:" << endl;
    try
    {
        cin >> index;
        if (index < 0)
            throw string("Not allowed index...\n");
        if (index >= 10)
            throw index;
        cout << "Index " << index << " contains " << a[index];
    }
    catch (string str)
    {
        cerr << "Exception: " << str;
    }
    catch (int i)
    {
        cerr << "Exception: index " << i << " is out of range..." << endl;
    }
}
