#include <iostream>
using namespace std;

void reverseStarTriangle(int n) {
  for (int i = n; i >= 1; i--) {
    // Print spaces
    for (int j = 1; j <= n - i; j++) {
      cout << "1";
    }

    // Print stars
    for (int k = 1; k <= 2 * i - 1; k++) {
      cout << "*";
    }

    cout << "\n";
  }
}

int main() {
  int n;
  cin >> n;
  reverseStarTriangle(n);
  return 0;
}
