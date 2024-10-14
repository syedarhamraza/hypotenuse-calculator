#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter side A and B: ";
    cin >> a >> b;

   // a = pow(a, 2);
   // b = pow(b, 2);
   // or we can do it directly
    c = sqrt(pow(a, 2) + pow(b, 2));

    cout << "The hypotenuse is: "<< c << endl;
    return 0;
}