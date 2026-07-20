#include <iostream>
using namespace std;

bool isValid(int n) {
    return n >= 0;
}

int factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int num = 5;
    if (isValid(num)) {
        cout << "Factorial of " << num << " is " << factorial(num) << endl;
    } else {
        cout << "Invalid input!" << endl;
    }
    return 0;
}