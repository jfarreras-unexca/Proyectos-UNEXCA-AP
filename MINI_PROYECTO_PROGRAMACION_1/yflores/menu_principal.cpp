// Fecha: 06/11/2025
// Catedra: Algorítmica y Programación trayecto 1-2
// Nombre del Programa: Menú principal
// Lenguaje de Programación: C++
// Programador: Yanetsi Flores
// Cedula: 26271246 Sección: 30311
// Descripción del Programa: Mini proyecto de Programación 1


#include <iostream>
using namespace std;

// Funciones de submenú
void subMenuIncluir() {
    cout << "\n Submenú Incluir " << endl;
    cout << "Ejecutando opción de Incluir...\n";
}

void subMenuModificar() {
    cout << "\n Submenú Modificar " << endl;
    cout << "Ejecutando opción de Modificar...\n";
}

void subMenuEliminar() {
    cout << "\n Submenú Eliminar " << endl;
    cout << "Ejecutando opción de Eliminar...\n";
}

void subMenuInformes() {
    cout << "\n Submenú Informes " << endl;
    cout << "Ejecutando opción de Informes...\n";
}

// Esta Función muestra el menú principal y llama a los submenús correspondientes
void menuPrincipal() {
    int opcion; // Variable para almacenar la opción elegida por el usuario
    
    do {
        // Mostrar el menú principal
        cout << "\n Menú Principal " << endl;
        cout << "1. Incluir" << endl;
        cout << "2. Modificar" << endl;
        cout << "3. Eliminar" << endl;
        cout << "4. Informes" << endl;
        cout << "0. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        // Ejecutar la opción seleccionada
        switch (opcion) {
            case 1:
                subMenuIncluir();
                break;
            case 2:
                subMenuModificar();
                break;
            case 3:
                subMenuEliminar();
                break;
            case 4:
                subMenuInformes();
                break;
            case 0:
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opción no válida. Intente nuevamente." << endl;
                break;
        }
    } while (opcion != 0); // El menú sigue apareciendo hasta que el usuario elige "Salir"
}

// Función principal del programa
int main() {
    menuPrincipal(); // Llamada a la función que muestra el menú principal
    return 0; // Fin del programa
}
