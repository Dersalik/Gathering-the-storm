#include <iostream>
using namespace std;

int main()
{
 cout<<"enter the first integer:";
 int n1;
 cin >>n1;

 cout<<"enter the second integer:";
 int n2;
 cin>>n2;

 int gcd=1;
 int k=2;

 while (k<=n1&&k<=n2)
    {
    if (n1%k==0 && n2%k==0)
    gcd=k;
    k++;
    }
   cout <<"the greatest common divisor for "<<n1<<" and "<<n2<<" is "<<gcd<<endl;
   return 0;

}
