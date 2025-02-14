#include <iostream>
using namespace std;

int main() {
    long long int n;
    cin >> n;
    unsigned long long int ans = 0;

    // Handle negative numbers using two's complement
    if (n < 0) {
        n = (1 << 16) + n;
    }

    // Convert decimal to binary
    while (n > 0) {
        ans = (ans << 1) | (n & 1);
        n >>= 1;
    }

    // Print the binary representation
    cout << "Binary: ";
    unsigned long long int mask = 1 << (16 - 1);
    for (int i = 0; i < 16; i++) {
        cout << (ans & mask ? '1' : '0');
        mask >>= 1;
    }
    cout << endl;

    return 0;
}