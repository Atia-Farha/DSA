// https://codeforces.com/problemset/problem/2044/A

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define endl '\n'

int main() {
    fastio;

    int t;
    cin >> t;
    
    for (t; t > 0; --t) {
        int n;
        cin >> n;
        
        int b = n - 1;
        int count = 0;
        
        for(b; 0 < b; --b) {
            int a = n - b;
            
            ++count;
        }
        
        cout << count << endl;
    }
    
    return 0;
}
