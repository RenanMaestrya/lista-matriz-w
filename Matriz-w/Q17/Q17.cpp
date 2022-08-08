#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int random;
    int maior = 20;
    int menor = 0;
    srand((unsigned)time(0));
    int a[4][5];
    int b[4];
    int c[5];
    int soma = 0;

    cout << ">>>>> Matriz A <<<<<" << endl;
    for(int i = 0; i < 4; i++){
      for(int j = 0; j < 5; j++){
        random = rand() % (maior - menor + 1) + menor;
        a[i][j] = random;
        cout << a[i][j] << " | ";
      }
      cout << endl;
    }
    cout << endl;

    cout << "Matriz B, somatório das linhas" << endl;
    for(int i = 0; i < 4; i++){
      for(int j = 0; j < 5; j++){
        soma = soma + a[i][j];
      }
      b[i] = soma;
      cout << b[i] << " | ";
      soma = 0;
    }

    cout << endl;
    soma = 0;
    cout << endl;

    cout << "Matriz C, somatório das colunas" << endl;
    for(int i = 0; i < 5; i++){
      for(int j = 0; j < 4; j++){
        soma = soma + a[j][i];
      }
      c[i] = soma;
      cout << "| " << c[i] << " |" << endl;
      soma = 0;
    }
}