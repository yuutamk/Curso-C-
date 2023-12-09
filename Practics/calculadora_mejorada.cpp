#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char opcion;

    cout << "Introduce el primer número: ";
    cin >> num1;
    cout << "Introduce el segundo número: ";
    cin >> num2;

    cout << "Selecciona la operación a realizar:\n";
    cout << "a. Suma\n";
    cout << "b. Resta\n";
    cout << "c. Multiplicación\n";
    cout << "d. División\n";
    cout << "Elije una opción: ";
    cin >> opcion;

    if (opcion == 'a' || opcion == 'A') {
        cout << "La suma de " << num1 << " y " << num2 << " es " << num1 + num2 << endl;
    } else if (opcion == 'b' || opcion == 'B') {
        cout << "La resta de " << num1 << " y " << num2 << " es " << num1 - num2 << endl;
    } else if (opcion == 'c' || opcion == 'C') {
        cout << "La multiplicación de " << num1 << " y " << num2 << " es " << num1 * num2 << endl;
    } else if (opcion == 'd' || opcion == 'D') {
        if (num2 != 0) {
            cout << "La división de " << num1 << " y " << num2 << " es " << num1 / num2 << endl;
        } else {
            cout << "No es posible dividir entre cero." << endl;
        }
    } else {
        cout << "Opción inválida." << endl;
    }

    return 0;
}
