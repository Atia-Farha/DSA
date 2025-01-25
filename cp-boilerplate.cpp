#include <bits/stdc++.h>
using namespace std;

#ifdef __GNUC__
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#endif

static_assert(sizeof(long long) == 8, "64-bit long long required");
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define endl '\n'

#define NDEBUG

constexpr long long MOD = 1e9 + 7;
constexpr long long INF = numeric_limits<long long>::max();

using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vl = vector<ll>;
using vpii = vector<pii>;
using vpll = vector<pll>;

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)
#define foreach(a, x) for (auto& a : x)
#define all(x) begin(x), end(x)
#define rall(x) x.rbegin(), x.rend()
#define sz(x) (int)(x).size()
#define pb push_back
#define mp make_pair
#define fi first
#define se second

namespace Bitwise {
    constexpr inline void setbit(ull& x, int i) noexcept { 
        #ifndef NDEBUG
        if(i < 0 || i >= 64) cerr << "Bit index overflow!\n";
        #endif
        x |= (1ULL << (i & 63)); 
    }
    
    constexpr inline void clearbit(ull& x, int i) noexcept { 
        #ifndef NDEBUG
        if(i < 0 || i >= 64) cerr << "Bit index overflow!\n";
        #endif
        x &= ~(1ULL << (i & 63)); 
    }
    
    constexpr inline bool checkbit(ull x, int i) noexcept { 
        #ifndef NDEBUG
        if(i < 0 || i >= 64) cerr << "Bit index overflow!\n";
        #endif
        return (x >> (i & 63)) & 1ULL; 
    }
}

namespace Modular {
    constexpr inline ll positive_mod(ll m) noexcept { 
        return m > 0 ? m : MOD; 
    }

    constexpr inline ll mod(ll a, ll m) noexcept {
        m = positive_mod(m);
        ll res = a % m;
        return res + (m & (res >> 63));
    }

    constexpr inline ll add(ll a, ll b, ll m = MOD) noexcept {
        m = positive_mod(m);
        a = mod(a, m); b = mod(b, m);
        return a + b - (m & -(a + b >= m));
    }

    constexpr inline ll sub(ll a, ll b, ll m = MOD) noexcept {
        m = positive_mod(m);
        a = mod(a, m); b = mod(b, m);
        return a - b + (m & -(a < b));
    }

    constexpr inline ll mul(ll a, ll b, ll m = MOD) noexcept {
        m = positive_mod(m);
        a = mod(a, m); b = mod(b, m);
        #ifdef __SIZEOF_INT128__
            return static_cast<ll>((__int128)a * b % m);
        #else
            ll res = 0;
            while(b > 0) {
                if(b & 1) res = add(res, a, m);
                a = add(a, a, m);
                b >>= 1;
            }
            return res;
        #endif
    }

    constexpr inline ll pow(ll base, ll exp, ll m = MOD) noexcept {
        m = positive_mod(m);
        if(m == 1) return 0;
        base = mod(base, m);
        ll res = 1;
        for(; exp > 0; exp >>= 1) {
            if(exp & 1) res = mul(res, base, m);
            base = mul(base, base, m);
        }
        return res;
    }

    constexpr inline ll inv(ll a, ll m = MOD) noexcept {
        m = positive_mod(m);
        a = mod(a, m);
        ll x = m, y = 0, z = 1;
        while(a != 0) {
            ll q = x / a;
            x -= q * a; swap(x, a);
            y -= q * z; swap(y, z);
        }
        return x == 1 ? mod(y, m) : -1;
    }
}

namespace Numeric {
    constexpr inline ll gcd(ll a, ll b) noexcept {
        if(a == 0 && b == 0) return 1;
        a = abs(a); b = abs(b);
        while(b != 0) { a %= b; swap(a, b); }
        return a | b;
    }

    constexpr inline ll lcm(ll a, ll b) noexcept {
        if(a == 0 || b == 0) return 0;
        a = abs(a); b = abs(b);
        ll g = gcd(a, b);
        #if defined(__SIZEOF_INT128__)
            __int128 res = (__int128)(a/g) * b;
            return res > numeric_limits<ll>::max() ? -1 : static_cast<ll>(res);
        #else
            return (b <= numeric_limits<ll>::max()/(a/g)) ? (a/g)*b : -1;
        #endif
    }
}

#ifndef NDEBUG
namespace Safety {
    struct GlobalCheck {
        GlobalCheck() {
            static_assert(MOD > 0, "MOD must be positive");
            if(MOD > 1e18 || MOD < 1) 
                cerr << "WARNING: MOD value may cause overflows\n";
        }
    } global_check;
}
#endif

void solve() {
    
}

int main() {
    fastio;
    solve();
    return 0;
}