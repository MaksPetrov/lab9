#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    cin >> a;
    if(a==10)
    {
        cout << "десять ";
    }
    else if(a==11)
    {
        cout << "одиннадцать ";
    }
    else if(a==12)
    {
        cout << "двенадцать ";
    }
    else if(a==13)
    {
        cout << "тринадцать ";
    }
    else if(a==14)
    {
        cout << "четырнадцать ";
    }
    else if(a==15)
    {
        cout << "пятнадцать ";
    }
    else if(a==16)
    {
        cout << "шестнадцать ";
    }
    else if(a==17)
    {
        cout << "семнадцать ";
    }
    else if(a==18)
    {
        cout << "восемнадцать ";
    }
    else if(a==19)
    {
        cout << "девятнадцать ";
    }

    if(a>=20 && a<40)
    {
        if(a>=20 && a<30)
        {
            cout << "двадцать ";
        }
        else if(a>=30 && a<40)
        {
            cout << "тридцать ";
        }

        if(a%10==1)
        {
            cout << "одно ";
        }
        else if(a%10==2)
        {
            cout << "два ";
        }
        else if(a%10==3)
        {
            cout << "три ";
        }
        else if(a%10==4)
        {
            cout << "четыре ";
        }
        else if(a%10==5)
        {
            cout << "пять ";
        }
        else if(a%10==6)
        {
            cout << "шесть ";
        }
        else if(a%10==7)
        {
            cout << "семь ";
        }
        else if(a%10==8)
        {
            cout << "восемь ";
        }
        else if(a%10==9)
        {
            cout << "девять ";
        }
    }
    if(a==40)
    {
        cout << "сорок ";
    }

    if((a>=10 && a<=20)||(a%10>=5 && a%10<=9)||(a==30)||(a==40))
    {
        cout << "учебных заданий";
    }
    else if(a%10==1)
    {
        cout << "учебное задание";
    }
    else if(a%10>=2 && a%10<=4)
    {
        cout << "учебных задания";
    }
}
