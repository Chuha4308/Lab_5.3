#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double f(const double x);
int main()
{
    double yp, yk, z;
    int n;
    cout << "yp = "; cin >> yp;
    cout << "yk = "; cin >> yk;
    cout << "n = "; cin >> n;
    cout << fixed;
    cout <<  "------------------" << endl;
    cout << "|" << setw(3) << "y" << "   |"
        << setw(5) << "z" << "    |" << endl;
    cout << "------------------" << endl;

    double dy = (yk - yp) / n;
    double y = yp;
    while (y <= yk)
    {
        z = f(1 + y * y) + pow(f(1) + pow(f(y*y),2),2);
        cout << "|" << setw(5) << setprecision(2) << y
            << " |" << setw(8) << setprecision(3) << z
            << " |" << endl;

        
        y += dy;
    }
    cout <<  "------------------" << endl;
    return 0;
 
}
double f(const double x)
{
    if (abs(x) >= 1)
        return cos(x/2)/(1+pow(sin(x),2));

    else
    {
        double S = 0;
        int i = 0;
        double a = 1;
        S = a;
        do
        {
            i++;
            double R = pow(x,3*i)/ ((2 * i - 2) * (2 * i - 1) * 2 * i);
            a *= R;
            S += a;
         
        } while (i < 6);
      
        return S;                                       
       

    }
}
