#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter the value of n: ";
  cin >> n;

  cout << "All odd numbers from 1 to " << n << ":";
  for(int i = 1; i <= n; i++) {
    if(i%2 != 0) {
      cout << " " << i;
    }
  }

  cout << "\n";

  return 0;
}