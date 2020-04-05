#include<iostream>
using namespace std;
void printgrade(double score)
{
    if(score>=90.0)
        cout<<"A"<<endl;
    else if(score>=80.0)
        cout<<"B"<<endl;
    else if(score>=70.0)
        cout<<"C"<<endl;
    else if(score>=60)
        cout<<"D"<<endl;
    else
        cout<<"f"<<endl;

}
int main()
{
 cout<<"enter a score: ";
 double score;
 cin>>score;
 cout<<"your grade is ";
 printgrade(score);
 return 0;
}
