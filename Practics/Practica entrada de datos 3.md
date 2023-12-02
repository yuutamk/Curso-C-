# Problema a resolver

Realice un programa que lea de la entrada estandar los siguientes datos de una persona:
Edad: dato de tipo entero.
Sexo: dato de tipo carácter.
Altura en metros: dato de tipo real.
Tras leer Los datos, el programa debe mostrarLos en La salida estandar.

## Variables y tipos de datos

Lo primero que tenemos que hacer es declarar las variables que vamos a utilizar para almacenar los datos de la persona. Una variable es un espacio de memoria que le asignamos un nombre y un tipo de dato. El tipo de dato nos indica qué tipo de información podemos guardar en la variable y cuánto espacio ocupa en la memoria. En C++, hay varios tipos de datos, pero los más comunes son:

- `int`: para números enteros, como 1, 2, 3, etc.
- `float`: para números reales, con decimales, como 1.5, 2.3, 3.14, etc.
- `double`: para números reales, con más precisión que `float`, como 1.23456789, 2.3456789, 3.14159265, etc.
- `char`: para caracteres, como 'a', 'b', 'c', etc.
- `bool`: para valores lógicos, como `true` o `false`.
- `string`: para cadenas de caracteres, como "hola", "mundo", "C++", etc.

En nuestro caso, vamos a usar los siguientes tipos de datos para los datos de la persona:

- `int`: para la edad, que es un número entero.
- `char`: para el sexo, que es un carácter que puede ser 'M' o 'F'.
- `double`: para la altura en metros, que es un número real con decimales.
- `string`: para el nombre de la persona, que es una cadena de caracteres.

Para declarar una variable, tenemos que escribir el tipo de dato, seguido del nombre de la variable, y opcionalmente, un valor inicial. Por ejemplo:

```c++
int edad; // Declaramos una variable de tipo int llamada edad, sin asignarle ningún valor inicial
char sexo = 'M'; // Declaramos una variable de tipo char llamada sexo, y le asignamos el valor inicial 'M'
double altura = 1.75; // Declaramos una variable de tipo double llamada altura, y le asignamos el valor inicial 1.75
string nombre = "Juan"; // Declaramos una variable de tipo string llamada nombre, y le asignamos el valor inicial "Juan"
```

## Entrada y salida

Ahora que tenemos las variables, tenemos que leer los valores de los datos de la persona de la entrada estándar. La entrada estándar es el dispositivo por el que el usuario introduce datos al programa, normalmente el teclado. Para leer datos de la entrada estándar, podemos usar el operador `>>`, que se llama operador de extracción. Este operador se usa junto con el objeto `cin`, que representa la entrada estándar. La sintaxis es la siguiente:

```c++
cin >> variable;
```

Donde `variable` es el nombre de la variable donde queremos guardar el dato leído. Por ejemplo, si queremos leer la edad de la persona y guardarla en la variable `edad`, escribimos:

```c++
cin >> edad;
```

De esta forma, el programa se detiene y espera a que el usuario introduzca un valor por el teclado y pulse la tecla Enter. El valor introducido se guarda en la variable `edad`. Podemos hacer lo mismo para el sexo, la altura y el nombre, y guardarlos en las variables correspondientes.

Para mostrar los datos de la persona en la salida estándar, podemos usar el operador `<<`, que se llama operador de inserción. Este operador se usa junto con el objeto `cout`, que representa la salida estándar. La sintaxis es la siguiente:

```c++
cout << dato;
```

Donde `dato` es el dato que queremos mostrar en la salida estándar, normalmente el monitor. El dato puede ser una variable, una constante, una expresión o una cadena de caracteres. Por ejemplo, si queremos mostrar el mensaje "Hola, mundo" en la salida estándar, escribimos:

```c++
cout << "Hola, mundo";
```

Podemos usar el operador `<<` varias veces seguidas para mostrar varios datos en la misma línea, separados por espacios. Por ejemplo, si queremos mostrar el nombre de la persona, seguido de un signo de dos puntos, seguido del valor de la variable `nombre`, escribimos:

```c++
cout << "Nombre: " << nombre;
```

También podemos usar el objeto `endl`, que representa el fin de línea, para saltar a la siguiente línea después de mostrar un dato. Por ejemplo, si queremos mostrar el mensaje "Hola, mundo" y luego saltar a la siguiente línea, escribimos:

```c++
cout << "Hola, mundo" << endl;
```

## Código completo

Ya tenemos todos los elementos necesarios para resolver el problema. Solo nos queda juntarlos en un solo código, que quedaría así:

```c++
#include <iostream> // Incluimos la librería que nos permite usar cin y cout
using namespace std; // Usamos el espacio de nombres estándar

int main() { // Definimos la función principal del programa
  // Declaramos las variables de los tipos de datos correspondientes
  int edad;
  char sexo;
  double altura;
  string nombre;

  // Leemos los datos de la persona de la entrada estándar y los guardamos en las variables
  cout << "Introduce el nombre de la persona: ";
  cin >> nombre;
  cout << "Introduce la edad de la persona: ";
  cin >> edad;
  cout << "Introduce el sexo de la persona (M o F): ";
  cin >> sexo;
  cout << "Introduce la altura de la persona en metros: ";
  cin >> altura;

  // Mostramos los datos de la persona en la salida estándar
  cout << "Los datos de la persona son:" << endl;
  cout << "Nombre: " << nombre << endl;
  cout << "Edad: " << edad << endl;
  cout << "Sexo: " << sexo << endl;
  cout << "Altura: " << altura << endl;

  return 0; // Terminamos el programa con éxito
}
```

