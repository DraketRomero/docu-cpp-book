#include <iostream>

using namespace std;

int main() {
    int studentGrade{100};

    // * En C++ existe el operador ternario o tambien llamado condicional (?:) el cual puede ser usado en lugar de un if else. Su funcion es igual al de un if else, pero acorta el codigo a una sola linea, se escribe de la siguiente manera:
    // * La parte a la izquiera de ?, studentGrade >= 60 es la condicion. El segundo operador, despues de ?  y antes de : ("Passed") es el valor de la condicion si es verdadera. El tercer operador, despues de : y antes del ); es el valor de la condicion si es falso.
    cout << (studentGrade >= 60 ? "Passed" : "Failed") << endl;
    
    // * Tambien es posible anidar esta condicion con otra condicion, aunque no es recomendable por lectura, por ejemplo:
    cout << (studentGrade >= 60 ? (studentGrade > 90 ? "Exent" : "Passed") : "Failed");
    
    return 0;
}