#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result = (result * i) % MOD;
    }
    return result;
}

int main() {
    int n;
    cin >> n;

    cout << factorial(n) << endl;

    return 0;
}