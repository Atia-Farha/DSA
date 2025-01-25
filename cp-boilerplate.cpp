#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vl = vector<ll>;
using vvi = vector<vi>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vpii = vector<pii>;
using vpll = vector<pll>;

#define FOR(i, a, b) for(int i = (a); i < (b); ++i)
#define REP(i, n) for(int i = 0; i < (n); ++i)
#define foreach(a, x) for (auto& a : x)
#define all(x) (x).begin(), (x).end()
#define rall(x) x.rbegin(), x.rend()
#define sz(x) ((int)(x).size())
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define setbit(x, i) (x |= (1LL << i))
#define clearbit(x, i) (x &= ~(1LL << i))
#define checkbit(x, i) (x & (1LL << i))

#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

constexpr ll MOD = 1e9 + 7;
constexpr ll INF = 1e18;

ll modadd(ll a, ll b, ll m = MOD) {
    return ((a % m) + (b % m) + m) % m;
}
ll modsub(ll a, ll b, ll m = MOD) {
    return ((a % m) - (b % m) + m) % m;  // Ensures non-negative result
}
ll modmul(ll a, ll b, ll m = MOD) {
    if (m <= 1e9) return (a % m) * (b % m) % m;  // Fast for small MOD
    #ifdef __SIZEOF_INT128__
        return (ll)((__int128)a * b % m);        // Use 128-bit if available
    #else
        ll res = 0;
        a %= m;
        while (b > 0) {                          // Fallback to binary
            if (b % 2) res = (res + a) % m;
            a = (a * 2) % m;
            b /= 2;
        }
        return res;
    #endif
}
ll modpow(ll base, ll exp, ll m = MOD) {
    ll res = 1;
    base %= m;
    for (; exp > 0; exp >>= 1) {
        if (exp & 1) res = (res * base) % m;
        base = (base * base) % m;
    }
    return res;
}
ll modinv(ll a, ll m = MOD) {
    return modpow(a, m - 2, m);
}
ll gcd(ll a, ll b) {
    while(b) { a %= b; swap(a, b); }
    return a;
}
ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}

void solve() {
    
}

int main() {
    fastio;

    solve();

    return 0;
}