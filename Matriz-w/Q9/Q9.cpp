#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int random;
    int maior = 10;
    int menor = 2;
    srand((unsigned)time(0));
    int a[7][7];
    long b[7][7];
    int soma = 0;
    long fat = 1;


    cout << "Matriz A" << endl;

    for(int i = 0; i < 7; i++){
      for(int j = 0; j < 7; j++){
        random = rand() % (maior - menor + 1) + menor;
        a[i][j] = random;
        cout << a[i][j] << " | ";
      }
      cout << endl;
    }

    cout << endl;
    cout << "Matriz B" << endl;
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 7; j++){
            if((i == j) && (i%2 == 0 || j%2 == 0)){ //já que o indice começa no 0 o valor tem q ser invertido para poder pegas as posições 1/1 3/3 etc.
                for(int h = 1; h <= a[i][j]; h++){
                    fat = fat * h;
                    b[i][j] = fat;
                }
            }else{
                for(int k = 1; k <= a[i][j]; k++){
                    soma = soma + k;
                    b[i][j] = soma;
                }
            }
            cout << b[i][j] << " | ";
            fat = 1;
            soma = 0;
        }
        cout << endl;
    }
   

}