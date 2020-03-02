#include <iostream>
using namespace std;

int main()
{
int number;
cout <<"Guess the number under 100"<<endl;
cin >> number;
if (number < 100)
{
 if (number == 24)
cout <<"Your guess is right"<<endl;
}

else
    cout <<"Try again";
return 0;

}
