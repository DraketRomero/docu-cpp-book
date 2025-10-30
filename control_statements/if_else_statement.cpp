// * Sentencia if-else - Permite ejecutar una segunda accion cuando la primera evaluacion no fue verdadera. Por ejemplo, siguiendo el ejemplo del dia anterior, podemos agregar el segundo bloque para imprimir en pantalla el mensaje "Failed" si la variable es menor a 60.

#include <iostream>

using namespace std;

int main()
{
    int studentGrade{50};

    if (studentGrade >= 60) {
        cout << "Passed" << endl;
    } else {
        cout << "Failed" << endl;
    }

    return 0;
}
