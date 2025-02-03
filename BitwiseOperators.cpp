#include<iostream>
using namespace std;

int main () {

    int a = 4;
    int b = 6;

    cout << " a & b " << (a & b) << endl;
    cout << " a | b " << (a | b) << endl;
    cout << " a ^ b " << (a ^ b) << endl;
    cout << " ~a " << (~a) << endl;

    // Shift Operation
    cout << " a << 1 " << (a << 1) << endl;
    cout << " a >> 1 " << (a >> 1) << endl;
    cout << " b << 1 " << (a << 1) << endl;
    cout << " b >> 1 " << (a >> 1) << endl;
    cout << " a << 2 " << (a << 2) << endl;
    cout << " a >> 2 " << (a >> 2) << endl;
    cout << " b << 2 " << (a << 2) << endl;
    cout << " b >> 2 " << (a >> 2) << endl;
    return 0;

}