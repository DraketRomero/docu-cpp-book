#include <iostream>

int main() {
    // * Variables - Un nombre de variable puede ser cualquier identificador valido. Un identificador es una serie de caracteres, que consiste en un conjunto de letras, numeros y guiones bajos y no comienzan con un numero y no se usa un palabra reservedad por el lenguaje.
    // ! int number1 = 0;

    // * C++ es case sensitive, es decir, que una variable declarada con letras mayusculas y minusculas son diferentes, P/E -> int a1 es diferente de int A1.
    
    // * Declaracion e inicializacion de variables - Las variables en c++ se declaran siguiendo el patron -> tipo_de_dato nombre_variable{valor}, esta forma de inicializacion se conoce como "inicializacion llaveada" o en ingles "braced initialization". Esta fue introducida a partir de la version 11 del lenguaje.

    // * La declaracion de una variable puede contener cuantos caracteres sean necesarios, asi mismo, nunca se debe comenzar la declaracion de una variable con una letra mayusucula ni con uno o 2 guiones bajos, ya que los compiladores usan nombres como estos para sus propositos internos.

    // * La forma usual de declaracion de las variables cuando usan mas de un nombre es llamada "CamelCase", que dicta que las primeras letras de la primera palabra debe ser minuscula y solo la primera letra de la segunda palabra debe ser mayuscula. P/E: firstNumber.

    // * El lugar de la declaracion de valores puede ser en cualquier lugar del programa, pero es recomendable hacerlo antes de usarlas.

    // * Aunque no es obligatorio asignarles un valor al inicio del programa, esto ayuda a evitar errores.
    int a{0};
    int b{0};
    int result{0};
    
    // * Asi mismo, tambien se pueden declarar en una sola linea serparando cada variable con una , , pero eso hace al codigo menos legible al leerlo y genera confusiones al querer describir cada una.
    // int a{0}, b{0}, result{0};
    
    // * Tambien pueden ser por el operador de asignacion.
    // int a = 0;
    // int b = 0; 
    // int result = 0;

    // * Tambien se pueden declarar en una sola linea.
    // int a = 0, b = 0, result = 0;

    // * Imprimer un mensaje al usuario llamado "prompt", porque esta destinado para tomar una accion, 
    std::cout << "Ingresa el primer numero: "; 

    // * Usa el Objeto de flujo de entrada estándar cin (Standard Itput Stream Object), del espacio de nombres std y el operador >> se refiere a que es un operador de extracion de flujo para obtener un valor por teclado para la variable a, despues de ingresado el valor y presionar la tecla Enter.
    std::cin >> a;

    std::cout << "Ingresa el segundo numero: ";
    
    // * Lee por consola el valor para la variable b.
    std::cin >> b;

    // * La declaracion e inicializacion de la sumatoria de a mas b a result puede ser incluso a este punto, en ambas formas
    // int result{a + b};
    // int result = a + b;

    // * Pero solo la asignacion a la variable result puede ser de la forma normal.
    result = a + b;


    // * Muestra el mensaje del resultado en pantalla
    std::cout << "La suma de " << a << " + " << b << " es -> " << result;
}