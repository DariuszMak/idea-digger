#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

#define PI 3.14159265

int main(int argc, char* args[])
{
    double x,y;
    cin >> x >> y;
    double a,b;
    cin >> a >> b;
    double kat;
    cin >> kat;

    kat = (kat * PI / 180);

    double nx = 0.0, ny = 0.0;
    nx = a + (x - a) * cos(kat) - (y - b) * sin(kat);
    ny = b + (x - a) * sin(kat) + (y - b)  * cos(kat);

    cout << fixed << setprecision(2) << showpoint << nx << endl;
    cout << fixed << setprecision(2) << showpoint << ny;
}
