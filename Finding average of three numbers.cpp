#include <iostream>
using namespace std;

int main()
{
double number1, number2, number3;
cout << "enter three numbers: ";
cin >> number1 >> number2 >> number3;
double average = (number1+number2+number3)/3;
cout << "the average is "<< average<< endl;

return 0;
}
