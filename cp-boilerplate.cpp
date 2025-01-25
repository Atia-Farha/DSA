#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

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
#define eb emplace_back
#define mp make_pair
#define fi first
#define se second

#define ASSERT_BIT(i) ((void)0)

inline void setbit(ll &x, int i) { ASSERT_BIT(i); x |= (1LL << i); }
inline void clearbit(ll &x, int i) { ASSERT_BIT(i); x &= ~(1LL << i); }
inline bool checkbit(ll x, int i) { ASSERT_BIT(i); return x & (1LL << i); }

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define endl '\n'

constexpr ll MOD = 1e9 + 7;
constexpr ll INF = 1e18;

#define ASSERT_MOD(m) ((void)0)

ll modadd(ll a, ll b, ll m = MOD) {
    ASSERT_MOD(m);
    return ((a % m) + (b % m) + m) % m;
}

ll modsub(ll a, ll b, ll m = MOD) {
    ASSERT_MOD(m);
    return ((a % m) - (b % m) + m) % m;
}

ll modmul(ll a, ll b, ll m = MOD) {
    ASSERT_MOD(m);
    if(m <= 3e9) return (a % m) * (b % m) % m;
    #ifdef __SIZEOF_INT128__
        return (ll)((__int128)a * b % m);
    #else
        ll res = 0;
        a %= m;
        while(b > 0) {
            if(b & 1) res = (res + a) % m;
            a = (a << 1) % m;
            b >>= 1;
        }
        return res;
    #endif
}

ll modpow(ll base, ll exp, ll m = MOD) {
    if(exp == 0) {
        return base == 0 ? 0 : 1 % m;
    }
    ASSERT_MOD(m);
    base %= m;
    if(base < 0) base += m;
    ll res = 1;
    for(; exp > 0; exp >>= 1) {
        if(exp & 1) res = modmul(res, base, m);
        base = modmul(base, base, m);
    }
    return res;
}

ll gcd(ll a, ll b) {
    a = abs(a); b = abs(b);
    if(a == 0 && b == 0) return 0;
    while(b) { a %= b; swap(a, b); }
    return a;
}

ll lcm(ll a, ll b) {
    if(a == 0 || b == 0) return 0;
    a = abs(a); b = abs(b);
    ll g = gcd(a, b);
    a /= g;
    #ifdef __SIZEOF_INT128__
        return (ll)((__int128)a * b);
    #else
        if(a > LLONG_MAX / b) return LLONG_MAX;
        return a * b;
    #endif
}

ll modinv(ll a, ll m = MOD) {
    ASSERT_MOD(m);
    a %= m;
    if(a < 0) a += m;
    ll m0 = m, x0 = 0, x1 = 1;
    while(a > 1) {
        if(m == 0) return -1;
        ll q = a / m;
        ll t = m;
        m = a % m; a = t;
        t = x0;
        x0 = x1 - q * x0;
        x1 = t;
    }
    if(x1 < 0) x1 += m0;
    return a == 1 ? x1 : -1;
}

void solve() {
    
}

int main() {
    fastio;
    solve();
    return 0;
}