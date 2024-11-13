#include <iostream>
using namespace std;

int power(int base, int exponent) {
    if (exponent == 0)  // Base case
        return 1;
    else  // Recursive case
        return base * power(base, exponent - 1);
}

int main() {
    int base = 5, exponent = 7;
    cout << base << " raised to the power " << exponent << " is " << power(base, exponent) << endl;
    return 0;
}
