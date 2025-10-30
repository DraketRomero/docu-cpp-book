#include <iostream>

using namespace std;

int main()
{
    // * En C++ existen los operadores de incremento y decremento, se encargan de incrementar o decrementar en 1 la variable a la que se les asigna.
    int c = 5;

    // * Postfix increment (Incremento postfijado) - Usa el valor actual de la variable en la expresion en la cual la variable reside, luego incrementa la variable en 1
    cout << "El valor de c antes del incremento es: " << c << endl;
    cout << "Aplicando el operador c++: " << c++ << endl;
    cout << "Despues de aumentar: " << c << "\n" << endl;

    c = 5;
    // * Prefix increment (Incremento prefijado) - Incrementa la varible en 1, luego usa el nuevo valor de la variable en la expresion en la cual la variable reside. 
    cout << "El valor de c antes del incremento es: " << c << endl;
    cout << "Aplicando el operador ++c: " << ++c << endl;
    cout << "Despues de aumentar: " << c << "\n" << endl;

    // * Prefix decrement (Decremento prefijado) - Decrementa la varible en 1, luego usa el nuevo valor de la variable en la expresion en la cual la variable reside. 
    cout << "El valor de c antes del incremento es: " << c << endl;
    cout << "Aplicando el operador --c: " << --c << endl;
    cout << "Despues de restar: " << c << "\n" << endl;

    // * Postfix decrement (Decremento postfijado) - Usa el valor actual de la variable en la expresion en la cual la variable reside, luego decrementa la variable en 1
    cout << "El valor de c antes del incremento es: " << c << endl;
    cout << "Aplicando el operador c--: " << c-- << endl;
    cout << "Despues de restar: " << c << "\n" << endl;
    

    return 0;
}
