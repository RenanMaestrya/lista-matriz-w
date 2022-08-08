#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int random;
    int maior = 40;
    int menor = 0;
    srand((unsigned)time(0));
    float c[4][5];
    float f[4][5];

    cout << "Matriz em Celsius" << endl;
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){
            random = rand() % (maior - menor + 1) + menor;
            c[i][j] = random;
            f[i][j] = (9 * c[i][j] / 5) + 32;
            cout << c[i][j] << " | "; 
        }
        cout << endl;
    }
    cout << endl;    
    cout << "Matriz em Fahrenheit" << endl;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){
            cout << f[i][j] << " | ";
        }
        cout << endl;
    }
}
