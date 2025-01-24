#include <iostream>
using namespace std;

int main() {
  int n;
  
  cout << "Enter the length of square: ";
  cin >> n;

  for (int i = 0; i < n; i++) {
    char ch = 'A';
    for (int j = 0; j < n; j++) {
      cout << ch << " ";
      ch++;
    }
    cout << "\n";
  }

  return 0;
}