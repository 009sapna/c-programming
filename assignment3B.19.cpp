#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0, total = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
        total += sum;
    }

    cout << total;
    return 0;
}
