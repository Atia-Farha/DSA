#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define endl '\n'

int main() {
    fastio;

    string s1, s2;
    cin >> s1 >> s2;

    cout << s1.size() << " " << s2.size() << endl << s1 + s2 << endl;

    swap (s1[0], s2[0]);
    cout << sl << " " << s2;

    return 0;
}