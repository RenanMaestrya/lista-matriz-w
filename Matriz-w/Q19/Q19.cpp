#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int random;
    int maior = 20;
    int menor = 1;
    srand((unsigned)time(0));
    int a[5][6];
    int b[5][6];
    int c[5][6];


    //matriz a
    for(int i = 0; i < 5; i++){
      for(int j = 0; j < 6; j++){
        random = rand() % (maior - menor + 1) + menor;
        if(random % 2 == 0){
            a[i][j] = random;
        }else{
            while(random % 2 != 0){
                random = rand() % (maior - menor + 1) + menor;
            }
            a[i][j] = random;
        }
      }
    }
    //matriz b
    for(int i = 0; i < 5; i++){
      for(int j = 0; j < 6; j++){
        random = rand() % (maior - menor + 1) + menor;
        if(random % 2 != 0){
            b[i][j] = random;
        }else{
            while(random % 2 == 0){
                random = rand() % (maior - menor + 1) + menor;
            }
            b[i][j] = random;
        }
      }
    }
    //matriz c
    cout << "Matriz C" << endl;
    for(int i = 0; i < 5; i++){
      for(int j = 0; j < 6; j++){
        c[i][j] = a[i][j] + b[i][j];

        cout << c[i][j] << " | ";
      }
      cout << endl;
    }
}