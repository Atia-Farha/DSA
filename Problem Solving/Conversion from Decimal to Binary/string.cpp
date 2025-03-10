#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define endl '\n'

int main() {
    fastio;

    int d;
    cin >> d;

    string binary = "";

    if (d == 0) binary = "0";

    while(d > 0) {
        binary += (d % 2) + '0';  // Append remainder as character ('0' or '1')
        d /= 2;
    }

    reverse(binary.begin(), binary.end());

    cout << binary << endl;

    return 0;
}