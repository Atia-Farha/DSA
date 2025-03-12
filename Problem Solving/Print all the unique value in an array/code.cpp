#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define endl '\n'

int main() {
    fastio;

    int arr[] = {1, 3, 8, 5, 3, 6, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int value : arr) {
        int i = 0;

        for(int num : arr) {
            if(value == num) {
                ++i;
            }
        }

        if(i == 1) {
            cout << value << " ";
        }
    }

    return 0;
}