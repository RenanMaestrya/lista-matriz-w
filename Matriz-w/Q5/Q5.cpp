#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int random;
    int maior = 100;
    int menor = 0;
    srand((unsigned)time(0));
    int a[12];
    int b[12];
    int c[12][2];
    for(int i = 0; i < 12; i++){
        random = rand() % (maior - menor + 1) + menor;
        a[i] = random;
        random = rand() % (maior - menor + 1) + menor;
        b[i] = random;
    }

    for(int i = 0; i < 12; i++){
        c[i][0] = a[i] * 2;
        c[i][1] = b[i] - 5;
    }
    
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 2; j++){
            cout << c[i][j] << " | ";
        }
        cout << endl;
    }
}
