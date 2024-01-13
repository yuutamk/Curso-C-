#include <iostream>

using namespace std;

// Función para mostrar el menú
void mostrarMenu() {
    cout << "1. Consultar saldo" << endl;
    cout << "2. Retirar dinero" << endl;
    cout << "3. Depositar dinero" << endl;
    cout << "4. Salir" << endl;
    cout << "Ingrese su opción: ";
}

int main() {
    // Saldo inicial
    float saldo = 1000.0;
    int opcion;

    do {
        mostrarMenu();
        cin >> opcion;

        switch (opcion) {
            case 1:
                // Consultar saldo
                cout << "Su saldo actual es: $" << saldo << endl;
                break;

            case 2:
                // Retirar dinero
                float cantidadRetiro;
                cout << "Ingrese la cantidad a retirar: $";
                cin >> cantidadRetiro;

                if (cantidadRetiro > 0 && cantidadRetiro <= saldo) {
                    saldo -= cantidadRetiro;
                    cout << "Retiro exitoso. Su saldo actual es: $" << saldo << endl;
                } else {
                    cout << "Error: Cantidad no válida o saldo insuficiente." << endl;
                }
                break;

            case 3:
                // Depositar dinero
                float cantidadDeposito;
                cout << "Ingrese la cantidad a depositar: $";
                cin >> cantidadDeposito;

                if (cantidadDeposito > 0) {
                    saldo += cantidadDeposito;
                    cout << "Depósito exitoso. Su saldo actual es: $" << saldo << endl;
                } else {
                    cout << "Error: Cantidad no válida." << endl;
                }
                break;

            case 4:
                // Salir del programa
                cout << "Gracias por utilizar el cajero automático." << endl;
                break;

            default:
                cout << "Opción no válida. Por favor, ingrese una opción válida." << endl;
        }

    } while (opcion != 4);

    return 0;
}
