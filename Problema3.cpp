#include <iostream>

using namespace std;

int main() {
    int p, n;
    if (cin >> p >> n) {
        int frecuencias[105] = {0};
        
        for (int i = 0; i < n; i++) {
            int voto;
            cin >> voto;
            frecuencias[voto]++;
        }
        
        for (int i = 1; i <= p; i++) {
            cout << i << "-" << frecuencias[i] << endl;
        }
    }
    
    return 0;
}