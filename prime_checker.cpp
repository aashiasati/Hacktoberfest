// Prime Number Checker
// Author: Aashi Asati
// Hacktoberfest 2025
#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for(int i = 2; i*i <= n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    int numbers[] = {2, 4, 7, 10, 13};
    for(int n : numbers) {
        if(isPrime(n))
            cout << n << " is prime." << endl;
        else
            cout << n << " is not prime." << endl;
    }
    return 0;
}
