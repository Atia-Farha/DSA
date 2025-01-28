#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string reverse(string n) {
    if (n[0] == '-') {
        reverse(n.begin() + 1, n.end());
    } else {
        reverse(n.begin(), n.end());
    }
    return n;
}

int main() {
    string n;

    cin >> n;
    string reversed = reverseString(n);

    cout << Reversed(n) << endl;

    return 0;
}