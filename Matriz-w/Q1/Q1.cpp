#include <iostream>
using namespace std;
int main() {
  int a[5][3];
  int b[5][3];
  int c[5][3];
  int soma = 0;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 3; j++) {
      soma = soma + 1;
      a[i][j] = soma;
      b[i][j] = 1;
      c[i][j] = a[i][j] + b[i][j];

      cout << c[i][j] << " ";
    }
  }
}