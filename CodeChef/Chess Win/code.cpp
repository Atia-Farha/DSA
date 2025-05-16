// https://www.codechef.com/problems/CHESSWIN

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define endl '\n'

int main() {
    fastio;
    
    int a, b;
    cin >> a >> b;
    
    cout << b - a + 1 << endl;
    
    return 0;
}