#include <iostream>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define endl '\n'

int main() {
    fastio;
    
    int S, E, W;
    cin >> S >> E >> W;
    
    for(S; S <= E; S += W) {
        int C = ((S - 32) * 5) / 9;
        cout << S << " " << C << endl;
    }
    
    return 0;
}