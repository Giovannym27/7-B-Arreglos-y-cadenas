#include <iostream>
#include <string>
using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    if (cin >> n) {
        for (int i = 0; i < n; i++) {
            string palabra;
            cin >> palabra;
            
            int inicio = 0;
            int fin = palabra.length() - 1;
            bool esPalindromo = true;
            
            while (inicio < fin) {
                if (palabra[inicio] != palabra[fin]) {
                    esPalindromo = false;
                    break; 
                }
                inicio++;
                fin--;
            }
            
            if (esPalindromo) {
                cout << "P\n";
            } else {
                cout << "NP\n";
            }
            
        }
    }
    
    return 0;
}