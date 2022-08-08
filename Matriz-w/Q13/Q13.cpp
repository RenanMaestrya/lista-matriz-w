#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int random;
    int maior = 20;
    int menor = 1;
    srand((unsigned)time(0));
    int a[5][5];
    int soma = 0;

    cout << "Matriz A" << endl;
    for(int i = 0; i < 5; i++){
      for(int j = 0; j < 5; j++){
        random = rand() % (maior - menor + 1) + menor;
        a[i][j] = random;
        cout << a[i][j] << " | ";
      }
      cout << endl;
    }
    cout << endl << "O somatorio das posições impares da diagonal principal é: ";
    for(int i = 0; i < 5; i++){
      for(int j = 0; j < 5; j++){
        if((i == j) && (i%2 == 0 && j%2 == 0)){
            soma = soma + a[i][j];
        } 
      }
    }
    cout << soma << endl;
}