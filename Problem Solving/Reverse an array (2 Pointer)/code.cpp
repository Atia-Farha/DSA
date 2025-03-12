#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr) 
#define endl '\n'

template <typename T>
void reverseArray(T arr[], int size) {
    int start = 0, end = size - 1;
    
    while (start < end) {
        swap(arr[start], arr[end]);
        ++start;
        --end;
    }
}

int main() {
    fastio;

    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, size);

    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}