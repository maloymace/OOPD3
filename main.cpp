#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double a = 4.8;
    double b = -7.9;
    double n = 0,m = 0;
    if (a >= b) {
        n =  pow(a - b,1/3.0);
    } else if (a < b) {
        n = pow(a, 2) + ((a -b)/sin(a*b));
    }
    if (n < b) {
        m = ((n+a)/(-b)) + sqrt((pow(sin(a),2)) - cos(n));
    } else if (n == b) {
        m = pow(b, 2) + tan(n * a);
    } else if (n > b) {
        m = pow(b, 3) + n * pow(a, 2);
    }
    cout << "a value is: " << a << endl;
    cout << "b value is: " << b << endl;
    cout << "m value is: " << m << endl;
    cout << "n value is: " << n << endl;
    return 0;
}
