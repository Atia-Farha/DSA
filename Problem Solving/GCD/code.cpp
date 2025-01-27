// Euclid's Algorithm (Iterative Version)
#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define endl '\n'

ll gcd(ll a, ll b) {
    if (a == 0) return abs(b);
    if (b == 0) return abs(a);

    a = abs(a);
    b = abs(b);

    if (a == b) return a;
 
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