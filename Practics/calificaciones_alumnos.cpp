#include <iostream> // incluye la librería <iostream>
#include <string> // incluye la librería <string>
using namespace std; // usa el espacio de nombres std

int main() {
    const int MAX = 6; // declara una constante de tipo int llamada MAX y le asigna el valor 6
    string nombres[MAX]; // declara un array de tipo string llamado nombres y de tamaño MAX
    double calificaciones[MAX]; // declara un array de tipo double llamado calificaciones y de tamaño MAX
    cout << "Ingrese los nombres y las calificaciones de los alumnos: " << endl; // imprime en la consola el mensaje "Ingrese los nombres y las calificaciones de los alumnos: "
    for (int i = 0; i < MAX; i++) { // inicia un bucle for que recorre los índices de los arrays desde 0 hasta MAX-1
        cout << "Nombre del alumno " << i + 1 << ": "; // imprime en la consola el mensaje "Nombre del alumno " seguido del número de alumno
        cin >> nombres[i]; // lee el nombre del alumno desde la consola y lo almacena en el array nombres en el índice i
        cout << "Calificación del alumno " << i + 1 << ": "; // imprime en la consola el mensaje "Calificación del alumno " seguido del número de alumno
        cin >> calificaciones[i]; // lee la calificación del alumno desde la consola y la almacena en el array calificaciones en el índice i
    }
    cout << "La lista de alumnos y sus calificaciones es: " << endl; // imprime en la consola el mensaje "La lista de alumnos y sus calificaciones es: "
    for (int i = 0; i < MAX; i++) { // inicia otro bucle for que recorre los índices de los arrays desde 0 hasta MAX-1
        cout << nombres[i] << " - " << calificaciones[i] << endl; // imprime en la consola el nombre y la calificación del alumno en el índice i separados por un guion
    }
    return 0; // termina la ejecución del programa
}
