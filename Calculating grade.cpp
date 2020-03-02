#include <iostream>

using namespace std;

int main()
{
 int grade;
 cout <<"enter the grade";
 cin >> grade;

if (grade>=90.0)
    cout <<" grade is A";
    else
        if (grade>=80.0)
        cout <<"grade is B";
    else
        if (grade>=70.0)
        cout <<"the grade is c";
    else
        cout <<"grade is D";
  return 0;
}
