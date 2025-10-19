#include <iostream>

// * C++ cuenta con una clase precargada para el manejo especifico de cadenas de texto, que se llama string y se importa incluyendo la siguiente linea de codigo #include <string>
#include <string>

using namespace std;

int main() {
    // * A continuacion se decalaran 3 variables de tipo string de nombre s1, s2, s3. Las primeras 2 se inicializan con los valores "happy" y " birthday" respectivsmente, usando la forma de declaracion braced initialization.
    string s1{"happy"};
    string s2{" birthday"};
    string s3;

    // * A continuacion se muetran en pantalla, usando el modificador de escape \ seguido de " para mostrar en consola comillas dobles, al final se hace uso del metodo length el cual muestra la cantidad de caracteres en la variable a la que se hace referencia.
    cout << "s1: \"" << s1 << "\"; length: " << s1.length()
       << "\ns2: \"" << s2 << "\"; length: " << s2.length()
       << "\ns3: \"" << s3 << "\": length: " << s3.length();

     // * Aqui se hace uso de los operadores de equidad, comparando los strings s1 y s2
     // * boolalpha - Es un manipulador de flujos que pertenece a la cabecera iostream, y le indica al flujo de salida que muestre las comparaciones como palabras "true" o "false"
    cout << "\n\nThe results of comparing s1 and s2: " << boolalpha
         << "\ns1 == s2" << (s1 == s2)
         << "\ns1 != s2" << (s1 != s2);

    cout << "\n\nTesting s3.empty(): \n";

    // * empty() - Es un metodo que retorna un valor booleano e indica si la variable contiene valores. En otras palabras si su longitud es 0.
    if(s3.empty()) {
        cout << "s3 is empty: assinging to s3; \n";

        // * Aqui se realiza una asignacion a la variable s3, uniendo los valores de s1 y s2, usando el operador +, a este proceso se le llama concatenacion.
        s3 = s1 + s2;
        cout << "s3: \"" << s3 << "\"";
    }

    /*
     * * Incorporados en la version 20 de C++, se realiza una demostracion de los nuevos metodos starts_with() y ends_with().
     * starts_with() - Devuelve un valor booleano y valida si el contenido de la variable comienza con un conjunto de caracteres especificos y estos son enviados como parametro en la funcion
     * ends_with() - Devuelve un valor booleano y valida si el contenido de la variable termina con un conjunto de caracteres especificos y estos son enviados como parametro en la funcion
     */
    cout << "\n\ns1 starts with \"ha\": " << s1.starts_with("ha") << "\n";
    cout << "s2 starts with \"ha\": " << s2.starts_with("ha") << "\n";
    cout << "s1 ends with \"ay\": " << s2.ends_with("ay") << "\n";
    cout << "s2 ends with \"ay\": " << s2.ends_with("ay") << "\n";
}
