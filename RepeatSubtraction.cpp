#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand (time(0));
    int number1 = rand()%10;
    int number2 = rand()%10;

    if (number1 < number2)
    {
        int tempt=number1;
        number1 = number2;
        number2 = tempt;
    }

    cout<<"what is "<<number1<<" - "<<number2<<"?" <<endl;
    int answer;
    cin>>answer;

    while(number1-number2!=answer)
    {
    cout <<"wrong! try again"<<endl;
    cin>> answer;
    }

   cout <<"you got it!"<<endl;
   return 0;
}
