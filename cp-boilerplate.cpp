#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define endl '\n'

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
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define eb emplace_back
#define pb push_back
#define mp make_pair
#define fi first
#define se second

// Safe bit operations (0 <= i < 64)
inline void setbit(ll &x, unsigned i) { x |= (1ULL << i); }
inline void clearbit(ll &x, unsigned i) { x &= ~(1ULL << i); }
inline bool checkbit(ll x, unsigned i) { return (x >> i) & 1ULL; }

constexpr ll MOD = 1e9 + 7;
constexpr ll INF = 1e18;

// Modular arithmetic with validation
ll modadd(ll a, ll b, ll m = MOD) {
    assert(m > 0 && "Modulus must be positive");
    return ((a % m) + (b % m) + 2*m) % m;
}

ll modsub(ll a, ll b, ll m = MOD) {
    assert(m > 0 && "Modulus must be positive");
    return ((a % m) - (b % m) + 2*m) % m;
}

ll modmul(ll a, ll b, ll m = MOD) {
    assert(m > 0 && "Modulus must be positive");
    a %= m; b %= m;
    if(m <= 1e9) return (a * b) % m;
    #ifdef __SIZEOF_INT128__
        return (ll)((__int128)a * b % m);
    #else
        ll res = 0;
        while(b > 0) {
            if(b & 1) res = (res + a) % m;
            a = (a << 1) % m;
            b >>= 1;
        }
        return res;
    #endif
}

ll modpow(ll base, ll exp, ll m = MOD) {
    assert(m > 0 && "Modulus must be positive");
    if(m == 1) return 0;
    base %= m;
    ll res = 1;
    for(; exp > 0; exp >>= 1) {
        if(exp & 1) res = modmul(res, base, m);
        base = modmul(base, base, m);
    }
    return res;
}

// Safe GCD/LCM (avoids std conflicts)
ll gcd_ll(ll a, ll b) {
    a = abs(a); b = abs(b);
    while(b) { a %= b; swap(a, b); }
    return a ? a : 1; // Treat gcd(0,0) as 1
}

ll lcm_ll(ll a, ll b) {
    if(!a || !b) return 0;
    a = abs(a); b = abs(b);
    ll g = gcd_ll(a, b);
    #ifdef __SIZEOF_INT128__
        return (ll)((__int128)(a/g) * b);
    #else
        return (a/g <= LLONG_MAX / b) ? (a/g * b) : LLONG_MAX;
    #endif
}

// Safe modular inverse
ll modinv(ll a, ll m = MOD) {
    assert(m > 0 && "Modulus must be positive");
    a %= m;
    if(a < 0) a += m;
    if(gcd_ll(a, m) != 1) return -1; // No inverse exists
    
    ll m0 = m, x0 = 0, x1 = 1;
    while(a > 1) {
        ll q = a / m;
        tie(a, m) = mp(m, a % m);
        tie(x0, x1) = mp(x1 - q * x0, x0);
    }
    return x1 < 0 ? x1 + m0 : x1;
}

void solve() {
    // Your code here
}

int main() {
    fastio;
    solve();
    return 0;
}