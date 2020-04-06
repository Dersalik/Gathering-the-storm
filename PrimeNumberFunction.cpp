#include<iostream>
#include<iomanip>
using namespace std;

bool isprime(int number)
{
    for(int divisor=2; divisor<=number/2;divisor++)
    {
        if(number%divisor==0)
        {
            return false;
        }
    }
    return true;
}

void printPrimeNumbers(int numberOfPrimes)
{
    const int Number_of_primes=50;
    const int Number_of_primes_perline=10;
    int count = 0;
    int number = 2;

    while(count<Number_of_primes)
    {
        if (isprime(number))
        {
            count++;

            if(count % Number_of_primes_perline==0)
            {
                cout << setw(4) << number << endl;
            }
            else
                 cout << setw(4) << number;

        }
        number++;
    }



}

int main()
{
    cout<<"the first 50 prime numbers are \n";
    printPrimeNumbers(50);
    return 0;

}
