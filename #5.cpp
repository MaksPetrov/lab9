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
        cout << "��� �����";
    }
    else if(a>=12 && a<24)
    {
        cout << "��� ������";
    }
    else if(a>=24 && a<36)
    {
        cout << "��� ����";
    }
    else if(a>=36 && a<48)
    {
        cout << "��� ����";
    }
    else
    {
        cout << "��� �����";
    }
    a %= 12;
    if(a==0)
    {
        cout << "� �����";
    }
    else if(a==1)
    {
        cout << "� ������";
    }
    else if(a==2)
    {
        cout << "�� �����";
    }
    else if(a==3)
    {
        cout << "�� �����";
    }
    else if(a==4)
    {
        cout << "�� �������";
    }
    else if(a==5)
    {
        cout << "� ����";
    }
    else if(a==6)
    {
        cout << "� ������";
    }
    else if(a==7)
    {
        cout << "� ����";
    }
    else if(a==8)
    {
        cout << "� ��������";
    }
    else if(a==9)
    {
        cout << "� ������";
    }
    else if(a==10)
    {
        cout << "� ������";
    }
    else
    {
        cout << "� ������";
    }
}
