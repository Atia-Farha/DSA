#include <bits/stdc++.h>
using namespace std;

#ifdef __GNUC__
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#endif

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define endl '\n'

constexpr ll MOD = 1e9 + 7;
constexpr ll INF = numeric_limits<ll>::max() - 1e9;

using ll = long long;
using ull = unsigned long long;

template <int I> struct BitSafe {
    static_assert(I >= 0 && I < 64, "Bit position out of range");
};
#define BIT_CHECK(i) do { if(i < 0 || i >= 64) throw out_of_range(""); } while(0)

inline void setbit(ll &x, int i) { BIT_CHECK(i); x |= (1ULL << i); }
inline void clearbit(ll &x, int i) { BIT_CHECK(i); x &= ~(1ULL << i); }
inline bool checkbit(ll x, int i) { BIT_CHECK(i); return (x >> i) & 1ULL; }

ll modadd(ll a, ll b, ll m = MOD) {
    if(m == 0) throw invalid_argument("modadd: modulus 0");
    a = (a % m + m) % m;
    b = (b % m + m) % m;
    return (a + b >= m) ? (a + b - m) : (a + b);
}

ll modsub(ll a, ll b, ll m = MOD) {
    if(m == 0) throw invalid_argument("modsub: modulus 0");
    a = (a % m + m) % m;
    b = (b % m + m) % m;
    return (a - b < 0) ? (a - b + m) : (a - b);
}

ll modmul(ll a, ll b, ll m = MOD) {
    if(m == 0) throw invalid_argument("modmul: modulus 0");
    a = (a % m + m) % m;
    b = (b % m + m) % m;
    #ifdef __SIZEOF_INT128__
        return static_cast<ll>((__int128)a * b % m);
    #else
        ll res = 0;
        while(b) {
            if(b & 1) res = modadd(res, a, m);
            a = modadd(a, a, m);
            b >>= 1;
        }
        return res;
    #endif
}

ll modpow(ll base, ll exp, ll m = MOD) {
    if(m == 0) throw invalid_argument("modpow: modulus 0");
    if(m == 1) return 0;
    base = (base % m + m) % m;
    ll res = 1;
    for(; exp; exp >>= 1) {
        if(exp & 1) res = modmul(res, base, m);
        base = modmul(base, base, m);
    }
    return res;
}

ll gcd(ll a, ll b) {
    a = abs(a); b = abs(b);
    while(b) { a %= b; swap(a, b); }
    return a | b;  // Returns 0 if both inputs are 0
}

ll lcm(ll a, ll b) {
    if(a == 0 || b == 0) return 0;
    a = abs(a); b = abs(b);
    ll g = gcd(a, b);
    a /= g;
    #ifdef __SIZEOF_INT128__
        return static_cast<ll>((__int128)a * b);
    #else
        return (b > numeric_limits<ll>::max() / a) ? numeric_limits<ll>::max() : a * b;
    #endif
}

ll modinv(ll a, ll m = MOD) {
    if(m <= 0) throw invalid_argument("modinv: modulus <= 0");
    ll g = m, r = (a % m + m) % m, x = 0, y = 1;
    while(r != 0) {
        ll q = g / r;
        g %= r; swap(g, r);
        x -= q * y; swap(x, y);
    }
    if(g != 1) return -1;  // No inverse exists
    if(x < 0) x += m;
    return x;
}

void solve() {
    
}

int main() {
    fastio;
    solve();
    return 0;
}