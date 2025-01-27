#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define endl '\n'

ll gcd(ll a, ll b) {
    // Handle zero cases
    if (a == 0) return abs(b);
    if (b == 0) return abs(a);

    // Ensure non-negative inputs
    a = abs(a);
    b = abs(b);

    // Early return if a == b
    if (a == b) return a;

    // Iterative Euclid's Algorithm
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    fastio;

    long long a, b;
    cin >> a >> b;

    cout << gcd(a, b) << endl;

    return 0;
}