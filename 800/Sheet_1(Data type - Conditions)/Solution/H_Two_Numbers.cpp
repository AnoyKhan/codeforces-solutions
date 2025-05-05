#include <iostream>
#include <cmath>  // For floor, ceil, and round functions
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    double result = (double)A / B;  // Compute division as a floating-point number

    cout << "floor " << A << " / " << B << " = " << floor(result) << endl;
    cout << "ceil " << A << " / " << B << " = " << ceil(result) << endl;
    cout << "round " << A << " / " << B << " = " << round(result) << endl;

    return 0;
}
