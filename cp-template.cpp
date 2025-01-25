#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

#define FOR(i, a, b) for(int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)
#define foreach(a, x) for(auto& a : x)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define pb push_back
#define mp make_pair
#define fi first
#define se second

#define endl '\n'
#define fastio ios_base::sync_with_stdio(0); cin.tie(0)

const int MOD = 1e9+7;
const ll INF = 1e18;

ll modpow(ll base, ll exp) {
    ll res = 1;
    for(; exp > 0; exp >>= 1) {
        if(exp & 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
    }
    return res;
}

void solve() {
    
}

int main() {
    fastio;
    
    

    return 0;
}