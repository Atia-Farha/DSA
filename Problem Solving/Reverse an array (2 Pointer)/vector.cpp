#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define endl '\n'

template <typename T>
void reverseArray(vector<T>& arr) {
    reverse(arr.begin(), arr.end());
}

int main() {
    fastio;

    vector<int> arr = {1, 2, 3, 4, 5};

    reverseArray(arr);

    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}