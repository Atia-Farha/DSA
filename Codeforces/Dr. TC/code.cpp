// https://codeforces.com/problemset/problem/2106/A

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
        
        string s;
        cin >> s;
        
        int count = 0;
        
        for (int i = 0; i < n; ++i) {
            string a = s;
            
            if (a[i] == '0') {
                a[i] = '1';
            }
            else {
                a[i] = '0';
            }
            
            for (int j : a) {
                if (j == '1') {
                    ++count;
                }
            }
        }
            
        cout << count << endl;
    }
    
    return 0;
}
