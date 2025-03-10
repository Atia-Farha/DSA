#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define endl '\n'

int main() {
    fastio;

    int d, r, b = 0, pow = 1;
    cin >> d;

    while(d > 0) {
        r = d % 2;
        b += ( r * pow);
        d /= 2;
        pow *= 10;
    }

    cout << b << endl;

    return 0;
}