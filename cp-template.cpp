#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

#define FOR(i, a, b) for (int i = a; i < b; ++i)
#define REP(i, n) FOR(i, 0, n)
#define foreach(a, x) for (auto& a : x)
#define all(x) begin(x), end(x)
#define rall(x) x.rbegin(), x.rend()
#define sz(x) (int)(x).size()
#define pb push_back
#define mp make_pair
#define fi first
#define se second

#define endl '\n'
#define fastio ios_base::sync_with_stdio(0); cin.tie(0)

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

ll modadd(ll a, ll b, ll m = MOD) {
    return ((a % m) + (b % m) + m) % m;
}
ll modsub(ll a, ll b, ll m = MOD) {
    return ((a % m) - (b % m) + m) % m;  // Ensures non-negative result
}
ll modmul(ll a, ll b, ll m = MOD) {
    return ((a % m) * (b % m)) % m;
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

#define DEBUG
#ifdef DEBUG
    #define debug(x) cerr << #x << " = "; _print(x); cerr << endl;
#else
    #define debug(x)
#endif

void _print(int x) { cerr << x; }
void _print(ll x) { cerr << x; }
void _print(ull x) { cerr << x; }
void _print(char x) { cerr << x; }
void _print(string x) { cerr << x; }
void _print(bool x) { cerr << (x ? "true" : "false"); }
void _print(pii x) { cerr << "(" << x.fi << ", " << x.se << ")"; }

template <class T>
void _print(vector<T> v) {
    cerr << "[ ";
    for (const auto& i : v) {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}

template <class T>
void _print(vector<vector<T>> v) {
    cerr << "[ ";
    for (const auto& row : v) {
        _print(row);
        cerr << " ";
    }
    cerr << "]";
}

// Uncomment for unordered_map<pair<int, int>, ...> support
/*
struct pair_hash {
    template <class T1, class T2>
    size_t operator()(const pair<T1, T2>& p) const {
        auto h1 = hash<T1>{}(p.first);
        auto h2 = hash<T2>{}(p.second);
        return h1 ^ (h2 << 1);
    }
};
*/

void solve() {
    
}

int main() {
    fastio;

    solve();

    return 0;
}