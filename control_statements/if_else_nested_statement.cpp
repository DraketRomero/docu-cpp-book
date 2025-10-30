// * Un programa puede anidar cuantos if else necesita para su evaluacion durante la ejecucion del programa. Por ejemplo, el siguiente programa evalua la calificacion del examen basado en la cantidad de aciertos que tuvo.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int studentGrade{50};
    string result{""};

    if (studentGrade >= 90) {
        result = "A";
    } else {
        if (studentGrade >= 80) {
            result = "B";
        } else {
            if (studentGrade >= 60) {
                result = "C";
            } else {
                if (studentGrade >= 90) {
                    result = "D";
                } else {
                    result = "F";
                }
            }
        }
    }

    cout << "La calificacion del estudiante es: " << result << endl;
    
    // * El codigo anterior tambien puede ser escrito de la siguiente manera, la cual es identica pero usa menos llaves {} menos espacio e identacion.
    if (studentGrade >= 90) {
        result = "A";
    } else if (studentGrade >= 80) {
        result = "B";
    } else if (studentGrade >= 60) {
        result = "C";
    } else if (studentGrade >= 90) {
        result = "D";
    } else {
        result = "F";
    }
    cout << "La calificacion del estudiante es: " << result << endl;

    // * De esta manera evitamos profundidad en la indentacion del codigo a la derecha, lo cual puede forzar a saltar lineas. A lo largo del codigo, siempre encerramos el cuerpo de las sentencias de control dentro de llaves {} lo cual evita errores de logica llamados "dangling-else" o else colgante.

    return 0;
}