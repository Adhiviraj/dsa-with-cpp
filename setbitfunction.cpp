#include <iostream>
using namespace std;

// Function to count total set bits in two numbers
int countTotalSetBits(int a, int b) {
    int setBitsInA = 0;
    int setBitsInB = 0;

    // Count set bits in 'a'
    while(a != 0){
        int lastBit = a & 1;   // extract last bit
        if(lastBit){
            setBitsInA++;
        }
        a = a >> 1;  // right shift
    }

    // Count set bits in 'b'
    while(b != 0){
        int lastBit = b & 1;
        if(lastBit){
            setBitsInB++;
        }
        b = b >> 1;
    }

    int totalSetBits = setBitsInA + setBitsInB;
    return totalSetBits;
}

int main(){
    int a, b;
    cin >> a >> b;

    int totalSetBits = countTotalSetBits(a, b);
    cout << "Total set bits = " << totalSetBits << endl;

    return 0;
}
