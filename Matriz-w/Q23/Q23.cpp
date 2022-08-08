#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int random;
    int maior = 100;
    int menor = 1;
    srand((unsigned)time(0));
    int a[5][5];
    int b[5][5];
    
    cout << "Matriz B com diagonal inversa triplicada" << endl;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            a[i][j] = rand()%40;
            if((i == 5 - j) && (j == 5 - i)){
                b[i][j] = a[i][j] * 3;
            }else{
                b[i][j] = a[i][j] * 2;
            }
            cout << b[i][j] << " | ";
        }
        cout << endl;
    }
}