#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define endl '\n'

using ll = long long;

ll lcm(ll a, ll b) {
    if (a == 0 || b == 0) return 0;
    return abs(a / gcd(a, b)) * abs(b);
}

int main() {
    fastio;

    ll a, b;
    cin >> a >> b;

    cout << lcm(a, b) << endl;

    return 0;
}