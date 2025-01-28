#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define endl '\n'

string reversed(string n) {
    if (n[0] == '-') {
        reverse(n.begin() + 1, n.end());
    } else {
        reverse(n.begin(), n.end());
    }
    return n;
}

int main() {
    string n;

    cin >> n;

    cout << reversed(n) << endl;

    return 0;
}