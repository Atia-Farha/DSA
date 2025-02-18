#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie (nullptr)
#define endl '\n'

int main() {
    fastio;

    int N;
    cin >> N;
    int arr[N];

    for(int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    for(int i = N 1; i >= 0; -1) {
        cout << arr[i] << " ";
    }

    return 0;
}