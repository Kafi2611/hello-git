#include <iostream>
using namespace std;

// Iterative approach
unsigned long long factorialIterative(int n) {
    unsigned long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Recursive approach
unsigned long long factorialRecursive(int n) {
    if (n <= 1) return 1;
    return n * factorialRecursive(n - 1);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial of " << num << " (iterative) = " 
             << factorialIterative(num) << endl;
        cout << "Factorial of " << num << " (recursive) = " 
             << factorialRecursive(num) << endl;
    }

    return 0;
}