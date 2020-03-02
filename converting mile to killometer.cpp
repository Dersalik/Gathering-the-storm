#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter the distance in mile to convert to killometer"<< endl;

    double Distance;
    cin>>Distance;

    const double KILOMETERS_PER_MILE= 1.609;
    double kilometere= Distance * KILOMETERS_PER_MILE;
    cout << "the distance in killometer is "<< kilometere<<"km"<< endl;
    return 0;
}
