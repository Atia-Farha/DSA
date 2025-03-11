#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define endl '\n'

int main() {
    fastio;

    int n;
    cin >> n;

    if (n <= 0) {
        cout << n << " isn't a power of 2" << endl;
        return 0;
    }

    while (n % 2 == 0) {
        n /= 2;
    }

    if (n == 1) {
        cout << "The number is a power of 2" << endl;
    }
    else {
        cout << "The number isn't a power of 2" << endl;
    }

    return 0;
}