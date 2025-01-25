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

#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

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

void solve() {
    
}

int main() {
    fastio;

    solve();

    return 0;
}