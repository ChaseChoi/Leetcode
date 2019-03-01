#include <iostream>
using namespace std;

int reverse(int x) {
  int value = 0;
  int last = 0;
  while (x != 0) {
    int current = x % 10;
    x = x / 10;
    // Overflow cases
    if (last > INT_MAX / 10 || (last == INT_MAX / 10 && current > 7)) {
      return 0;
    }
    if (last < INT_MIN / 10 || (last == INT_MAX / 10 && -current < -8)) {
      return 0;
    }
    value = last * 10 + current;
    last = value;
  }
  return value;
}

int main() {
  cout << reverse(123) << endl;
}

