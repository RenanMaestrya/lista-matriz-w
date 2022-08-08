#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int random;
    int maior = 20;
    int menor = 0;
    srand((unsigned)time(0));
    int a[8][6];
    int b[8];
    int soma = 0;

    for(int i = 0; i < 8; i++){
      for(int j = 0; j < 6; j++){
        random = rand() % (maior - menor + 1) + menor;
        a[i][j] = random;
      }
    }

    cout << endl;
    //somatorio de linhas
    for(int i = 0; i < 8; i++){
      for(int j = 0; j < 6; j++){
        soma = soma + a[i][j]; 
      }
        b[i] = soma;
        soma = 0;
    }
    
    for(int i = 0; i < 8; i++){
        cout << b[i] << " | ";
    }
    cout << endl;
}