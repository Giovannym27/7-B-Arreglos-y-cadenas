#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string linea;
    if (getline(cin, linea)) {
        string letras = "";
        
        for (int i = 0; i < linea.length(); i++) {
            if (linea[i] >= 'a' && linea[i] <= 'z') {
                letras += linea[i];
            }
        }
        
        sort(letras.begin(), letras.end());
        
        int indiceLetras = 0;
        for (int i = 0; i < linea.length(); i++) {
            if (linea[i] >= 'a' && linea[i] <= 'z') {
                linea[i] = letras[indiceLetras];
                indiceLetras++;
            }
        }
        
        cout << linea << endl;
    }
    
    return 0;
}