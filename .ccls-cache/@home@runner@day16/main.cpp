// Write a program to identify if the number is Perfect number or not
#include <iostream>
using namespace std;
void perfect(int a) {
  int k = 0;
  for (int i = 1; i < a; i++) {
    if (a % i == 0) {
      k = i + k;
    }
  }
  if (k == a) {
    cout << "Perfect Number" << endl;
  } else {
    cout << "Not Perfect Number" << endl;
  }
}

int main() {
  int x = 28;
  perfect(x);
  int y = 4;
  perfect(y);
}