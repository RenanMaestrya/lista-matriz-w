#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int random;
    int maior = 20;
    int menor = 0;
    srand((unsigned)time(0));
    int a[6][5];
    int b[6][5];

    cout << "Matriz A" << endl;
    for(int i = 0; i < 6; i++){
      for(int j = 0; j < 5; j++){
        random = rand() % (maior - menor + 1) + menor;
        a[i][j] = random;
        cout << a[i][j] << " | ";       
      }
      cout << endl;
    }

    cout << endl;
    cout << "Matriz B" << endl;
    for(int i = 0; i < 6; i++){
      for(int j = 0; j < 5; j++){
        if(a[i][j] % 2 == 0){
            b[i][j] = a[i][j] + 5;
        }else{
            b[i][j] = a[i][j] - 4;
        }
        cout << b[i][j] << " | ";
      }
      cout << endl;
    }

}