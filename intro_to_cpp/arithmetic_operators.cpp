#include <iostream>


/**
 * * Operadores aritmeticos - Son los operadores para hacer operaciones matematicas.
 *
 * ? Suma (+)
 * Representa -> a + b
 *
 * ? Resta (-)
 * Representa -> a - b
 *
 * ? Multiplicacion (*)
 * Representa ->  a * b o ab
 *
 * ? Division
 * Representa -> a / b
 *
 * ? Residuo (%)
 * Representa -> a % b o a mod b
 *
 * Reglas de Operador de procedencia - C++ aplica los operadores en expresiones aritmeticas en un orden preciso determinado por un conjunto de reglas llamadas de operador de procedencia, las cuales son generalmente las mismas que aquellas en algebra, las cuales son:
 *
 * 1.- Expresiones entre parentesis se evaluan primero. Se dice que los parentesis estan en "el mas alto nivel de procedencia". En casos de parentesis anidados o incrustados, por ejemplo:
 * (a * (b + c ))
 * Las expresiones mas enmedio en un par de parentesis se evaluan primero.
 *
 * 2.- Las operaciones de multiplicacion, division y residuo se evaluan despues. En una expresion donde se cuenta con varias de estas expresiones son aplicadas de izquierda a derecha. Estas 3 operaciones se dice que estan en el mismo nivel de procedencia.
 *
 * 3.- Las operaciones de suma y resta se evaluan al final. Si una expresion contiene varias de estas operaciones son aplicadas de izquierda a derecha. La summa y resta tambien tienen el mismo nivel de procedencia.
 */
int main() {

    int a{2};
    int b {3};

    // * Suma
    int result{a + b};

    std::cout << "La suma de " << a << " + " << b << " es -> " << result << "\n";

    // * Resta
    result = a - b;
    std::cout << "La resta de " << a << " - " << b << " es -> " << result << "\n";

    // * Multiplicacion
    result = a * b;
    std::cout << "La multiplicacion de " << a << " * " << b << " es -> " << result << "\n";

    // * Division
    double newResult = b / a;
    std::cout << "La division de " << b << " / " << a << " es -> " << newResult << "\n";

    // * Residuo
    result = b % a;
    std::cout << "El residuo de " << b << " % " << a << " es -> " << result << "\n";

    return 0;
}
