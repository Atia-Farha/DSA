// https://www.codechef.com/problems/PZSPLIT

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define endl '\n'

int main() {
    fastio;

    int n;
    cin >> n;
    
    if (n % 2 == 0) {
        cout << 1 << endl;
    }
    else {
        cout << 2 << endl;
    }
    
    return 0;
}