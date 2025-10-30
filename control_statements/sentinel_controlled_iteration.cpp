// * En el ejemplo que calcula el promedio de una clase, no podemos predecir el dato que el usuario proporcinara, por ello hacemos uso de algo llamado "Iteracion controlada por centinelas", tambien llamada "valor de señal" un "valor tonto" o "valor de bandera" para indicar que la entrada de datos termino. En este caso, el usuario ingresa las calificaciones hasta que se ingrese el valor centinela. Este valor se debe elegir con cuidado, haciendo que no se confunda con un valor valido para la ejecucion del programa. Si al principio de la lectura de los datos se ingresa el valor centinela, el calculo del promedio sera una division por cero, lo cual representa un valor undefined que es un error que debe ser manejado con un mensaje de error.
#include <iostream>

// * Incluye manipuladores de flujo parametrizados
#include <iomanip>

using namespace std;

int main()
{
    int total{0}, gradeCounter{0};

    // * Es importante denotar que la notacion de asignacion con llaves previene algo llamado narrowing conversion, que es la una conversion a enteros en una asignacion decimal, por ejemplo:
    // * int prueba = 12.7; pasa a ser 12

    // * Sin embargo, usando la notacion, el compilador generara un error que nos avisara que mejor cambiemos el tipo de dato a un double
    // * int prueba{12.7}; -> genera error para declarar mejor como double -> double prueba{12.7};
    double prueba{12.7};

    cout << " * -------------- Bienvenido al calculo del promedio de estudiantes de la clase -------------- * \n";

    cout << "Ingresa la calificacion del estudiante " << gradeCounter + 1 << " o -1 para terminar la ejecucion: \n";
    int grade;
    cin >> grade;

    // * El ciclo se detiene hasta que el usuario ingrese el valor centinela.
    while (grade != -1)
    {
        total += grade;
        gradeCounter += 1;

        cout << "Ingresa la calificacion del estudiante " << gradeCounter + 1 << " o -1 para terminar la ejecucion: \n";
        cin >> grade;
    }

    // * Se ejecuta si el usuario ingreso al menos 1 calificacion
    if (gradeCounter != 0)
    {
        // * La division de 2 numeros enteros siempre dara un entero, incluso si el resultado es decimal, C++ recorta la parte decimal y solo muestra la parte entera.
        // int average{total / 10};

        /*
         * Es por ello que se debe usar una variable float, double o long double. La principal diferencia entre estos tipos es que double tipicamente almacena numeros con una magnitud mas larga y con mas detalle que float, en otras palabras, mas digitos a la derecha del punto decimal lo que tambien es conocido como precision numerica. De la misma manera ocurre con long double vs double.

         * A pesar de que la variable sea declarada como double, la division seguira devolviendo un valor entero, es por ello que se debe forzar la conversion del total a un valor decimal.
         */

        // double average{total / gradeCounter};

        /*
         * Operador static_cast<double>(total) - Convierte una copia temporal de su operando en parentesis (total) al tipo definido entre <> (en este caso double). El valor almacenado en total es aun un entero. Usar un operador de conversion de esta manera es llamado conversion explicita. Este operador, es uno de varios operadores que existen en C++.
         */
        double average{static_cast<double>(total) / gradeCounter};

        // * Despues de la conversion, el calculo consiste en la copia temporal del valor double de la variable total dividida por la variable entera gradeCounter. Para la aritmetica, el compilador sabe como evaluar solo expresiones en las cuales todos los tipos de operandos son identicos. Para asegurarse de esto, el compilador realiza una operacion llamada promocion (promotion) tambien llamada conversion implicita (implicity conversion) sobre los operandos seleccionados. En una expresion que contiene valores de tipos de datos int y double, C++ promociona enteros a valores double, esta promocion es temporal, por lo que se debe respaldar asignandola a otra variable.

        // * Imprime el total y el promedio
        cout << "\nEl total de todos los " << gradeCounter << " estudiantes es: " << total << endl;

        /*
         * setprecision(numero) - Indica que la salida de los valores de punto flotante, deben ser con la cantidad definida dentro de los parentesis (en este caso 2), lo que establece la presicion de los digitos a la derecha del punto decimal. Es un manipulador de flujo parametrizado, ya que requiere un argumento para ejecutar su tarea. Los programas que usen este tipo de operadores deben incluir la cabecera <iomanip>

         * fixed - Este es un manipulador de flujo no parametrizado que no requiere un argumento e indica que la salida de los valores decimales debe ser en formato de punto fijo. Esta es lo opuesto a la notacion cientifica, la cual muestra numeros entre 1.0 y 10.0 multiplicados por una potencia de 10. Por ejemplo, el valor 3,100.0 en notacion cientifica, seria mostrado como 3.1e+03 (que es 3.1 x 10^3). Este formato es util para mostrar tanto numeros mas pequeños o mas grandes. Este operador obliga a mostrar la parte decimal de un double incluso si el resultado es un valor entero p/e 88, sale 88.00

         * Cuando se usan estos operadores, el valor en memoria sigue siendo el mismo, pero se redondea para mostrar el valor mas cercano al valor entero en la parte decimal, p/e 85.666 -> 85.67 o 87.946 -> 87.95
        */

        cout << setprecision(2) << fixed << "El promedio de la clase es: " << average << " prueba " << prueba << endl;
    }
    else
    { // * De lo contrario se muestra el mensaje informativo.
        cout << "No fueron ingresadas calificaciones\n";
    }

    return 0;
}
