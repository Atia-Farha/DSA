#include <iostream>
using namespace std;

int main() {
  int n, sum = 0;

  cout << "Enter the value of n: ";
  cin >> n;

  for(int i=1; i<=n; i++) {
    if(i % 2 == 0) {
      Sum += i;
    }
  }

  cout << "Sum all even numbers from 1 to " << n << "=" << Sum << "\n";

  return 0;
}