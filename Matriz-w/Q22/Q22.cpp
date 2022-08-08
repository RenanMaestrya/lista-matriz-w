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
    int c[5][5];
    int alea;
    
    cout << "Matriz C" << endl;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            while(true){
                alea = rand()%100;
                if(alea % 3 != 0){
                    a[i][j] = alea;
                    break;
                }
            }
            while(true){
                alea = rand()%100;
                if(alea % 6 != 0){
                    b[i][j] = alea;
                    break;
                }
            }
            c[i][j] = a[i][j] + b[i][j];
            cout << c[i][j] << " | ";
        }
        cout << endl;
    }
}