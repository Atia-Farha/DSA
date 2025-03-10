#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define endl '\n'

long long factorial(int k) {
    long long fact = 1;

    for (int i = 2; i <= k; ++i) {
        fact *= i;
    }

    return fact;
}

int main() {
    fastio;

    int n, r;
    cin >> n >> r;

    if (r > n || n < 0 || r < 0) {
        cout << "Invalid input" << endl;
        return 0;
    }

    long long fact_n = factorial(n);
    long long fact_r = factorial(r);
    long long fact_nmr = factorial(n - r);

    cout << fact_n / (fact_r * fact_nmr) << endl;

    return 0;
}