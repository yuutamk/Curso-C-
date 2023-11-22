# C++ <a name="c++"></a>
¡Hola a todos los jóvenes programadores curiosos!

Hoy vamos a adentrarnos en un mundo fascinante: ¡la programación en C++! ¿Alguna vez te preguntaste cómo las computadoras entienden lo que les decimos? ¡Es todo gracias al código de máquina, que está formado solo por ceros y unos! Pero, ¿cómo logramos hablar con las computadoras de manera más fácil?

Existen diferentes "idiomas" que usamos para comunicarnos con las computadoras, como Java, Python, JavaScript y otros. Estos se llaman lenguajes modernos. Pero también hay otros, como los lenguajes ensambladores, que son como lenguajes más cercanos a la computadora. Aquí es donde entra en juego el C++, ¡que es súper emocionante!

![C++](./src/logo_cpp.png)

Antes de comenzar este viaje, necesitamos prepararnos y entender qué es C++ y los lenguajes de alto y bajo nivel.

## lenguajes de alto y bajo nivel

Los lenguajes de programación son una forma de comunicarse con las computadoras, que son máquinas capaces de realizar operaciones lógicas y matemáticas a gran velocidad. Sin embargo, las computadoras no entienden el lenguaje humano, sino que solo pueden procesar instrucciones binarias, es decir, secuencias de ceros y unos que representan datos y comandos. Estas instrucciones binarias se conocen como lenguaje de máquina, y son el nivel más bajo de programación que existe.

Pero escribir programas en lenguaje de máquina es muy difícil y tedioso, ya que requiere conocer el funcionamiento interno de la computadora, y escribir largas cadenas de bits que son difíciles de leer y depurar. Por eso, los programadores han creado otros lenguajes de programación más fáciles de usar y entender, que se conocen como lenguajes de alto nivel. Estos lenguajes utilizan palabras, símbolos y estructuras que se parecen más al lenguaje humano, y que permiten expresar algoritmos y soluciones de forma más clara y concisa. Algunos ejemplos de lenguajes de alto nivel son Python, Java, Ruby, JavaScript, etc.

Sin embargo, los lenguajes de alto nivel no se pueden ejecutar directamente por la computadora, sino que tienen que ser traducidos al lenguaje de máquina. Esto se puede hacer de dos formas: mediante un compilador o mediante un intérprete. Un compilador es un programa que convierte todo el código fuente de un lenguaje de alto nivel en un archivo ejecutable de lenguaje de máquina, que se puede ejecutar en la computadora. Un intérprete es un programa que lee y ejecuta el código fuente de un lenguaje de alto nivel línea por línea, sin generar un archivo ejecutable. Cada forma tiene sus ventajas y desventajas, pero en general, los programas compilados suelen ser más rápidos y eficientes, mientras que los programas interpretados suelen ser más flexibles y portables.

Entre los lenguajes de alto nivel y el lenguaje de máquina, hay otro nivel intermedio de programación, que se conoce como lenguaje de bajo nivel. Estos lenguajes son más cercanos al hardware que los lenguajes de alto nivel, pero más fáciles de usar que el lenguaje de máquina. Estos lenguajes utilizan instrucciones que se corresponden con las operaciones del procesador, y que se pueden representar mediante mnemónicos, que son abreviaturas de palabras clave. Estas instrucciones se conocen como lenguaje ensamblador, y se pueden traducir al lenguaje de máquina mediante un programa llamado ensamblador. Algunos ejemplos de lenguajes de bajo nivel son C, C++, Fortran, etc.

Los lenguajes de bajo nivel tienen la ventaja de que permiten un mayor control y rendimiento sobre el sistema, pero también tienen la desventaja de que requieren un mayor conocimiento y responsabilidad sobre los recursos y las operaciones del hardware, como la memoria, los registros, los puertos, los dispositivos de entrada y salida, etc. Además, los lenguajes de bajo nivel suelen ser menos portables y más dependientes de la arquitectura y el compilador de la máquina.

![Alto y bajo nivel](./src/alto-bajo-nivel.jpg)

En este curso, nos centraremos en uno de los lenguajes de bajo nivel más populares y poderosos que existen: C++. C++ es un lenguaje de programación que se basa en el lenguaje C, pero que añade algunas características que lo hacen más versátil y expresivo, como la programación orientada a objetos, la sobrecarga de operadores, las plantillas, las excepciones, etc. C++ también permite al programador elegir el nivel de abstracción que desea utilizar, desde el más bajo, que es casi equivalente al lenguaje ensamblador, hasta el más alto, que es similar a otros lenguajes de alto nivel. Esto hace que C++ sea un lenguaje multiparadigma, que se adapta a diferentes tipos de problemas y soluciones.


## **¿Qué es C++?**<a name="que-es-c++"></a>
C++ es un lenguaje de programación poderoso y extremadamente versátil. ¿Sabías que muchos videojuegos geniales como Minecraft o programas populares como Photoshop están escritos en C++? ¡Es realmente increíble cómo este lenguaje puede dar vida a cosas tan asombrosas!

C++ es conocido por su capacidad para mezclar la programación orientada a objetos con la programación más tradicional. Fue creado como una extensión del lenguaje de programación C en la década de 1980 y ha crecido para convertirse en uno de los lenguajes más utilizados en la programación de sistemas, videojuegos y aplicaciones.

**El Camino de C++**
Piensa en C++ como una caja de herramientas gigante. Puedes usarla para construir casi cualquier cosa: desde juegos épicos hasta programas que resuelven problemas matemáticos complejos. Su versatilidad lo hace súper emocionante.

Al igual que los superhéroes tienen diferentes habilidades, C++ puede manejar muchos desafíos informáticos. Puede hacer que las computadoras piensen, creen y solucionen problemas de manera rápida y eficiente.

![cpp conde](src/cpp_logo_code.jpg)

**¿Por qué Aprender C++?**
Te estarás preguntando, ¿por qué deberías aprender C++? ¡Aquí hay algunas razones emocionantes!

- Poder y Velocidad: C++ está cerca del corazón de las computadoras, lo que lo hace rápido y eficiente para resolver problemas complejos.
- Flexibilidad: Puedes usar C++ para construir casi cualquier cosa: desde aplicaciones de teléfonos móviles hasta sistemas operativos.
- Desafíos emocionantes: Si te gustan los desafíos y resolver problemas intrigantes, C++ te ofrecerá un montón de diversión.
- ¡El Futuro Es Tuyo!: Grandes compañías como Microsoft, Amazon y Sony buscan desarrolladores de C++ para crear nuevos y emocionantes proyectos.


## **Variables** <a name="variables"></a>

Imagina una caja mágica que puede guardar información. Esa caja es una variable. En el mundo de la programación, las variables son como cajitas donde podemos guardar números, palabras o información importante para usarla más tarde.

En C++, una variable tiene un nombre y un valor asociado. Por ejemplo, si queremos guardar la edad de alguien:

<!-- ```cpp
int edad = 12;
``` -->
![int](./src/int.png)

Aquí, "edad" es el nombre de la variable y "12" es el valor que está almacenando.

**Reglas para Crear Variables**

Hay algunas reglas para nombrar variables en C++. Debes recordar que:

- Los nombres de las variables pueden tener letras o números, y a veces el guion bajo (_), pero no es recomendable comenzar con un número.
- ¡Atención! Las variables no pueden comenzar con mayúsculas.

**Constantes: Valores que no Cambian**

Ahora, imagina una caja especial que tiene un valor que nunca cambia. Esa es una constante. En C++, usamos la palabra reservada "const" para definir constantes:

<!-- ```cpp
const int VALOR_CONSTANTE = 100;
``` -->
![const](./src/const.png)

Aquí, "VALOR_CONSTANTE" es una constante y no podemos cambiar su valor más adelante en el programa.

**Declaración estática de variables**

La declaración estática de variables se hace mediante la especificación del tipo de dato y el nombre de la variable, opcionalmente seguido de un valor inicial. Por ejemplo:

<!-- ```cpp
int x; // declara una variable de tipo entero llamada x, sin asignarle un valor
char c = 'a'; // declara una variable de tipo carácter llamada c, y le asigna el valor 'a'
``` -->
![variable estatica](./src/var-estatica.png)

La declaración estática de variables tiene la ventaja de que es más rápida y eficiente, ya que el compilador sabe de antemano cuánta memoria necesita reservar y dónde ubicarla. Además, el compilador puede hacer comprobaciones de tipos y errores en tiempo de compilación, lo que evita posibles fallos en tiempo de ejecución. Sin embargo, la declaración estática de variables también tiene la desventaja de que es más rígida y limitada, ya que el tamaño y la ubicación de la memoria de la variable no se pueden cambiar una vez que se ha declarado. Esto puede provocar problemas de desperdicio o escasez de memoria, si el tamaño de la variable es mayor o menor que el necesario.

**Declaración dinámica de variables**

La declaración dinámica de variables se hace mediante el uso de los operadores `new` y `delete`, que permiten asignar y liberar memoria en tiempo de ejecución. El operador `new` reserva una cantidad de memoria suficiente para almacenar un valor de un tipo determinado, y devuelve un puntero a esa zona de memoria. El operador `delete` libera la memoria que ha sido asignada previamente por el operador `new`, y evita que el puntero apunte a una zona de memoria inválida. Por ejemplo:

<!-- ```cpp
int* p = new int; // declara un puntero a entero llamado p, y le asigna una zona de memoria para un entero
*p = 10; // accede y modifica el valor de la zona de memoria apuntada por p
delete p; // libera la memoria asignada por el operador new, y evita que p apunte a una zona de memoria inválida
``` -->
![variable dinamica](./src/var-dinamica.png)

La declaración dinámica de variables tiene la ventaja de que es más flexible y adaptable, ya que el tamaño y la ubicación de la memoria de la variable se pueden cambiar según las necesidades del programa. Esto permite crear estructuras de datos dinámicas, como arreglos, listas, árboles, etc. Sin embargo, la declaración dinámica de variables también tiene la desventaja de que es más lenta y compleja, ya que el programador es responsable de asignar y liberar la memoria correctamente, y de evitar posibles errores, como fugas de memoria, corrupción de datos, o acceso a zonas de memoria no válidas.

## **Tipos de Datos en C++** <a name="tipos-datos"></a>

En C++, tenemos diferentes tipos de datos para diferentes tipos de información que queremos almacenar. Los más comunes son:

- **int**: Para números enteros (ejemplo: 10, -5, 1000).
- **float y double**: Para números decimales o flotantes (ejemplo: 3.14, 0.5, 9.99).
- **char**: Para caracteres individuales (ejemplo: 'a', 'B', '$').
- **bool**: Para valores de verdadero (true) o falso (false).

Cada tipo de dato tiene un tamaño específico que determina cuánta información puede almacenar.



- Tipos enteros: son los que representan números enteros, es decir, sin parte decimal. Se pueden dividir en dos categorías: con signo y sin signo. Los tipos enteros con signo pueden representar números positivos y negativos, mientras que los tipos enteros sin signo solo pueden representar números positivos. Los tipos enteros más comunes son `char`, `short`, `int`, `long` y `long long`.
- Tipos reales: son los que representan números reales, es decir, con parte decimal. Se pueden dividir en dos categorías: de precisión simple y de precisión doble. Los tipos reales de precisión simple pueden representar números con menos decimales, pero ocupan menos memoria. Los tipos reales de precisión doble pueden representar números con más decimales, pero ocupan más memoria. Los tipos reales más comunes son `float` y `double`.
- Tipo carácter: es el que representa un carácter, es decir, un símbolo alfanumérico o especial. El tipo carácter más común es `char`, que puede representar un carácter del conjunto ASCII, que tiene 128 símbolos. También existe el tipo `wchar_t`, que puede representar un carácter del conjunto Unicode, que tiene más de 100000 símbolos.
- Tipo booleano: es el que representa un valor lógico, es decir, verdadero o falso. El tipo booleano más común es `bool`, que puede representar los valores `true` o `false`.

En la siguiente tabla se muestra el tamaño y el rango de los tipos de datos básicos en C++, asumiendo que se usa una arquitectura de 32 bits y un compilador estándar:

| Tipo de dato | Tamaño (bytes) | Rango |
|--------------|----------------|-------|
| char         | 1              | -128 a 127 |
| unsigned char | 1             | 0 a 255 |
| short        | 2              | -32768 a 32767 |
| unsigned short | 2            | 0 a 65535 |
| int          | 4              | -2147483648 a 2147483647 |
| unsigned int | 4              | 0 a 4294967295 |
| long         | 4              | -2147483648 a 2147483647 |
| unsigned long | 4             | 0 a 4294967295 |
| long long    | 8              | -9223372036854775808 a 9223372036854775807 |
| unsigned long long | 8        | 0 a 18446744073709551615 |
| float        | 4              | ±1.17549435e-38 a ±3.40282347e+38 |
| double       | 8              | ±2.2250738585072014e-308 a ±1.7976931348623157e+308 |
| wchar_t      | 2 o 4          | depende del compilador |
| bool         | 1              | true o false |


#### ***Tipos string***

Tipos de cadena de caracteres En C++, no existe un tipo de dato especial para guardar cadenas de caracteres, como palabras o frases. Lo que sí existe son los tipos `char` y `wchar_t`, que sirven para guardar un solo carácter, como una letra o un signo. Para guardar una cadena de caracteres, hay que usar un arreglo de estos tipos, y poner un valor especial al final para indicar dónde termina la cadena (por ejemplo, ‘\0’ en ASCII). A este tipo de cadenas se les llama cadenas de estilo C, y son las que se usaban en el lenguaje C original. El problema de las cadenas de estilo C es que son difíciles de manejar y requieren usar funciones externas para hacer operaciones con ellas. Por eso, en C++ moderno, se recomienda usar los tipos de la biblioteca estándar `std::string` (para cadenas de caracteres de tipo char de 8 bits) o `std::wstring` (para cadenas de caracteres de tipo `wchar_t` de 16 bits). Estos tipos son como contenedores que guardan y manipulan cadenas de caracteres de forma más fácil y segura, y forman parte de las bibliotecas que vienen con cualquier compilador de C++ compatible. Para usar estos tipos, hay que incluir la directiva `#include <string>` en el programa. (También existe el tipo CString, que se usa con las bibliotecas MFC o ATL, pero no es parte del estándar de C++). El uso de arreglos de caracteres terminados en NULL (las cadenas de estilo C mencionadas antes) no se aconseja en C++ actual.


un ejemplo claro de esto sería el siguiente:

<!-- ```cpp
#include <string> // se necesita esta directiva para usar los tipos string

// declaración estática de variables de tipo string
std::string nombre = "Juan"; // se declara una variable de tipo string llamada nombre, y se le asigna el valor "Juan"
std::wstring saludo = L"Hola"; // se declara una variable de tipo wstring llamada saludo, y se le asigna el valor "Hola"

// declaración dinámica de variables de tipo string
std::string* mensaje = new std::string("Bienvenido"); // se declara un puntero a string llamado mensaje, y se le asigna una zona de memoria para un string con el valor "Bienvenido"
std::wstring* despedida = new std::wstring(L"Adiós"); // se declara un puntero a wstring llamado despedida, y se le asigna una zona de memoria para un wstring con el valor "Adiós"

// uso de variables de tipo string
std::cout << nombre << std::endl; // se imprime el valor de la variable nombre en la salida estándar
std::wcout << saludo << std::endl; // se imprime el valor de la variable saludo en la salida estándar
std::cout << *mensaje << std::endl; // se imprime el valor de la zona de memoria apuntada por el puntero mensaje en la salida estándar
std::wcout << *despedida << std::endl; // se imprime el valor de la zona de memoria apuntada por el puntero despedida en la salida estándar

// liberación de la memoria asignada dinámicamente
delete mensaje; // se libera la memoria asignada por el operador new para el puntero mensaje
delete despedida; // se libera la memoria asignada por el operador new para el puntero despedida

``` -->
![string](./src/string.png)

Ahora veremos cómo escribir y ejecutar nuestro primer programa en C++, que consiste en mostrar el mensaje "Hola mundo :D" en la pantalla. Para ello, necesitamos un editor de texto, donde escribiremos el código fuente del programa, y un compilador, que traducirá el código fuente a un archivo ejecutable que se puede ejecutar en la computadora. Hay muchos editores de texto y compiladores disponibles, pero en este caso, usaremos el editor dev c++.

El código fuente de nuestro primer programa en C++ es el siguiente:

```cpp
//Primer programa en c++

using namespace std;

#include<iostream>

int main(){

    cout<<"Hola mundo :D"<<endl;

    cout<<"Hola mundo :D\n";

    return 0;
}
```

Veamos qué significa cada línea de este código:

![comentario](./src/comentario.png)

- La primera línea es un comentario, que sirve para añadir información o explicaciones al código, pero que no afecta al funcionamiento del programa. Los comentarios se pueden escribir de dos formas: con dos barras (//) para comentarios de una sola línea, o con una barra y un asterisco (/*) para comentarios de varias líneas, que se cierran con un asterisco y una barra (\*/). En este caso, el comentario indica el propósito del programa.
  
    ![namespaces](./src/namespaces.png)
    
- La segunda línea es una directiva de preprocesador, que sirve para dar instrucciones al compilador antes de traducir el código fuente. Las directivas de preprocesador se escriben con una almohadilla (#) al principio. En este caso, la directiva using namespace std le dice al compilador que use el espacio de nombres estándar, que es donde se encuentran las funciones y los tipos de la biblioteca estándar de C++, como cout, string, vector, etc. Esto nos evita tener que escribir el nombre completo de cada función o tipo, como std::cout o std::string, cada vez que los usemos.

    ![include](./src/include.png)
    
- La tercera línea es otra directiva de preprocesador, que sirve para incluir el contenido de otro archivo en el código fuente. En este caso, la directiva `#include<iostream>` incluye el contenido del archivo iostream, que es el que contiene las funciones y los tipos para hacer operaciones de entrada y salida, como leer datos del teclado o mostrar datos en la pantalla. El nombre del archivo se escribe entre paréntesis angulares (< >) si se trata de un archivo de la biblioteca estándar, o entre comillas dobles (" ") si se trata de un archivo propio o de terceros.

    ![main](./src/main.png)

- La quinta línea es la definición de la función principal del programa, que se llama main. La función main es la que se ejecuta al iniciar el programa, y es la que contiene las instrucciones que se quieren realizar. La función main se escribe con la palabra reservada int, que indica el tipo de dato que devuelve la función, seguida del nombre de la función, y unos paréntesis que pueden contener parámetros, que son valores que se le pasan a la función. En este caso, la función main no tiene parámetros, por lo que los paréntesis están vacíos. Después de los paréntesis, se abre una llave ({), que indica el inicio del cuerpo de la función, donde se escriben las instrucciones.

    ![cout](./src/cout.png)

- La sexta línea es una instrucción, que sirve para realizar una acción o una operación en el programa. Las instrucciones se escriben con una o más expresiones, que son combinaciones de valores, variables, operadores y funciones, que producen un resultado. Las instrucciones se terminan con un punto y coma (\;), que indica el final de la instrucción. En este caso, la instrucción es `cout<<"Hola mundo :D"<<endl;`, que sirve para mostrar el mensaje "Hola mundo :D" en la pantalla, seguido de un salto de línea. La expresión `cout` es un objeto de la clase *ostream*, que representa el flujo de salida estándar, es decir, la pantalla. El operador `<<` es un operador de inserción, que sirve para enviar un valor al flujo de salida. El valor que se envía es "Hola mundo :D", que es una cadena de caracteres, es decir, una secuencia de caracteres entre comillas dobles. El valor `endl` es otro objeto de la clase *ostream*, que representa el fin de línea, es decir, un carácter especial que hace que el cursor se mueva a la siguiente línea. Al usar el operador `<<` con `cout` y `endl`, se consigue mostrar el mensaje en la pantalla y pasar a la siguiente línea.
- La séptima línea es otra instrucción, que sirve para mostrar el mismo mensaje que la anterior, pero con una forma diferente. En este caso, la instrucción es `cout<<"Hola mundo :D\n";`, que también usa el objeto cout y el operador `<<`, pero en lugar de usar el objeto endl, usa el carácter especial `\n`, que también representa el fin de línea. El carácter `\n` se escribe dentro de la cadena de caracteres, precedido de una barra invertida (\\), que indica que se trata de un carácter de escape, es decir, un carácter que tiene un significado especial y que no se muestra literalmente. Hay otros caracteres de escape, como `\t` (tabulación), `\r` (retorno de carro), `\` (barra invertida), \" (comillas dobles), etc. Al usar el carácter `\n` con `cout`, se consigue el mismo efecto que con `endl`, pero con menos caracteres.

    ![return](./src/return.png)

- La octava línea es la última instrucción de la función main, que sirve para devolver un valor al finalizar el programa. En este caso, la instrucción es `return 0;`, que devuelve el valor 0, que indica que el programa ha terminado correctamente. La palabra reservada `return` indica que se quiere devolver un valor, y el valor que se devuelve debe ser del mismo tipo que el que se ha especificado al definir la función. En este caso, la función `main` tiene el tipo `int`, que es un tipo entero, por lo que el valor que se devuelve debe ser un número entero. El valor 0 se usa por convención para indicar que el programa ha terminado sin errores, pero se puede usar cualquier otro valor entero para indicar otros tipos de finalización, como errores o excepciones.
- La novena línea es una llave de cierre (}), que indica el final del cuerpo de la función main, y por tanto, el final del programa.

Este es el código fuente de nuestro primer programa en C++, que muestra el mensaje "Hola mundo :D" en la pantalla. Para ejecutarlo, hay que guardar el código fuente en un archivo con extensión .cpp, como por ejemplo, hola_mundo.cpp, y luego usar el compilador dev c++ damos clic en execute y luego en compile & run.

![compiler & run](./src/compliler&run.png)

Este comando le dice al sistema operativo que ejecute el archivo hola_mundo.exe, y que muestre el resultado en la pantalla. Si todo ha ido bien, se debería ver el siguiente resultado:

<!-- ```cmd
Hola mundo :D
Hola mundo :D
``` -->
![resultado](./src/resultado-programa1.png)

Este es el resultado de nuestro primer programa en C++, que muestra el mensaje "Hola mundo :D" en la pantalla, dos veces, una con endl y otra con \n. Con esto, hemos aprendido los conceptos básicos de C++.