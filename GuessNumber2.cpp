#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(0));
    int number =rand()%101;

    cout<<"Guess the number between 0 and 100"<<endl;
    int guess;


    while(guess!=number)
    {
    cout << "enter your guess";

    cin>>guess;

    if (number==guess)
    cout <<"you are right"<<endl;
    else if (guess > number)
    cout<<"your guess is to high"<<endl;
    else
    cout <<"you guess is too low"<<endl;
    }


}






