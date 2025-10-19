#include <iostream>

// * Tipos fundamentales - Existen tipos llamados fundamentales, porque son los tipos mas basicos para declarar variables. Estos son:
/**
 * ? Tipos Enteros
    int: entero con signo (típicamente 4 bytes)
    short: entero corto con signo (típicamente 2 bytes)
    long: entero largo con signo (típicamente 4 u 8 bytes)
    long long: entero muy largo con signo (típicamente 8 bytes)
    unsigned int/short/long/long long: versiones sin signo de los anteriores

*  ? Tipos de Punto Flotante
    float: número decimal de precisión simple (4 bytes)
    double: número decimal de precisión doble (8 bytes)
    long double: número decimal de precisión extendida (típicamente 12 o 16 bytes)

 * ? Tipo Carácter
    char: carácter individual (1 byte)
    signed char: carácter con signo
    unsigned char: carácter sin signo
    wchar_t: carácter ancho para Unicode
    char16_t: carácter UTF-16 (C++11)
    char32_t: carácter UTF-32 (C++11)

 * ? Tipo Booleano
    bool: valor lógico (true o false)

 * ? Tipo Vacío
    void: representa la ausencia de tipo (usado en funciones que no retornan valor)
 */
int main() {
    int a{2};
    int b{-2};
    short corto{8};
    long largo{120};
    long long muyLargo{900};
    unsigned int sinSigno{-12};

    float decimalConPresicion{12.6};
    double decimalConPresicionDoble{29.9};
    long double decimalConPresicion{300.9};

    char carater{'a'};
    signed char caraterConSigno{'-2'};
    unsigned char caraterSinSigno{'-2'};
    wchar_t caraterAchoUnicode{L'💖'};
    char16_t caraterUnicodeUTF16{L'💖'};
    char32_t caraterUnicodeUTF32{L'💖'};

    return 0;
}
