// Elaborar um programa que leia uma matriz A de duas dimensões com cinco linhas e quatro
// colunas. Construir uma matriz B de mesma dimensão, em que cada elemento seja o fatorial
// de cada elemento correspondente armazenado na matriz A. Apresentar ao final as matrizes
// A e B.

#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int random;
    int maior = 10;
    int menor = 2;
    srand((unsigned)time(0));
    int a[5][4];
    long b[5][4];
    long fat = 1;
    cout << "Matriz A" << endl;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 4; j++){
            random = rand() % (maior - menor + 1) + menor;
            a[i][j] = random;
            cout << a[i][j] << " | ";
        }
        cout << endl;
    }
    cout << "Matriz B 'fatorial' " << endl;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 4; j++){
            for(int k = 1; k <= a[i][j]; k++){
                fat = fat * k;
                b[i][j] = fat;
            }
                fat = 1;
            cout << b[i][j] << " | ";
        }
        cout << endl;
    }
}