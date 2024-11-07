#include <iostream>
using namespace std;

// Función para mostrar las opciones del menú principal
void mostrarMenuPrincipal() {
    cout << "===== Menu Principal =====" << endl;
    cout << "1. Cargar" << endl;
    cout << "2. Modificar" << endl;
    cout << "3. Eliminar" << endl;
    cout << "4. Salir" << endl;
    cout << "Seleccione una opción: ";
}

// Función para mostrar las opciones de un submenú genérico
void mostrarSubMenu() {
    cout << "===== Submenu =====" << endl;
    cout << "1. Opcion 1" << endl;
    cout << "2. Opcion 2" << endl;
    cout << "3. Opcion 3" << endl;
    cout << "4. Regresar al menu principal" << endl;
    cout << "Seleccione una opción: ";
}

// Función para manejar el submenú genérico
void subMenu() {
    int opcionSub;
    do {
        mostrarSubMenu();
        cin >> opcionSub;

        switch (opcionSub) {
            case 1:
                cout << "Opcion 1 seleccionada." << endl;
                break;
            case 2:
                cout << "Opcion 2 seleccionada." << endl;
                break;
            case 3:
                cout << "Opcion 3 seleccionada." << endl;
                break;
            case 4:
                cout << "Regresando al menu principal..." << endl;
                break;
            default:
                cout << "Opción inválida. Intente de nuevo." << endl;
        }
    } while (opcionSub != 4);
}

int main() {
    int opcionPrincipal;

    do {
        mostrarMenuPrincipal();
        cin >> opcionPrincipal;

        switch (opcionPrincipal) {
            case 1:
                cout << "Ingresando a Cargar..." << endl;
                subMenu();
                break;
            case 2:
                cout << "Ingresando a Modificar..." << endl;
                subMenu();
                break;
            case 3:
                cout << "Ingresando a Eliminar..." << endl;
                subMenu();
                break;
            case 4:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción inválida. Intente de nuevo." << endl;
        }
    } while (opcionPrincipal != 4);

    return 0;
}
