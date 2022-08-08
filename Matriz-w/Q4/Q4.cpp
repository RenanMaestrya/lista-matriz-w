#include <cstdlib>
#include <ctime>
#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[]) {
    int random;
    int maior = 10;
    int menor = 0;
    srand((unsigned)time(0));
    int a[10];
    long c[10][3];
    long fat = 1;

    for(int i = 0; i < 10; i++){
        random = rand() % (maior - menor + 1) + menor;
        a[i] = random;
    }
    for(int i = 0; i < 10; i++){
        c[i][0] = a[i] + 5;

    }

    for(int i = 0; i < 10; i++){
        for(int j = 1; j <= c[i][0]; j++){
            fat = fat * j;
            c[i][1] = fat;
        }
        fat = 1;
    }

    for(int i = 0; i < 10; i++){
        c[i][2] = pow(c[i][0], 2);
    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 3; j++){
            cout << c[i][j] << " | ";
        }
        cout << endl;
    }

}
