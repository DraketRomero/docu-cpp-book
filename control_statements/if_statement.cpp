// * If statement - Es una de las llamadas "sentencias de seleccion". Se usan para elegir entre un curso de acciones alternativas. Por ejemplo, imagina que la calificacion para pasar de grado en un examen es 60. El siguiente codigo determina si la condicion studentGrade es mayor o igual a 60. Si lo es, imprime en pantalla "Passed" y la siguiente sentencia en orden es ejecutada, de lo contrario se ignora y el programa termina.


#include <iostream>

using namespace std;

int main() {

    int studentGrade{60};

    if(studentGrade >= 60) {
        cout << "Passed" << endl;
    }
    
    // * C++ provee la palabra reservada bool, que es un tipo de dato que puede almacenar 2 valores, true o false. Asi mismo, el 0 es tratado como false y la ausencia de 0, en pocas palabras, cualquiero otro valor es tratado como true. El compilador puede implicitamente convertir verdadero a 1 y falso a 0.
    bool isStudent{false};

    // ? Muestra 0 o 1 la variable isStudent
    cout << "Es estudiante ?: " << isStudent << endl;
    
    // ? Muestra false o true la variable isStudent
    cout << "Es estudiante ?: " << boolalpha << isStudent << endl;

    return 0;
}