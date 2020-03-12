#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
   int correctcount= 0;
   int count=0;
   long startTime = time(0);
   const int numberOfquestion =5;

   srand(time(0));

   while(count < numberOfquestion)
   {
    int number1= rand() %10;
    int number2= rand() %10;

    if (number1>number2)
    {
        int tempt =number2;
        number1 = number2;
        number2=tempt;
    }
    cout<<"what is "<<number1<<"-"<<number2<<"?"<<endl;
    int answer;
    cin>>answer;

    if (number1-number2==answer)
    {
      cout<<"you are correct!"<<endl;
      correctcount++;
    }
    else
        cout<<"your answer is incorrect the correct answer is "<<(number1-number2)<<endl;
        count++;
    }

    long endtime= time(0);
    long testime= endtime-startTime;

    cout<<"the correct count is "<<correctcount<<endl;
    cout<<"the test time is "<<testime<<"seconds"<<endl;

    return 0;

}
