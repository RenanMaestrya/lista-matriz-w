#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int random;
    int maior = 10;
    int menor = 2;
    srand((unsigned)time(0));
    int a[4];
    int b[4];
    int c[4];
    int d[4];
    long e[4][4];
    long fat = 1;


    for(int i = 0; i < 4; i++){
        random = rand() % (maior - menor + 1) + menor;
        a[i] = random;
        random = rand() % (maior - menor + 1) + menor;
        b[i] = random;
        random = rand() % (maior - menor + 1) + menor;
        c[i] = random;
        random = rand() % (maior - menor + 1) + menor;
        d[i] = random;
    }


    cout << "Matriz E" << endl;
    for(int i = 0; i < 4; i++){
        if(i == 0){
            for(int j = 0; j < 4; j++){
                e[i][j] = a[j] * 2;
            }
        }
        else if(i == 1){
            for(int j = 0; j < 4; j++){
                e[i][j] = b[j] * 3;
            }
        }
        else if(i == 2){
            for(int j = 0; j < 4; j++){
                e[i][j] = c[j] * 4;
            }
        }
        else if(i == 3){
            for(int j = 0; j < 4; j++){
                for(int k = 1; k <= d[j]; k++){
                    fat = fat * k;
                }
                e[i][j] = fat;
                fat = 1;
            }
        }   
    }
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << e[i][j] << " | ";
        }
        cout << endl;
    }
}