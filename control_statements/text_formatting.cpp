#include <iostream>

// * En la version 20 de C++ se incorporan nuevas capacidades para formateo de texto, similares a las que se usan en lenguajes como Rust y Python. Estas vienen incorporadas en la cabecera <format>
#include <format>

using namespace std;

int main()
{
    string student{"Diego"};
    int age{30};

    cout << format("La edad de {} es {}", student, age);

    return 0;
}
