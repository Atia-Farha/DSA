#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define endl '\n'

int main() {
    fastio;
	
	int N;
	cin >> N;
	float sum = 0;
	for (int i = 1; i < N + 1; ++i) {
		int X;
		cin >> X;
		sum += X;
		cout << sum / i << endl;
	}
	
	return 0;
}