#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define endl '\n'

constexpr double PI = acos(-1);

int main() {
    fastio;

    int r;
    cin >> r;
    cout << PI * pow(r, 2) << endl;

    return 0;
}