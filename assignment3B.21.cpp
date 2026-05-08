#include <iostream>
using namespace std;

int main() {
    int num, count = 0, sum = 0;
    int max = -9999, min = 9999;

    while (true) {
        cin >> num;
        if (num == -1) break;

        count++;
        sum += num;

        if (num > max) max = num;
        if (num < min) min = num;
    }

    cout << "Count = " << count << endl;
    cout << "Maximum = " << max << endl;
    cout << "Minimum = " << min << endl;
    cout << "Average = " << (count ? sum / count : 0);

    return 0;
}
21
