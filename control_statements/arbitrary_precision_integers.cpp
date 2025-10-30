#include <iostream>

using namespace std;

int main()
{
    // * En C++, dentro de los tipos enteros existen los tipos long y long long, que manejan al menos 32 y 64 bits, respectivamente. El rango numerico depende del sistema donde se pruebe, por ejemplo, un entero de 4 bits puede almacenar desde -2,147,483,648 hasta ,147,483,647. En la mayoria de sistemas, un entero lon long puede almacenar desde -9,223,372,036,854,775,808 hasta 9,223,372,036,854,775,807. \
    
    // * Donde mas se puede visualizar el crecimiento de los valores es en el calculo del factorial, por lo que C++ solo permite calcular hasta el facorual de 20!. Lo que crea numeros tan grandes que es inevitable perderse leyendolos. C++14 nos provee una manera de separarlos visualmente y eso es usando el separador de digitos, que es un apostrofe (') cada 3 numeros. Ademas, podemos agregar 2 L's (LL) al final de la numeracion para identificar que es un long long.
    long long value{9'223'372'036'854'775'807LL};

    // * Los tipos fundamentales no son portables, es decir, no es posible ejecutar un programa donde un entero pueda ser un numero mayor al de la variable value. El hecho de sumarle 1 a ese valor, podria tener un comportamiento inesperado dependiendo del sistema donde se ejecute, puesto el valor de un entero de este tipo lo define cada sistema.

    cout << "El valor de value es: " << value << endl;
    cout << "El valor de value + 1 es: " << value + 1 << endl;


    // * Devuelve un valor incorrecto
    // cout << "El valor de value + 1 es: " << value + 2 << endl;

    return 0;
}
