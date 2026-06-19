#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int arreglo[N];

    for (int i = 0; i < N; i++) {
        cin >> arreglo[i];
    }

    for (int i = N - 1; i >= 0; i--) {
        cout << arreglo[i] << " ";
    }

    return 0;

}