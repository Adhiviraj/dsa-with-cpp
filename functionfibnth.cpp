#include <iostream>
using namespace std;

int fib(int nth) {
    // Handle base cases
    if (nth == 0) return 0;
    if (nth == 1) return 1;

    int a = 0, b = 1, nextnum;

    for (int i = 2; i <= nth; i++) {
        nextnum = a + b;
        a = b;
        b = nextnum;
    }
    return b; // final nth Fibonacci number
}

int main() {
    int nth;
    cout << "Enter n: ";
    cin >> nth;
    cout << "The " << nth << "th term is: " << fib(nth) << endl;
}
