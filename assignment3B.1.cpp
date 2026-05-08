#include <iostream>
using namespace std;

int main() {
    int n, rev = 0, temp, rem;
    cout<<"enter the value of n: ";
    cin >> n;
    temp = n;

    while (n > 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    if (temp == rev)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
