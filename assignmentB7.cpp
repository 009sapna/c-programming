#include <iostream>
using namespace std;

int main() {
    float num = 9.75;   // float value
    int convertedNum;

    // Explicit type casting
    convertedNum = (int) num;

    cout << "Original float value: " << num << endl;
    cout << "After explicit casting to int: " << convertedNum << endl;

    return 0;
}
