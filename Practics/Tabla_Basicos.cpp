// Tipos de datos básicos en C++

#include<iostream>
#include<limits>

using namespace std;

int main (){
    int entero = 15;
    float flotante = 10.45;
    double mayor = 16.3456;
    char letra = '1';
    bool logico = true;

    // Mostrar el valor, el tamaño y el rango de cada variable
    cout << "Valor\tTamaño\tMínimo\tMáximo\n"; // Cabecera de la tabla
    cout << entero << "\t" << sizeof(entero) << "\t" << numeric_limits<int>::min() << "\t" << numeric_limits<int>::max() << "\n"; // Fila de la variable entero
    cout << flotante << "\t" << sizeof(flotante) << "\t" << numeric_limits<float>::min() << "\t" << numeric_limits<float>::max() << "\n"; // Fila de la variable flotante
    cout << mayor << "\t" << sizeof(mayor) << "\t" << numeric_limits<double>::min() << "\t" << numeric_limits<double>::max() << "\n"; // Fila de la variable mayor
    cout << letra << "\t" << sizeof(letra) << "\t" << numeric_limits<char>::min() << "\t" << numeric_limits<char>::max() << "\n"; // Fila de la variable letra
    cout << logico << "\t" << sizeof(logico) << "\t" << numeric_limits<bool>::min() << "\t" << numeric_limits<bool>::max() << "\n"; // Fila de la variable logico

    // Hacer algunas operaciones aritméticas con las variables
    cout << "La suma de entero y flotante es: " << entero + flotante << "\n"; // Suma de entero y flotante
    cout << "La resta de mayor y flotante es: " << mayor - flotante << "\n"; // Resta de mayor y flotante
    cout << "La multiplicación de entero y mayor es: " << entero * mayor << "\n"; // Multiplicación de entero y mayor
    cout << "La división de flotante y entero es: " << flotante / entero << "\n"; // División de flotante y entero
    cout << "El módulo de entero y 4 es: " << entero % 4 << "\n"; // Módulo de entero y 4

    // Hacer algunas operaciones lógicas con las variables
    cout << "La negación de logico es: " << !logico << "\n"; // Negación de logico
    cout << "La conjunción de logico y false es: " << (logico && false) << "\n"; // Conjunción de logico y false
    cout << "La disyunción de logico y true es: " << (logico || true) << "\n"; // Disyunción de logico y true

    return 0;
}
