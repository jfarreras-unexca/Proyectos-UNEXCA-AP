#include <iostream>
#include <vector>
#include <cstdlib> // Para rand() y srand()
#include <ctime>   // Para time()

// Función para calcular la suma de cada fila
std::vector<int> sumaFilas(const std::vector<std::vector<int>>& matriz) {
    std::vector<int> sumaFilas;
    for (const auto& fila : matriz) {
        int suma = 0;
        for (int valor : fila) {
            suma += valor;
        }
        sumaFilas.push_back(suma);
    }
    return sumaFilas;
}

// Función para calcular la suma de cada columna
std::vector<int> sumaColumnas(const std::vector<std::vector<int>>& matriz) {
    if (matriz.empty()) return {};
    std::vector<int> sumaColumnas(matriz[0].size(), 0);
    for (const auto& fila : matriz) {
        for (size_t j = 0; j < fila.size(); ++j) {
            sumaColumnas[j] += fila[j];
        }
    }
    return sumaColumnas;
}

// Función para mostrar la matriz completa
void mostrarMatriz(const std::vector<std::vector<int>>& matriz) {
    std::cout << "\nMatriz completa:" << std::endl;
    for (const auto& fila : matriz) {
        for (int valor : fila) {
            std::cout << valor << "\t";
        }
        std::cout << std::endl;
    }
}

// Nueva función para generar una matriz con valores aleatorios
std::vector<std::vector<int>> generarMatrizAleatoria(int filas, int columnas, int minValor, int maxValor) {
    std::vector<std::vector<int>> matriz(filas, std::vector<int>(columnas));
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            matriz[i][j] = minValor + rand() % (maxValor - minValor + 1);
        }
    }
    return matriz;
}

int main() {
    srand(static_cast<unsigned>(time(0))); // Inicializar la semilla de aleatoriedad

    int filas, columnas, opcion;
    std::cout << "Ingrese el número de filas: ";
    std::cin >> filas;
    std::cout << "Ingrese el número de columnas: ";
    std::cin >> columnas;

    // Elegir entre ingreso manual o matriz aleatoria
    std::cout << "Elija una opción para llenar la matriz:" << std::endl;
    std::cout << "1. Ingresar manualmente" << std::endl;
    std::cout << "2. Generar aleatoriamente" << std::endl;
    std::cout << "Opción: ";
    std::cin >> opcion;

    std::vector<std::vector<int>> matriz;

    if (opcion == 1) {
        // Ingreso manual de la matriz
        matriz.resize(filas, std::vector<int>(columnas));
        std::cout << "Ingrese los elementos de la matriz:" << std::endl;
        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < columnas; ++j) {
                std::cout << "Elemento [" << i << "][" << j << "]: ";
                std::cin >> matriz[i][j];
            }
        }
    } else if (opcion == 2) {
        // Generar matriz aleatoria
        int minValor, maxValor;
        std::cout << "Ingrese el valor mínimo para los elementos: ";
        std::cin >> minValor;
        std::cout << "Ingrese el valor máximo para los elementos: ";
        std::cin >> maxValor;
        matriz = generarMatrizAleatoria(filas, columnas, minValor, maxValor);
    } else {
        std::cerr << "Opción inválida. Terminando el programa." << std::endl;
        return 1;
    }

    // Mostrar la matriz completa
    mostrarMatriz(matriz);

    // Mostrar sumas de filas y columnas
    auto resultadoFilas = sumaFilas(matriz);
    auto resultadoColumnas = sumaColumnas(matriz);

    std::cout << "\nSuma de cada fila:" << std::endl;
    for (size_t i = 0; i < resultadoFilas.size(); ++i) {
        std::cout << "Fila " << i + 1 << ": " << resultadoFilas[i] << std::endl;
    }

    std::cout << "\nSuma de cada columna:" << std::endl;
    for (size_t j = 0; j < resultadoColumnas.size(); ++j) {
        std::cout << "Columna " << j + 1 << ": " << resultadoColumnas[j] << std::endl;
    }

    return 0;
}