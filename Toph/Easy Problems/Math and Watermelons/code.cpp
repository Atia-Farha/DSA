#include <iostream>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define endl '\n'

int main() {
    fastio;
	
	int M, K;
	cin >> M >> K;
    cout << M % K << endl;
	
	return 0;
}