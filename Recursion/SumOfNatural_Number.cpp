#include <iostream>
using namespace std;

int sumOfNaturalNumbers(int n) {
    if (n == 1)  // Base case
        return n;
    else  // Recursive case
        return n + sumOfNaturalNumbers(n - 1);
}

int main() {
    int number = 9;
    cout << "Sum of natural numbers up to " << number << " is " << sumOfNaturalNumbers(number) << endl;
    return 0;
}
