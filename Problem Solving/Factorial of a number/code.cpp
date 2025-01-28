#include <iostream>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define endl '\n'

const int MOD = 1e9 + 7;

using ll = long long;
 
ll factorial(ll n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    ll result = 1;
    for (ll i = 2; i <= n; ++i) {
        result = (result * i) % MOD;
    }

    return result;
}

int main() 
    fastio;

    ll n;
    cin >> n;

    cout << factorial(n) << endl;

    return 0;
}