#include <iostream>
using namespace std;
int main() {
  int a[7];
  int b[7];
  int c[7][2];
  int soma = 0;
  int soma2 = 0;
  for (int i = 0; i < 7; i++) {
    soma = soma + 1;
    soma2 = soma2 + 2;
    a[i] = soma;
    b[i] = soma2;
  }
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 7; j++) {
      if (i == 0) {
        c[j][i] = a[j];

      } else {
        c[j][i] = b[j];
      }
      cout << c[j][i] << " ";
    }
  }
}