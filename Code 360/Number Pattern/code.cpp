#include <iostream>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define endl '\n'

int main() {
    fastio;
    
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; ++i) {
        for (int j = i; j < 2 * i; ++j) {
            cout << j;
        }
        cout << endl;
    }
    
    return 0;
}