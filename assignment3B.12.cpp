#include <iostream>
using namespace std;

int main() {
    int start, end;
    cout<<"enter the value of start";
    cin >> start >> end;

    for (int n = start; n <= end; n++) {
        if (n < 2) continue;

        bool isPrime = true;
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            cout << n << " ";
    }

    return 0;
}
