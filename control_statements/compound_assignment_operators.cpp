#include <iostream>

using namespace std;

int main()
{
    // * En C++ existen los operadores de asignacion compuestos, que al realizar una operacion matematica permiten simplificar su escritura.
    int c = 3, d = 5, e = 4, f = 6, g = 12;

    // * Suma
    cout << "El valor de c antes de sumar 7 es: " << c << endl;
    // * Escribir c = c + 7, es lo mismo que: 
    c += 7;
    cout << "Despues de la sumatoria es: " << c << "\n" << endl;

    // * Resta
    cout << "El valor de d antes de restar 4 es: " << d << endl;
    // * Escribir d = d - 4, es lo mismo que: 
    d -= 4;
    cout << "Despues de la resta es: " << d << "\n" << endl;

    // * Multiplicacion
    cout << "El valor de e antes de multiplicar por 5 es: " << e << endl;
    // * Escribir e = e * 5, es lo mismo que: 
    e *= 5;
    cout << "Despues de la multiplicacion es: " << e << "\n" << endl;
    
    // * Division
    cout << "El valor de f antes de dividir entre 3 es: " << f << endl;
    // * Escribir f = f / 3, es lo mismo que: 
    f /= 3;
    cout << "Despues de la division es: " << f << "\n" << endl;

    // * Modulo
    cout << "El valor de g antes de asignar el modulo de 9 es: " << g << endl;
    // * Escribir g = g % 9, es lo mismo que: 
    g %= 9;
    cout << "Despues de la asignacion es: " << g << "\n" << endl;
    

    return 0;
}
