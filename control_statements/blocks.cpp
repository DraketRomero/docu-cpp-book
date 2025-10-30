// * Blocks - Los bloques son un conjunt de codigo agrupado entre llaves {} y tienen su propio scope. Cualquier estructura, ya sea una constante, variable, funcion o bloque de texto solo vive dentro de ese bloque y no fuera del mismo.
 #include <iostream>
 using namespace std;

 int main() {
    string saludo_en_main{"Hola desde main"};
    
    // * Este es un bloque de codigo independiente de main. Puede tener cuales quiera de sentencias. 
    {
        string saludo_en_un_bloque{"Hola desde el bloque"};
        cout << saludo_en_main << " " << saludo_en_un_bloque << endl;
    }

    // * Muestra error al no encontrar la varieble saludo_en_un_bloque, debido a que no se encuentra en este scope.
    // cout << saludo_en_un_bloque << endl;

    cout << saludo_en_main << endl;
 }