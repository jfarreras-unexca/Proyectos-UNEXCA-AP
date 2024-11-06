#include <iostream>
#include <vector>

void imprimirmatriz(const std::vector<std::vector<int>>& matriz) {
    for (const auto& fila : matriz) {
        for (const auto& elemento : fila) {
            std::cout << elemento << " ";
        }
        std::cout << std::endl; // Nueva línea después de cada fila
    }
}

int main() {
    // Definir la matriz de tamaño dinámico
    int m = 3, n = 4;
    std::vector<std::vector<int>> matriz(m, std::vector<int>(n, 0));

    // Llenar la matriz con algunos valores de ejemplo
    int valor = 1;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = valor++;
        }
    }

    // Mostrar la matriz
    imprimirmatriz(matriz);

    return 0;
}
