Los tipos de datos en C++ son fundamentales para almacenar y manipular información en programas. En esta práctica, vamos a adentrarnos en los tipos de datos básicos de C++ y explorar su funcionalidad mediante ejemplos prácticos. Utilizaremos un código base y lo ampliaremos progresivamente para comprender cada tipo de dato y sus operaciones.

### Parte 1: Comprendiendo la Base

Para comenzar, analicemos el código base:

```cpp
// Tipos de datos básicos en C++

#include<iostream>

using namespace std;

int main (){
    int entero = 15;
    float flotante = 10.45;
    double mayor = 16.3456;
    char letra = '1';

    cout << letra;

    return 0;
}
```

#### Desglose del Código

- **Inclusión de Bibliotecas**: `#include<iostream>`: Importa la biblioteca de entrada/salida de C++, permitiendo la interacción con la consola.

- **Espacio de Nombres**: `using namespace std;`: Evita la repetición de `std::` al usar funciones o tipos de la biblioteca estándar.

- **Declaración de Variables**: Se han declarado variables de diferentes tipos (`int`, `float`, `double`, `char`) con valores iniciales.

- **Salida en Pantalla**: Mediante `cout << letra;`, se muestra en pantalla el valor de la variable `letra`.


---

### Parte 2: Ampliando el Código (Continuación)

Ahora, ampliemos el código base para comprender mejor los tipos de datos y sus capacidades.

#### Inclusión de Bibliotecas Adicionales

```cpp
#include<iostream>
#include<limits>
```

Se agrega la biblioteca `<limits>`, que proporciona información sobre los límites de los diferentes tipos de datos en C++, ayudándonos a comprender sus rangos y tamaños.

#### Declaración de Nuevas Variables

```cpp
    bool logico = true;
```

Se ha introducido una nueva variable booleana `logico` con un valor inicial de `true`. Los booleanos son variables lógicas que pueden tener solo dos valores: `true` o `false`.

#### Visualización de Información

```cpp
    // Mostrar el valor, el tamaño y el rango de cada variable
    cout << "Valor\tTamaño\tMínimo\tMáximo\n"; // Cabecera de la tabla
    cout << entero << "\t" << sizeof(entero) << "\t" << numeric_limits<int>::min() << "\t" << numeric_limits<int>::max() << "\n"; // Mostrar detalles de int
    cout << flotante << "\t" << sizeof(flotante) << "\t" << numeric_limits<float>::min() << "\t" << numeric_limits<float>::max() << "\n"; // Mostrar detalles de float
    cout << mayor << "\t" << sizeof(mayor) << "\t" << numeric_limits<double>::min() << "\t" << numeric_limits<double>::max() << "\n"; // Mostrar detalles de double
    cout << letra << "\t" << sizeof(letra) << "\t" << static_cast<int>(numeric_limits<char>::min()) << "\t" << static_cast<int>(numeric_limits<char>::max()) << "\n"; // Mostrar detalles de char
    cout << logico << "\t" << sizeof(logico) << "\t" << numeric_limits<bool>::min() << "\t" << numeric_limits<bool>::max() << "\n"; // Mostrar detalles de bool
```

Aquí se muestran en forma de tabla el valor, el tamaño, el valor mínimo y máximo de cada tipo de variable utilizando `cout`. Se usa `sizeof` para determinar el tamaño en bytes de cada tipo de variable y `numeric_limits` para obtener los valores mínimos y máximos permitidos por cada tipo.

#### Operaciones Aritméticas y Lógicas

```cpp
    // Hacer algunas operaciones aritméticas con las variables
    cout << "La suma de entero y flotante es: " << entero + flotante << "\n"; // Suma
    cout << "La resta de mayor y flotante es: " << mayor - flotante << "\n"; // Resta
    cout << "La multiplicación de entero y mayor es: " << entero * mayor << "\n"; // Multiplicación
    cout << "La división de flotante y entero es: " << flotante / entero << "\n"; // División
    cout << "El módulo de entero y 4 es: " << entero % 4 << "\n"; // Módulo

    // Hacer algunas operaciones lógicas con las variables
    cout << "La negación de logico es: " << !logico << "\n"; // Negación
    cout << "La conjunción de logico y false es: " << (logico && false) << "\n"; // Conjunción
    cout << "La disyunción de logico y true es: " << (logico || true) << "\n"; // Disyunción
```

Aquí se realizan diferentes operaciones aritméticas (suma, resta, multiplicación, división, módulo) y lógicas (negación, conjunción, disyunción) utilizando los operadores correspondientes (`+`, `-`, `*`, `/`, `%`, `!`, `&&`, `||`), mostrando sus resultados mediante `cout`.

#### Resultado Esperado

Al ejecutar este código, se obtendrá una salida en la consola que mostrará una tabla con detalles de cada variable y los resultados de las operaciones realizadas.

```cmd
Valor   Tamaño  Mínimo  Máximo
15      4       -2147483648     2147483647
10.45   4       1.17549e-38     3.40282e+38
16.3456 8       2.22507e-308    1.79769e+308
1       1       -128    127
1       1       0       1
La suma de entero y flotante es: 25.45
La resta de mayor y flotante es: 5.8956
La multiplicación de entero y mayor es: 245.184
La división de flotante y entero es: 0.696667
El módulo de entero y 4 es: 3
La negación de logico es: 0
La conjunción de logico y false es: 0
La disyunción de logico y true es: 1

```

El codigo completo de como deberia quedar lo encuentras de igual manera en la carpeta [Practics](./Practics)