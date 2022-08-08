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
    long b[5][5];

    cout << "Matriz A" << endl;

    for(int i = 0; i < 5; i++){
      for(int j = 0; j < 5; j++){
        random = rand() % (maior - menor + 1) + menor;
        a[i][j] = random;
        cout << a[i][j] << " | ";
      }
    cout << endl;

    }

    for(int i = 0; i < 5; i++){
      for(int j = 0; j < 5; j++){
        if(i == j){
            b[i][j] = a[i][j] * 3;
        }else{
            b[i][j] = a[i][j] * 2;
        }
      }
    }
    cout << endl;

    cout << "Matriz B" << endl;

    for(int i = 0; i < 5; i++){
      for(int j = 0; j < 5; j++){
        cout << b[i][j] << " | ";
      }
      cout << endl;
    }
}