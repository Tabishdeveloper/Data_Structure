#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)  // Base case
        return a;
    else  // Recursive case
        return gcd(b, a % b);
}

int main() {
    int a = 96, b = 36;
    cout << "GCD of " << a << " and " << b << " is " << gcd(a, b) << endl;
    return 0;
}
