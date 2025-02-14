#include <iostream>
using namespace std;

int main() {
    long long int n;
    cin >> n;

    // Handle negative numbers using two's complement
    if (n < 0) {
        n = (1LL << 16) + n;  // Convert to 16-bit two's complement
    }

    // Display the decimal value after conversion
    cout << "Two's complement (decimal): " << n << endl;

    string binary = "";

    // Convert to binary
    for (int i = 0; i < 16; i++) {
        int lastBit = n & 1;
        binary = (lastBit ? '1' : '0') + binary;
        n >>= 1;
    }

    // Output the 16-bit binary representation
    cout << "Binary: " << binary << endl;

    return 0;
}
