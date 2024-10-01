#include <iostream>
using namespace std;

int GreatestCommonDivisor(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    cout << "Enter two positive numbers: ";
    cin >> a >> b;

    int gcd = GreatestCommonDivisor(a, b);
    cout << "The GCD of " << a << " and " << b << " is " << gcd << endl;
    return 0;
}