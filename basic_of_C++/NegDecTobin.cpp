#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    const int BITS = 8;  // You can change this to 16, 32, etc.
    unsigned int num;

    // If n is negative, convert to 2's complement unsigned
    if (n < 0) {
        num = (1 << BITS) + n;  // e.g., 256 + (-17) = 239
    } else {
        num = n;
    }

    double ans = 0;
    int i = 0;

    while (i < BITS) {  // Ensure we output exactly BITS bits
        int bit = num & 1;
        ans = (bit * pow(10, i)) + ans;
        num = num >> 1;
        i++;
    }

    cout << "Binary value in 2's complement (" << BITS << "-bit) is: " << ans << endl;

    return 0;
}
