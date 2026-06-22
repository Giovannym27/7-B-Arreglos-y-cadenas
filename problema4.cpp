#include <iostream>
using namespace std;

int main() {
    int n, c;
    if (cin >> n >> c) {
        int vasos[1005] = {0};
        
        for (int i = 0; i < c; i++) {
            int posicion;
            cin >> posicion;
            vasos[posicion]++;
        }
        
        for (int i = 1; i <= n; i++) {
            cout << vasos[i] << endl;
        }
    }
    return 0;
}