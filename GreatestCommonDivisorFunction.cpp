#include<iostream>
using namespace std;

int gcd(int n1, int n2)
{
    int gcd=1;
    int k=2;

    while(k<=n1 && n2>=k)
    {
        if (n1%k==0 && n2%k==0)
            gcd=k;
        k++;
    }
    return gcd;
}

int main()
{
    cout<<"enter the first number:";
    int n1;
    cin>>n1;

    cout<<"enter the second number:";
    int n2;
    cin>>n2;

    cout<<"the greatest common divisor"<<" for "<<n1<<" and "<<n2<<" is "<<gcd(n1, n2);
    return 0;
}
