#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define endl '\n'

int main() {
    fastio;

    int arr[] = {5, 15, 22, 1, -15, -24};
    int size = sizeof(arr) / sizeof(arr[0]);
    int smallest = INT_MAX;

    for(int i = 0; i < size; ++i) {
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    cout << smallest << endl;

    return 0;
}