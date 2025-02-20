#include <iostream>
using namespace std;
int encontrarMinimo(int matriz[][3], int filas, int columnas) {
if (filas <= 0 || columnas <= 0) {
return -1;
}
int minimo = matriz[0][0];
for (int i = 0; i < filas; i++) {
for (int j = 0; j < columnas; j++) {
if (matriz[i][j] < minimo) {
minimo = matriz[i][j];
}
}
}
return minimo;
}
int main() {
int numeros[3][3] = {{5, 2, 8}, {3, 9, 1}, {7, 4, 6}};
int minimo = encontrarMinimo(numeros, 3, 3);
cout << "El elemento más pequeño en la matriz es: " << minimo << endl;
return 0;
}