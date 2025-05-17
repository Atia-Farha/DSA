// https://www.codechef.com/problems/MULT3

// Visualization of process:
//        3, 4, 5, 6

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define endl '\n'

int main() {
    fastio;

    int n;
    cin >> n;

    if (n % 3 == 0) {
        cout << n << endl;
    } else if ((n - 1) % 3 == 0) {
        cout << n - 1 << endl;
    } else {
        cout << n + 1 << endl;
    }

    return 0;
}
