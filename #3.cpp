#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    cin >> a;
    if(a==10)
    {
        cout << "������ ";
    }
    else if(a==11)
    {
        cout << "����������� ";
    }
    else if(a==12)
    {
        cout << "���������� ";
    }
    else if(a==13)
    {
        cout << "���������� ";
    }
    else if(a==14)
    {
        cout << "������������ ";
    }
    else if(a==15)
    {
        cout << "���������� ";
    }
    else if(a==16)
    {
        cout << "����������� ";
    }
    else if(a==17)
    {
        cout << "���������� ";
    }
    else if(a==18)
    {
        cout << "������������ ";
    }
    else if(a==19)
    {
        cout << "������������ ";
    }

    if(a>=20 && a<40)
    {
        if(a>=20 && a<30)
        {
            cout << "�������� ";
        }
        else if(a>=30 && a<40)
        {
            cout << "�������� ";
        }

        if(a%10==1)
        {
            cout << "���� ";
        }
        else if(a%10==2)
        {
            cout << "��� ";
        }
        else if(a%10==3)
        {
            cout << "��� ";
        }
        else if(a%10==4)
        {
            cout << "������ ";
        }
        else if(a%10==5)
        {
            cout << "���� ";
        }
        else if(a%10==6)
        {
            cout << "����� ";
        }
        else if(a%10==7)
        {
            cout << "���� ";
        }
        else if(a%10==8)
        {
            cout << "������ ";
        }
        else if(a%10==9)
        {
            cout << "������ ";
        }
    }
    if(a==40)
    {
        cout << "����� ";
    }

    if((a>=10 && a<=20)||(a%10>=5 && a%10<=9)||(a==30)||(a==40))
    {
        cout << "������� �������";
    }
    else if(a%10==1)
    {
        cout << "������� �������";
    }
    else if(a%10>=2 && a%10<=4)
    {
        cout << "������� �������";
    }
}
