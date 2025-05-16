// https://www.codechef.com/problems/SQUIDBANK

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define endl '\n'

int main() {
    fastio;

    long long n, k, p;
    cin >> n >> k;

    p = (n - k) * 10000;

    cout << p << endl;

    return 0;
}