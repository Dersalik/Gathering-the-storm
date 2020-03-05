#include<iostream>
#include<cstdlib>

 using namespace std;

 int main()

 {
     cout<<"enter two letter and the program will generate a random litter between them"<<endl;

     cout<<"enter the first letter";
     char letter1;
     cin>>letter1;

     cout<<"enter the second letter";
     char letter2;
     cin>>letter2;

     char randomChar = static_cast<char>(letter1+rand()%(letter2-letter1+1));
     cout<<randomChar;
     return 0;


 }
