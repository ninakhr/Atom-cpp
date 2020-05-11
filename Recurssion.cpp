#include <iostream>
using namespace std;

int Factorial(int n) {
    if (n > 0) {
        return n * Factorial((n - 1));
    } else {
        return 1;
    }
}

int Fibonacci(int n) {
    if (n < 0) {
    	return 0;
    }
    switch(n) {
        case 0:
            return 0;
        case 1:
            return 1;
        default:
            return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
}

int main() {
    cout << Factorial(9) << endl;
    
    for (int i = 0; i < 15; ++i) {
        cout << Fibonacci(i) << endl;
    }
    
    return 0;
}