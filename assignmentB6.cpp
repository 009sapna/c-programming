#include <iostream>
using namespace std;

int main() {
    int num1 = 10;        // integer value
    float num2 = 5.5;     // float value

    float result;

    // Implicit type casting happens here
    result = num1 + num2;

    cout << "Integer value: " << num1 << endl;
    cout << "Float value: " << num2 << endl;
    cout << "Result after addition (implicit casting): " << result << endl;

    return 0;
}
