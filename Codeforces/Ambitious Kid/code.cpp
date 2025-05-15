// https://codeforces.com/problemset/problem/1866/A

// Note:
// 1. Need to find for an array's element how many operations (+ or -) we need to do to reach 0.
// 2. The element with the smallest possible operation is the answer.
// Example: [2, -6, 5]
//         i) -6 will need 6 operations to reach 0.
//         ii) 5 will need 5.
//         iii) 2 will need 2.
//         So the answer is 2.
// 3. We need to make negative numbers positive to make the process easier.

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
