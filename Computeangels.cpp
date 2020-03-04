#include <iostream>
#include <cmath>
using namespace std;

int main()

{

    cout <<"Enter three points"<<endl;
   double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    double a = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
    double b = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
    double c = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

    double A = acos((a * a - b * b - c * c) / (-2 * b * c));
    double B = acos((b * b - a * a - c * c) / (-2 * a * c));
    double C = acos((c * c - b * b - a * a) / (-2 * a * b));

    const double PI=3.14159;

    cout <<"the three angels are "<<A*180/PI<<" "<<B*180/PI<<" "<<C*180/PI<<endl;
    return 0;
}
