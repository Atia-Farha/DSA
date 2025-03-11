#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define endl '\n'

int main() {
    fastio;

    int n, r = 0;
    cin >> n;

    while ( n > 0) {
        r = (r * 10) + (n % 10);
        n /= 10;
    }

    cout << r << endl;        

    return 0;
}