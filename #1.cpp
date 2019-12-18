#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int day, month;
    cout << "день = ";
    cin >> day;
    cout << "месяц = ";
    cin >> month;
    if((day>20 && day<30)||(day<=28 && month==2))
    {
        cout << "двадцать ";
    }
    if(day==1)
    {
        cout << "первое ";
    }
    else if(day==2)
    {
        cout << "второе ";
    }
    else if(day==3)
    {
        cout << "третье ";
    }
    else if(day==4)
    {
        cout << "четвёртое ";
    }
    else if(day==5)
    {
        cout << "пятое ";
    }
    else if(day==6)
    {
        cout << "шестое ";
    }
    else if(day==7)
    {
        cout << "седьмое ";
    }
    else if(day==8)
    {
        cout << "восьмое ";
    }
    else if(day==9)
    {
        cout << "девятое ";
    }
    else if(day==10)
    {
        cout << "десятое ";
    }
    else if(day==11)
    {
        cout << "одиннадцатое ";
    }
    else if(day==12)
    {
        cout << "двенадцатое ";
    }
    else if(day==13)
    {
        cout << "тринадцатое ";
    }
    else  if(day==14)
    {
        cout << "четырнадцатое ";
    }
    else if(day==15)
    {
        cout << "пятнадцатое ";
    }
    else if(day==16)
    {
        cout << "шестнадцатое ";
    }
    else if(day==17)
    {
        cout << "семнадцатое ";
    }
    else if(day==18)
    {
        cout << "восемнадцатое ";
    }
    else if(day==19)
    {
        cout << "девятнадцатое ";
    }
    else if(day==20)
    {
        cout << "двадцатое ";
    }
    else if(day==30 && month!=2)
    {
        cout << "тридцатое ";
    }
    else if(day==31 && month!=2 && month!=4 && month!=6 && month!=9 && month!=11)
    {
        cout << "тридцать первое ";
    }

    if(month==1 && day<=31)
    {
        cout << "января";
    }
    if(month==2 && day<=29)
    {
        cout << "февраля";
    }
    if(month==3 && day<=31)
    {
        cout << "марта";
    }
    if(month==4 && day<=30)
    {
        cout << "апреля";
    }
    if(month==5 && day<=31)
    {
        cout << "мая";
    }
    if(month==6 && day<=30)
    {
        cout << "июня";
    }
    if(month==7 && day<=31)
    {
        cout << "июля";
    }
    if(month==8 && day<=31)
    {
        cout << "августа";
    }
    if(month==9 && day<=30)
    {
        cout << "сентября";
    }
    if(month==10 && day<=31)
    {
        cout << "октября";
    }
    if(month==11 && day<=30)
    {
        cout << "ноября";
    }
    if(month==12 && day<=31)
    {
        cout << "декабря";
    }
}
