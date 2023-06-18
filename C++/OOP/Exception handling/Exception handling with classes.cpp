#include<bits/stdc++.h>
using namespace std;

class cexception
{
    int arr[100];
public:
    cexception()
    {
        for(int i = 0; i < 100; i++)
        {
            arr[i] = i;
        }
    }

    int get_element(int index)
    {
        if (index < 0)
            throw xSmall();
        if(index >= 100)
            throw xBig();
        return arr[index];
    }

    class xSmall
    {
    public:
        xSmall() {};
        void small ()
        {
            cout << "small element!" << endl;
        }
    };

    class xBig
    {
    public:
        xBig() {};
        void big()
        {
            cout << "Big element!" << endl;
        }
    };
};

int main()
{
    cexception a;
    int indx;
    cout << "please, enter the index desired: " << endl;
    try
    {
        cin >> indx;
        cout << a.get_element(indx) << endl;
    }
    catch (cexception :: xSmall s)
    {
        s.small();
    }
    catch (cexception :: xBig b)
    {
        b.big();
    }
    return 0;
}
