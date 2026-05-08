#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter value of a: ";
    cin >> a;

    cout << "Enter value of b: ";
    cin >> b;

    int lhs = (a + b) * (a + b);        // (a + b)^2
    int rhs = (a * a) + (2 * a * b) + (b * b);  // a^2 + 2ab + b^2

    cout << "\nValue of (a + b)^2 = " << lhs << endl;
    cout << "Value of a^2 + 2ab + b^2 = " << rhs << endl;

    if (lhs == rhs)
        cout << "Hence, (a + b)^2 = a^2 + 2ab + b^2 is verified." << endl;
    else
        cout << "The identity is not verified." << endl;

    return 0;
}
