// * Ejemplo que calcula el promedio de una clase, basado en el total de alumnos.
#include <iostream>

using namespace std;

int main() {
    int total{0}, gradeCounter{1};

    cout << " * -------------- Bienvenido al calculo del promedio de estudiantes de la clase -------------- * \n";

    while(gradeCounter <= 10) {
        cout << "Ingresa la calificacion del estudiante " << gradeCounter << ": \n";

        int grade;
        cin >> grade;
        total += grade;
        gradeCounter += 1;
    }

    int average{total / 10};

    cout << "\nEl total de todos los 10 estudiantes es: " << total << endl;
    cout << "El promedio de la clase es: " << average << endl;

    return 0;
}