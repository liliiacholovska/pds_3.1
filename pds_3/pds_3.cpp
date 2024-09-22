#include <iostream>

using namespace std;

int factorial(int num) {
    int result = 1;
    for (int i = 1; i <= num; ++i) {
        result *= i;
    }
    return result;
}

int arrangements(int n, int r) {
    return factorial(n) / factorial(n - r);
}

int main() {
    int n = 9, r = 4;
    cout << "Number of arrangements of " << n << " elements taken " << r << " at a time: ";
    cout << arrangements(n, r) << endl;
    return 0;
}