#include <iostream>
using namespace std;

int main()
{
    int seconds;
    cout <<"enter number of seconds " ;
    cin >> seconds;
    int minuts = seconds/60;
    int remsec = seconds % 60;
    cout << minuts << "and" << remsec << endl;
    return 0;
}
