#include <iostream>
using namespace std;

int main() {
  int n;
  bool prime = true;

  cin >> n;

  if(n < 2) { 
    prime = false;
  }
  else {
    for(int i = 2; i * i <= n; i++) {
      if(n % i == 0) {
        prime = false;
        break;
      }
    }
  }

  if(prime) {
    cout << n << " is a prime number.\n";
  }
  else {
    cout << n << " is a non-prime number.\n";
  }

  return 0;
}