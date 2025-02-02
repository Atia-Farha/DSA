#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define endl '\n'

int main() {
    fastio;
    int A;
    cin >> A;

    set<int> divisors;

    for (int i = 1; i * i <= A; i++) {
        if (A % i == 0) {
            divisors.insert(i);
            divisors.insert(A / i);
        }
    }

    for (int d : divisors) {
        cout << d << endl;
    }

    return 0;
}