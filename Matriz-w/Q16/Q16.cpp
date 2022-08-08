#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int random;
    int maior = 20;
    int menor = 1;
    srand((unsigned)time(0));
    int a[10][7];
    float contImp = 0;
    float contPar = 0;
    float total = 70;

    for(int i = 0; i < 10; i++){
      for(int j = 0; j < 7; j++){
        random = rand() % (maior - menor + 1) + menor;
        a[i][j] = random;
      }
    }

    cout << endl;
    
    for(int i = 0; i < 10; i++){
      for(int j = 0; j < 7; j++){
        if(a[i][j] % 2 == 0){
            contPar++;
        }else{
            contImp++;
        }
      }
    }

    cout << "Existem " << contPar << " elementos pares, que correspondem a " << (contPar/total)*100 << "% do total" << endl;

    cout << "Existem " << contImp << " elementos impares, que correspondem a " << (contImp/total)*100 << "% do total." << endl;
}