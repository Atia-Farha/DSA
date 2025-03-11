#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define endl '\n'

int main() {
    fastio;

    int b, r, d = 0, pow = 1;
    cin >> b;

    while (b > 0) {
        r = b % 10;
        d += (r * pow);
        b /= 10;
        pow *= 2;
    }

    cout << d << endl;

    return 0;
}