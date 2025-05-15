// https://codeforces.com/problemset/problem/1866/A

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define endl '\n'

int main() {
    fastio;

    int n;
    cin >> n;
    
    int arr[n];
    
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    int minn = INT_MAX;
    
    for (int i : arr) {
        if (i < 0) {
            i *= -1;
        }
        
        if (i < minn) {
            minn = i;
        }
    }
    
    cout << minn << endl;
    
    return 0;
}
