#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define endl '\n'

int main() {
    fastio;

    int a, b;
    cin >> a >> b;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    cout << a << endl;

    return 0;
}