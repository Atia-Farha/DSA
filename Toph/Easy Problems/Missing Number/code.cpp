#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define endl '\n'

int main() {
    fastio;
	
    int sum;
    cin >> sum;
    int a, b, c;
    cin >> a >> b >> c;

    cout << sum - (a + b + c) << endl;

    return 0;
}