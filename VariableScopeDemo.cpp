#include<iostream>
using namespace std;

void t1();
void t2();

int main()
{
    t1();
    t2();

    return 0;
}

int y;

void t1()
{
    int x=1;
    cout<<"the value for x is  "<<x<<endl;
    cout<<"the value for y is "<<y<<endl;

    x++;
    y++;
}

void t2()
{
    int x=1;
    cout<<"the value for x is "<<x<<endl;
    cout<<"the value for y is "<<y<<endl;
}

