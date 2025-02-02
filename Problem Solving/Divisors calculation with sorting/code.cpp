#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define endl '\n'

int main() {
    fastio;

    int A;
    cin >> A;

    if (A == 1) {
        cout << "1" << endl;
        return 0;
    }

    vector<int> smallDivisors;
    stack<int> largeDivisors; 

    for (int i = 1; i * i <= A; ++i) {
        if (A % i == 0) {
            smallDivisors.push_back(i);
            if (i != A / i) largeDivisors.push(A / i);
        }
    }

    for (int d : smallDivisors) cout << d << endl;

    while (!largeDivisors.empty()) {
        cout << largeDivisors.top() << endl;
        largeDivisors.pop();
    }

    return 0;
}