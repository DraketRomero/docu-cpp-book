#include <iostream>

using namespace std;

int main() {
    // * Una sentencia de iteracion nos permite especificar que un programa deberia repetir una accion mientras una condicion se mantenga como verdadera. En este ejemplo se usa la sentencia de iteracion while, que muestra los 3 primeras potencias mayores que 100. Este ejemplo imprime 9, 27, 81 y 243. En cuanto la variable producto obtiene este ultimo valor, la condicion se vuelve false y la iteracion termina.
    
    int product{3};

    while(product <= 100) {
        product = 3 * product;
    }

    return 0;
}