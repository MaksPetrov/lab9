#include <iostream>

using namespace std;

int main()
{
    char a;
    int b;
    cin >> a >> b;
    if(b==0)
    {
        cout << a;
    }
    else if(b==1)
    {
        if(a=='N')
        {
            cout << "W";
        }
        if(a=='E')
        {
            cout << "N";
        }
        if(a=='S')
        {
            cout << "E";
        }
        if(a=='W')
        {
            cout << "S";
        }
    }
    else if(b==-1)
    {
        if(a=='N')
        {
            cout << "E";
        }
        if(a=='E')
        {
            cout << "S";
        }
        if(a=='S')
        {
            cout << "W";
        }
        if(a=='W')
        {
            cout << "N";
        }
    }
}
