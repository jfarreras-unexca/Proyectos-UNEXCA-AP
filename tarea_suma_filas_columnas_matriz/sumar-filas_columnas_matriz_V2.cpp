#include <iostream>
#include <vector>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int filas, columnas;
    std::cout << "Ingrese el número de filas: ";
    std::cin >> filas;
    std::cout << "Ingrese el número de columnas: ";
    std::cin >> columnas;

    // Declarar la matriz
    std::vector<std::vector<int>> matriz(filas, std::vector<int>(columnas));

 // Pedir al usuario que ingrese los valores de la matriz
 std::cout << "Ingrese los elementos de la matriz:" << std::endl;
 for (int i = 0; i < filas; ++i) {
 for (int j = 0; j < columnas; ++j) {
        std::cout << "Elemento [" << i << "][" << j << "]: ";
        std::cin >> matriz[i][j];
        }
}

    // Calcular la suma de cada fila
    std::cout << "\nSuma de cada fila:" << std::endl;
    for (int i = 0; i < filas; ++i) {
        int sumaFila = 0;
        for (int j = 0; j < columnas; ++j) {
            sumaFila += matriz[i][j];
        }
        std::cout << "Fila " << i + 1 << ": " << sumaFila << std::endl;
    }

    // Calcular la suma de cada columna
    std::cout << "\nSuma de cada columna:" << std::endl;
    for (int j = 0; j < columnas; ++j) {
        int sumaColumna = 0;
        for (int i = 0; i < filas; ++i) {
            sumaColumna += matriz[i][j];
        }
        std::cout << "Columna " << j + 1 << ": " << sumaColumna << std::endl;
    }

    return 0;
}
