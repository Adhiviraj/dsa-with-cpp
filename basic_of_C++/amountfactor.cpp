#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the amount: ";
    cin >> n;

    int step = 1;

    while (step <= 4) {
        switch (step) {
            case 1:
                cout << "100 notes: " << n / 100 << endl;
                n %= 100;
                break;
            case 2:
                cout << "50 notes: " << n / 50 << endl;
                n %= 50;
                break;
            case 3:
                cout << "20 notes: " << n / 20 << endl;
                n %= 20;
                break;
            case 4:
                cout << "1 notes: " << n << endl; // last remainder
                break;
        }
        step++;
    }

    return 0;
}
