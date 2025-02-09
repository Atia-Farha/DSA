#include <iostream>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define endl '\n'

int main() {
    fastio;
    
    int num1 = 1, num2 = 1, num3, n;
    cin >> n;
    
    if (n == 1 || n == 2) {
        cout << 1 << endl;
        return 0;
    }
    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }
    
    for (int i = 1; i < n - 1; ++i) {
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
    }
    
    cout << num3 << endl;
    
    return 0;
}