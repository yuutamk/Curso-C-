# Problema a resolver

Escribe un programa que lea de la entrada estandar el precio de un producto y muestre en la salida estandar el precio del producto al aplicarle el IVA.

## Variables y tipos de datos

Lo primero que tenemos que hacer es declarar las variables que vamos a utilizar para almacenar el precio del producto y el precio con IVA. Una variable es un espacio de memoria que le asignamos un nombre y un tipo de dato. El tipo de dato nos indica qué tipo de información podemos guardar en la variable y cuánto espacio ocupa en la memoria. En C++, hay varios tipos de datos, pero los más comunes son:

- `int`: para números enteros, como 1, 2, 3, etc.
- `float`: para números reales, con decimales, como 1.5, 2.3, 3.14, etc.
- `double`: para números reales, con más precisión que `float`, como 1.23456789, 2.3456789, 3.14159265, etc.
- `char`: para caracteres, como 'a', 'b', 'c', etc.
- `bool`: para valores lógicos, como `true` o `false`.
- `string`: para cadenas de caracteres, como "hola", "mundo", "C++", etc.

En nuestro caso, vamos a usar el tipo de dato `double` para el precio del producto y el precio con IVA, ya que queremos que puedan tener decimales y que sean lo más precisos posible. Para declarar una variable, tenemos que escribir el tipo de dato, seguido del nombre de la variable, y opcionalmente, un valor inicial. Por ejemplo:

```c++
double precio; // Declaramos una variable de tipo double llamada precio, sin asignarle ningún valor inicial
double precio_iva = 0; // Declaramos una variable de tipo double llamada precio_iva, y le asignamos el valor inicial 0
```

## Entrada y salida

Ahora que tenemos las variables, tenemos que leer el valor del precio del producto de la entrada estándar. La entrada estándar es el dispositivo por el que el usuario introduce datos al programa, normalmente el teclado. Para leer datos de la entrada estándar, podemos usar el operador `>>`, que se llama operador de extracción. Este operador se usa junto con el objeto `cin`, que representa la entrada estándar. La sintaxis es la siguiente:

```c++
cin >> variable;
```

Donde `variable` es el nombre de la variable donde queremos guardar el dato leído. Por ejemplo, si queremos leer el precio del producto y guardarlo en la variable `precio`, escribimos:

```c++
cin >> precio;
```

De esta forma, el programa se detiene y espera a que el usuario introduzca un valor por el teclado y pulse la tecla Enter. El valor introducido se guarda en la variable `precio`. 

Para mostrar el resultado del precio con IVA en la salida estándar, podemos usar el operador `<<`, que se llama operador de inserción. Este operador se usa junto con el objeto `cout`, que representa la salida estándar. La sintaxis es la siguiente:

```c++
cout << dato;
```

Donde `dato` es el dato que queremos mostrar en la salida estándar, normalmente el monitor. El dato puede ser una variable, una constante, una expresión o una cadena de caracteres. Por ejemplo, si queremos mostrar el mensaje "Hola, mundo" en la salida estándar, escribimos:

```c++
cout << "Hola, mundo";
```

Podemos usar el operador `<<` varias veces seguidas para mostrar varios datos en la misma línea, separados por espacios. Por ejemplo, si queremos mostrar el valor de la variable `precio`, seguido de un signo de igual, seguido del valor de la variable `precio_iva`, escribimos:

```c++
cout << precio << " = " << precio_iva;
```

También podemos usar el objeto `endl`, que representa el fin de línea, para saltar a la siguiente línea después de mostrar un dato. Por ejemplo, si queremos mostrar el mensaje "Hola, mundo" y luego saltar a la siguiente línea, escribimos:

```c++
cout << "Hola, mundo" << endl;
```

## Operaciones aritméticas

Ya tenemos las variables y la entrada y salida, solo nos falta hacer la operación aritmética. En este caso, la operación que tenemos que hacer es calcular el precio con IVA, que se obtiene multiplicando el precio del producto por un factor que depende del porcentaje de IVA que se aplique. Por ejemplo, si el IVA es del 21%, el factor sería 1.21, y si el IVA es del 16%, el factor sería 1.16. En general, el factor se puede obtener sumando 1 al porcentaje de IVA dividido por 100. Por ejemplo, si el IVA es del 18%, el factor sería 1 + 18 / 100 = 1.18.

En C++, podemos usar los siguientes operadores para hacer operaciones aritméticas:

- `+`: para la suma, como `num1 + num2`
- `-`: para la resta, como `num1 - num2`
- `*`: para la multiplicación, como `num1 * num2`
- `/`: para la división, como `num1 / num2`
- `%`: para el módulo o resto, como `num1 % num2` (solo funciona con números enteros)

Para asignar el resultado de una operación a una variable, podemos usar el operador `=`, que se llama operador de asignación. La sintaxis es la siguiente:

```c++
variable = expresion;
```

Donde `variable` es el nombre de la variable donde queremos guardar el resultado, y `expresion` es la expresión que queremos calcular, que puede contener variables, constantes y operadores. Por ejemplo, si queremos calcular el precio con IVA y guardar el resultado en la variable `precio_iva`, escribimos:

```c++
precio_iva = precio * factor;
```

Donde `factor` es el factor que corresponde al porcentaje de IVA que se aplique. Podemos usar una variable para guardar el valor del factor, o usar una constante, que es un valor fijo que no cambia durante la ejecución del programa. Para declarar una constante, usamos la palabra reservada `const`, seguida del tipo de dato, el nombre de la constante y el valor inicial. Por ejemplo, si queremos declarar una constante de tipo `double` llamada `IVA` y que tenga el valor 1.16, escribimos:

```c++
const double IVA = 1.16;
```

## Código completo

Ya tenemos todos los elementos necesarios para resolver el problema. Solo nos queda juntarlos en un solo código, que quedaría así:

```c++
#include <iostream> // Incluimos la librería que nos permite usar cin y cout
using namespace std; // Usamos el espacio de nombres estándar

int main() { // Definimos la función principal del programa
  // Declaramos las variables de tipo double
  double precio, precio_iva;

  // Declaramos la constante de tipo double que representa el factor de IVA
  const double IVA = 0.16;

  // Leemos el precio del producto de la entrada estándar y lo guardamos en la variable precio
  cout << "Introduce el precio del producto: ";
  cin >> precio;

  // Calculamos el precio con IVA y lo guardamos en la variable precio_iva
  precio_iva = precio * IVA;

  // Mostramos el resultado en la salida estándar
  cout << "El precio del producto con IVA es " << precio_iva << endl;

  return 0; // Terminamos el programa con éxito
}
```

