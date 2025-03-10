#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define endl '\n'

int main() {
    fastio;

    int num, l, sum = 0;
    cin >> num;

    while(num > 0) {
        l = num % 10;
        num /= 10;
        sum += l;
    }

    cout << sum << endl;

    return 0;
}