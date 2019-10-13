#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    cin >> a;
    if(a>=100 && a<200)
    {
        cout << "сто ";
    }
    else if(a>=200 && a<300)
    {
        cout << "двести ";
    }
    else if(a>=300 && a<400)
    {
        cout << "триста ";
    }
    else if(a>=400 && a<500)
    {
        cout << "четыреста ";
    }
    else if(a>=500 && a<600)
    {
        cout << "п€тьсот ";
    }
    else if(a>=600 && a<700)
    {
        cout << "шестьсот ";
    }
    else if(a>=700 && a<800)
    {
        cout << "семсот ";
    }
    else if(a>=800 && a<900)
    {
        cout << "восемсот ";
    }
    else if(a>=900 && a<1000)
    {
        cout << "дев€тьсот ";
    }

    if((a/10)%10==2)
    {
        cout << "двадцать ";
    }
    else if((a/10)%10==3)
    {
        cout << "тридцать ";
    }
    else if((a/10)%10==4)
    {
        cout << "сорок ";
    }
    else if((a/10)%10==5)
    {
        cout << "п€тьдес€т ";
    }
    else if((a/10)%10==6)
    {
        cout << "шестьдес€т ";
    }
    else if((a/10)%10==7)
    {
        cout << "семьдес€т ";
    }
    else if((a/10)%10==8)
    {
        cout << "восемдес€т ";
    }
    else if((a/10)%10==9)
    {
        cout << "дев€носто ";
    }

    if(a%100==10)
    {
        cout << "дес€ть ";
    }
    else if(a%100==11)
    {
        cout << "одиннадцать ";
    }
    else if(a%100==12)
    {
        cout << "двенадцать ";
    }
    else if(a%100==13)
    {
        cout << "тринадцать ";
    }
    else if(a%100==14)
    {
        cout << "четырнадцать ";
    }
    else if(a%100==15)
    {
        cout << "п€тнадцать ";
    }
    else if(a%100==16)
    {
        cout << "шестнадцать ";
    }
    else if(a%100==17)
    {
        cout << "семнадцать ";
    }
    else if(a%100==18)
    {
        cout << "восемнадцать ";
    }
    else if(a%100==19)
    {
        cout << "дев€тнадцать ";
    }

    if((a%100>=1 && a%100<10)||a%100>=20)
    {
        if(a%10==1)
        {
            cout << "один";
        }
        else if(a%10==2)
        {
            cout << "два";
        }
        else if(a%10==3)
        {
            cout << "три";
        }
        else if(a%10==4)
        {
            cout << "четыре";
        }
        else if(a%10==5)
        {
            cout << "п€ть";
        }
        else if(a%10==6)
        {
            cout << "шесть";
        }
        else if(a%10==7)
        {
            cout << "семь";
        }
        else if(a%10==8)
        {
            cout << "восемь";
        }
        else if(a%10==9)
        {
            cout << "дев€ть";
        }
    }
}
