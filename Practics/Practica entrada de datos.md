# Problema a resolver

#### Escribe un programa que lea de la entrada estandar dos numeros y muestre en La salida estandar su suma, resta, multiplicacidn y division.

## Variables y tipos de datos

Lo primero que tenemos que hacer es declarar las variables que vamos a utilizar para almacenar los dos números que vamos a leer y los resultados de las operaciones. Una variable es un espacio de memoria que le asignamos un nombre y un tipo de dato. El tipo de dato nos indica qué tipo de información podemos guardar en la variable y cuánto espacio ocupa en la memoria. En C++, hay varios tipos de datos, pero los más comunes son:

- `int`: para números enteros, como 1, 2, 3, etc.
- `float`: para números reales, con decimales, como 1.5, 2.3, 3.14, etc.
- `double`: para números reales, con más precisión que `float`, como 1.23456789, 2.3456789, 3.14159265, etc.
- `char`: para caracteres, como 'a', 'b', 'c', etc.
- `bool`: para valores lógicos, como `true` o `false`.
- `string`: para cadenas de caracteres, como "hola", "mundo", "C++", etc.

En nuestro caso, vamos a usar el tipo de dato `double` para los dos números y los resultados, ya que queremos que puedan tener decimales y que sean lo más precisos posible. Para declarar una variable, tenemos que escribir el tipo de dato, seguido del nombre de la variable, y opcionalmente, un valor inicial. Por ejemplo:

```c++
double num1; // Declaramos una variable de tipo double llamada num1, sin asignarle ningún valor inicial
double num2 = 0; // Declaramos una variable de tipo double llamada num2, y le asignamos el valor inicial 0
double suma, resta, multiplicacion, division; // Declaramos cuatro variables de tipo double llamadas suma, resta, multiplicacion y division, sin asignarles ningún valor inicial
```

## Entrada y salida

Ahora que tenemos las variables, tenemos que leer los valores de los dos números de la entrada estándar. La entrada estándar es el dispositivo por el que el usuario introduce datos al programa, normalmente el teclado. Para leer datos de la entrada estándar, podemos usar el operador `>>`, que se llama operador de extracción. Este operador se usa junto con el objeto `cin`, que representa la entrada estándar. La sintaxis es la siguiente:

```c++
cin >> variable;
```

Donde `variable` es el nombre de la variable donde queremos guardar el dato leído. Por ejemplo, si queremos leer el primer número y guardarlo en la variable `num1`, escribimos:

```c++
cin >> num1;
```

De esta forma, el programa se detiene y espera a que el usuario introduzca un valor por el teclado y pulse la tecla Enter. El valor introducido se guarda en la variable `num1`. Podemos hacer lo mismo para el segundo número y guardarlo en la variable `num2`.

Para mostrar los resultados de las operaciones en la salida estándar, podemos usar el operador `<<`, que se llama operador de inserción. Este operador se usa junto con el objeto `cout`, que representa la salida estándar. La sintaxis es la siguiente:

```c++
cout << dato;
```

Donde `dato` es el dato que queremos mostrar en la salida estándar, normalmente el monitor. El dato puede ser una variable, una constante, una expresión o una cadena de caracteres. Por ejemplo, si queremos mostrar el mensaje "Hola, mundo" en la salida estándar, escribimos:

```c++
cout << "Hola, mundo";
```

Podemos usar el operador `<<` varias veces seguidas para mostrar varios datos en la misma línea, separados por espacios. Por ejemplo, si queremos mostrar el valor de la variable `num1`, seguido de un signo de suma, seguido del valor de la variable `num2`, escribimos:

```c++
cout << num1 << " + " << num2;
```

También podemos usar el objeto `endl`, que representa el fin de línea, para saltar a la siguiente línea después de mostrar un dato. Por ejemplo, si queremos mostrar el mensaje "Hola, mundo" y luego saltar a la siguiente línea, escribimos:

```c++
cout << "Hola, mundo" << endl;
```

## Operaciones aritméticas

Ya tenemos las variables y la entrada y salida, solo nos falta hacer las operaciones aritméticas. En C++, podemos usar los siguientes operadores para hacer operaciones aritméticas:

- `+`: para la suma, como `num1 + num2`
- `-`: para la resta, como `num1 - num2`
- `*`: para la multiplicación, como `num1 * num2`
- `/`: para la división, como `num1 / num2`
- `%`: para el módulo o resto, como `num1 % num2` (solo funciona con números enteros)

Para asignar el resultado de una operación a una variable, podemos usar el operador `=`, que se llama operador de asignación. La sintaxis es la siguiente:

```c++
variable = expresion;
```

Donde `variable` es el nombre de la variable donde queremos guardar el resultado, y `expresion` es la expresión que queremos calcular, que puede contener variables, constantes y operadores. Por ejemplo, si queremos calcular la suma de `num1` y `num2` y guardar el resultado en la variable `suma`, escribimos:

```c++
suma = num1 + num2;
```

Podemos hacer lo mismo para las otras operaciones y guardar los resultados en las variables correspondientes.

## Código completo

Ya tenemos todos los elementos necesarios para resolver el problema. Solo nos queda juntarlos en un solo código, que quedaría así:

```c++
#include <iostream> // Incluimos la librería que nos permite usar cin y cout
using namespace std; // Usamos el espacio de nombres estándar

int main() { // Definimos la función principal del programa
  // Declaramos las variables de tipo double
  double num1, num2, suma, resta, multiplicacion, division;

  // Leemos los dos números de la entrada estándar y los guardamos en las variables num1 y num2
  cout << "Introduce el primer número: ";
  cin >> num1;
  cout << "Introduce el segundo número: ";
  cin >> num2;

  // Calculamos las operaciones y guardamos los resultados en las variables correspondientes
  suma = num1 + num2;
  resta = num1 - num2;
  multiplicacion = num1 * num2;
  division = num1 / num2;

  // Mostramos los resultados en la salida estándar
  cout << "La suma de " << num1 << " y " << num2 << " es " << suma << endl;
  cout << "La resta de " << num1 << " y " << num2 << " es " << resta << endl;
  cout << "La multiplicación de " << num1 << " y " << num2 << " es " << multiplicacion << endl;
  cout << "La división de " << num1 << " y " << num2 << " es " << division << endl;

  return 0; // Terminamos el programa con éxito
}
```

## Ejemplo de ejecución

Para probar nuestro programa, podemos compilarlo y ejecutarlo con algún compilador de C++, como g++, o usar algún entorno de desarrollo integrado (IDE), como Visual Studio Code, que nos facilita el proceso. Un ejemplo de ejecución sería el siguiente:

```
Introduce el primer número: 5.6
Introduce el segundo número: 3.2
La suma de 5.6 y 3.2 es 8.8
La resta de 5.6 y 3.2 es 2.4
La multiplicación de 5.6 y 3.2 es 17.92
La división de 5.6 y 3.2 es 1.75
```
como las variables, los