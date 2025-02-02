#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define endl '\n'

int main() {
    f	astio

    int A;
    cin >> A;

    for (int i = 1; i * i <= A; i++) {
        if (A % i == 0) {
            cout << i << endl;
            if (i != A / i) cout << A / i << '\n';
        }
    }

    return 0;
}