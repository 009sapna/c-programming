#include <iostream>
using namespace std;

int fact(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main() {
    int n, x;
    cin >> x >> n;

    double sum = 1;

    for (int i = 1; i <= n; i++) {
        int power = 2 * i;
        double term = 1;

        for (int j = 1; j <= power; j++)
            term *= x;

        term /= fact(power);

        if (i % 2 == 0)
            sum += term;
        else
            sum -= term;
    }

    cout << sum;
    return 0;
}
20
