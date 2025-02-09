#include<iostream>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define endl '\n'

int main(){
    fastio;
    
    int n, sum = 0;
    cin >> n;
 
    for (int i = 0; i <= n; ++i) {
        if (i % 2 == 0) sum += i;
    }
    
    cout << sum << endl;
    
    return 0;
}