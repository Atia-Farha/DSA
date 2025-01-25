#include <bits/stdc++.h>
using namespace std;

#ifdef __GNUC__
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#endif

static_assert(sizeof(long long) == 8, "64-bit long long required");
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define endl '\n'

constexpr long long MOD = 1e9 + 7;
constexpr long long INF = numeric_limits<long long>::max();

using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vl = vector<ll>;
using vvi = vector<vi>;
using vvl = vector<vl>;
using vpii = vector<pii>;
using vpll = vector<pll>;

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)
#define FOREACH(a, x) for (auto& a : x)
#define ALL(x) begin(x), end(x)
#define RALL(x) x.rbegin(), x.rend()
#define SZ(x) (int)(x).size()
#define PB push_back
#define MP make_pair
#define FI first
#define SE second

// ==================== Custom Hash for Unordered Containers ====================
struct CustomHash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
    
    // Improved pair hashing using boost-like combination
    template <typename T1, typename T2>
    size_t operator()(const pair<T1, T2>& p) const {
        uint64_t h1 = (*this)(p.first);
        uint64_t h2 = (*this)(p.second);
        // Mimic boost::hash_combine
        h1 ^= h2 + 0x9e3779b9 + (h1 << 12) + (h1 >> 4);
        return h1;
    }
};
template <typename K, typename V> using SafeUnorderedMap = unordered_map<K, V, CustomHash>;
template <typename K> using SafeUnorderedSet = unordered_set<K, CustomHash>;
// ===============================================================================

// ==================== Bitwise Utilities ====================
namespace Bitwise {
    constexpr inline void setbit(ull& x, int i) noexcept { x |= (1ULL << (i & 63)); }
    constexpr inline void clearbit(ull& x, int i) noexcept { x &= ~(1ULL << (i & 63)); }
    constexpr inline bool checkbit(ull x, int i) noexcept { return (x >> (i & 63)) & 1ULL; }
    
    // GCC-specific built-ins guarded
    #ifdef __GNUC__
    constexpr inline int lsb(ull x) noexcept { return __builtin_ctzll(x); }
    constexpr inline int msb(ull x) noexcept { return 63 - __builtin_clzll(x); }
    constexpr inline int countbits(ull x) noexcept { return __builtin_popcountll(x); }
    #endif
}
// ===========================================================

// ==================== Debugging Utilities ==================
#ifndef NDEBUG
#define DEBUG(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#else
#define DEBUG(...) 
#endif

void debug_out() { cerr << endl; }
template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T) {
    cerr << ' ' << H;
    debug_out(T...);
}
// ===========================================================

// ==================== Modular Arithmetic ===================
namespace Modular {
    constexpr inline ll mod(ll a, ll m = MOD) noexcept {
        m = m > 0 ? m : MOD;
        ll res = a % m;
        return res + (m & (res >> 63));
    }

    constexpr inline ll add(ll a, ll b, ll m = MOD) noexcept {
        a = mod(a, m); b = mod(b, m);
        return a + b - (m & -(a + b >= m));
    }

    constexpr inline ll sub(ll a, ll b, ll m = MOD) noexcept {
        a = mod(a, m); b = mod(b, m);
        return a - b + (m & -(a < b));
    }

    constexpr inline ll mul(ll a, ll b, ll m = MOD) noexcept {
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
        base = mod(base, m);
        ll res = 1;
        for(; exp > 0; exp >>= 1) {
            if(exp & 1) res = mul(res, base, m);
            base = mul(base, base, m);
        }
        return res;
    }

    constexpr inline ll inv(ll a, ll m = MOD) noexcept {
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
// ===========================================================

// ==================== Numeric Utilities ====================
namespace Numeric {
    constexpr inline ll gcd(ll a, ll b) noexcept {
        a = abs(a); b = abs(b);
        while(b) { a %= b; swap(a, b); }
        return a | b;
    }

    constexpr inline ll lcm(ll a, ll b) noexcept {
        if(a == 0 || b == 0) return 0;
        a = abs(a); b = abs(b);
        ll g = Numeric::gcd(a, b);
        #ifdef __SIZEOF_INT128__
            return static_cast<ll>((__int128)(a/g) * b);
        #else
            return (b <= numeric_limits<ll>::max()/(a/g)) ? (a/g)*b : -1;
        #endif
    }
}
// ===========================================================

#ifndef NDEBUG
namespace Safety {
    struct GlobalCheck {
        GlobalCheck() {
            static_assert(MOD > 0 && MOD < 1e18, "MOD must be positive and reasonable");
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
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}