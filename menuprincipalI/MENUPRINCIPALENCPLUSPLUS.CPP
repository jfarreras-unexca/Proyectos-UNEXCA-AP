#include <iostream>
using namespace std;

// Funciones de submenú
void subMenuIncluir() {
    cout << "\n--- Submenú Incluir ---" << endl;
    // Aquí puedes agregar el código necesario para la opción de Incluir
    cout << "Ejecutando opción de Incluir...\n";
}

void subMenuModificar() {
    cout << "\n--- Submenú Modificar ---" << endl;
    // Aquí puedes agregar el código necesario para la opción de Modificar
    cout << "Ejecutando opción de Modificar...\n";
}

void subMenuEliminar() {
    cout << "\n--- Submenú Eliminar ---" << endl;
    // Aquí puedes agregar el código necesario para la opción de Eliminar
    cout << "Ejecutando opción de Eliminar...\n";
}

void subMenuInformes() {
    cout << "\n--- Submenú Informes ---" << endl;
    // Aquí puedes agregar el código necesario para la opción de Informes
    cout << "Ejecutando opción de Informes...\n";
}

// Función que muestra el menú principal y llama a los submenús correspondientes
void menuPrincipal() {
    int opcion; // Variable para almacenar la opción elegida por el usuario
    
    do {
        // Mostrar el menú principal
        cout << "\n===== Menú Principal =====" << endl;
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
                cout << "Opción no válida. Por favor, intente nuevamente." << endl;
                break;
        }
    } while (opcion != 0); // El menú sigue apareciendo hasta que el usuario elige "Salir"
}

// Función principal del programa
int main() {
    menuPrincipal(); // Llamada a la función que muestra el menú principal
    return 0; // Fin del programa
}

