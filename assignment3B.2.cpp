#include <iostream>
using namespace std;

int main() {
    int n, temp, rem, sum = 0;
    cout<<"enter the value of n :";
    cin >> n;
    temp = n;

    while (n > 0) {
        rem = n % 10;
        sum += rem * rem * rem;
        n /= 10;
    }

    if (sum == temp)
        cout << "Armstrong";
    else
        cout << "Not Armstrong";

    return 0;
}
