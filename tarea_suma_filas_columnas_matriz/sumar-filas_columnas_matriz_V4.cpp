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

// Función para generar una matriz con valores aleatorios
std::vector<std::vector<int>> generarMatrizAleatoria(int filas, int columnas, int minValor, int maxValor) {
    std::vector<std::vector<int>> matriz(filas, std::vector<int>(columnas));
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            matriz[i][j] = minValor + rand() % (maxValor - minValor + 1);
        }
    }
    return matriz;
}

// Función principal del programa que se ejecutará en un bucle
void ejecutarPrograma() {
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
        return;
    }

    // Mostrar la matriz completa
    mostrarMatriz(matriz);

    // Calcular y mostrar sumas de filas y columnas
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
}

int main() {
    srand(static_cast<unsigned>(time(0))); // Inicializar la semilla de aleatoriedad
    int opcion;
    
    do {
        ejecutarPrograma();
        
        // Preguntar si el usuario desea reiniciar el programa
        std::cout << "\n¿Desea realizar otra operación? (1 = Sí, 0 = No): ";
        std::cin >> opcion;
        
    } while (opcion == 1);

    std::cout << "Programa terminado." << std::endl;
    return 0;
}