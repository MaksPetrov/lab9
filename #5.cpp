#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    cin >> a;
    a -= 4;
    a %= 60;
    if(a<12)
    {
        cout << "год зелёно";
    }
    else if(a>=12 && a<24)
    {
        cout << "год красно";
    }
    else if(a>=24 && a<36)
    {
        cout << "год жёлто";
    }
    else if(a>=36 && a<48)
    {
        cout << "год бело";
    }
    else
    {
        cout << "год чёрно";
    }
    a %= 12;
    if(a==0)
    {
        cout << "й крысы";
    }
    else if(a==1)
    {
        cout << "й коровы";
    }
    else if(a==2)
    {
        cout << "го тигра";
    }
    else if(a==3)
    {
        cout << "го зайца";
    }
    else if(a==4)
    {
        cout << "го дракона";
    }
    else if(a==5)
    {
        cout << "й змеи";
    }
    else if(a==6)
    {
        cout << "й лошади";
    }
    else if(a==7)
    {
        cout << "й овцы";
    }
    else if(a==8)
    {
        cout << "й обезьяны";
    }
    else if(a==9)
    {
        cout << "й курицы";
    }
    else if(a==10)
    {
        cout << "й собаки";
    }
    else
    {
        cout << "й свиньи";
    }
}
