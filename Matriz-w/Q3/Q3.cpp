#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int random;
  int maior = 100;
  int menor = 0;
  srand((unsigned)time(0));
  int v[4][5];

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 5; j++) {
      random = rand() % (maior - menor + 1) + menor;
      v[i][j] = random;
      cout << v[i][j] << " ";
    }
    cout << endl;
  }
}