// https://codeforces.com/contest/1789/problem/A

// Note:
// 1. Prefix:
//        [1,2,4,5] its prefixes are [1,2], [1,2,4] and [1,2,4,5]
// 2. Good Array = when the GCD of at least one subarray in the array is smaller than or equal to 2.
// 3. Beautiful Array = If all the prefixes of the array whose length is no less than 2 are Good.
// 4. If the first subarray with length 2 is good, that means all the prefixes will be good. Because after that, even if we increase the length, the GCD will always just decrease more.
// 5. Reordering is allowed. So we need to find out whether any subarray is good in the array. If we find one, that means it's possible to make the full array beautiful by reordering (putting that pair at the first in the array).

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define endl '\n'

int gcd(int a, int b) {
    if (a == 0) return b;
    if (b == 0) return a;
    if (a == b) return a;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main() {
    fastio;

    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        int arr[n];
        
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        
        bool isGood = false;
        
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (gcd(arr[i], arr[j]) <= 2) {
                    isGood = true;
                }
            }
        }
    
        if (isGood) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    
    return 0;
}
