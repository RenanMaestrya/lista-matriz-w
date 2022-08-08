#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int random;
    int maior = 20;
    int menor = 1;
    srand((unsigned)time(0));
    int a[7][7];
    int cont = 0;

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
    
    for(int i = 0; i < 7; i++){
      for(int j = 0; j < 7; j++){
        if(a[i][j] % 2 == 0){
            cont++;
        }
      }
    }
    cout << "existem " << cont << " elementos pares na matriz." << endl;
}