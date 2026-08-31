#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1) {
        cout << "The number is neither prime nor composite\n";
        return 0;
    }

    bool isPrime = true;

    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << "The number is prime\n";
    } else {
        cout << "The number is composite\n";
    }

    return 0;
}