#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int random;
    int maior = 20;
    int menor = 1;
    srand((unsigned)time(0));
    int a[15][15];
    int soma = 0;

    for(int i = 0; i < 15; i++){
      for(int j = 0; j < 15; j++){
        random = rand() % (maior - menor + 1) + menor;
        a[i][j] = random;
      }
    }

    cout << "O somatorio da diagonal principal é: ";
    for(int i = 0; i < 15; i++){
      for(int j = 0; j < 15; j++){
        if((i == j) && (a[i][j] % 2 == 0)){
            soma = soma + a[i][j];
        }
      }
    }
    cout << soma << endl;
}