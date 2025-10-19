// * #include <iostream> - Habilita al programa la capacidad de mostrar datos en la consola, es una directiva de preprosesamiento la cual invoca el compilador antes de compilar el programa. Le notifica al preprosedador de C++ que integre en el programa los contenidos de flujo de entrada/salida de la cabecera <iostream>. Esta cabecera es un archivo que contiene la informacion que el compilador requiere cuando compilas cualquier programa que muestra mensajes en pantalla o lee informacion del teclado.
#include <iostream>

// * La funcion main es la principal en todo programa cpp, es la funcion que el compilador buscara y se ejecutara en primer lugar.
int main() {

    // * Esta linea es tambien llamda una sentencia, todas las sentencias terminan con un ;, las directivas de preprosesamiento no lo necesitan.

    // * std - Es el Objeto de flujo de salida estándar (Standard Output Stream Object), esta conectado direactamente a la pantalla, es requerido cuando usamos nombres que hemos incorporado al programa de la cabecera de la libreria estandar como <iostream>. La notacion std::cout especifica que estamos usando un nombre, en este caso cout, que pertenece al espacio de nombres std. Los nombres cin y cerr tambien pertenecen a este espacio de nombres.

    // * El operador << se refiere a que es un operador de insercion de flujo. Se escribe conforme la informacion fluye, es decir, hacia el operador cout.
    
    // * El caracter \n indica una secuencia de escape e indica un salto de linea, se escribe con la linea diagonal inversa e indica que es un caracter especial para ser mostrado en la salida en pantalla.
    std::cout << "Hello and welcome to C++! \n";
    
    // * Existen mas caracteres de secuencias de escape, que se muestran a continuacion:
    // ? \n  -> Salto de linea, Posiciona el cursor de la pantalla al comienzo de la nueva linea. 
    // ? \t  -> Tabulacion horizontal. Mueve el cursor de la pantalla al siguiente tabulacion.
    // ? \r  -> Retorno de carro. Posiciona el cursor de la pantalla al comienzo de la linea actual, no al comienzo de la siguiente linea.
    // ? \a  -> Suena una alerta. Genera el sonido de la campana del sistema.
    // ? \\  -> Diagonal inversa. Incluye el caracter de una diagonal inversa en una cadena de texto.
    // ? \'  -> Comilla simple. Incluye el caracter de una comilla simple en una cadena de texto.
    // ? \"" -> Comilla doble. Incluye el caracter de una comilla doble en una cadena de texto.
 
    // * Es una de varias maneras de terminar un programa. El valor 0 indica que la ejecucion del programa termino exitosamente. Si al finalizar la ejecucion de la funcion no encuentra una return 0; c++ trata al programa de igual manera comom terminado exitosamente.
    return 0;
}