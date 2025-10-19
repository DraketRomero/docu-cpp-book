/**
 * * Operadores relacionales y de igualdad
 * * Operadores relacionales - Los operadores relacionales son aquellos que comparan la relacion existente entre 2 numeros. Estos son:
 * * Mayor que (>)
 * * Menor que (<)
 * * Mayor o igual que (>=)
 * * Menor o igual que (<=)
 *
 * * Operadores de igualdad - Los operadores de igualdad son aquellos que validan la relacion entre 2 numeros. Estos son:
 * * Igual que (=)
 * * Diferente que (!=)
 *
 * * Normalmente se usan en conjunto de las llamadas sentencias de control (if statement).
 *
 * * if statement - Nos permite realizar la toma de decisiones basados en si una condicion es verdadera o falsa.
 */

#include <iostream>

// * Declaraciones using - Son declaraciones que eliminan la necesidad de repetir el prefijo std:: en cada cout o cin que use el programa.
// using std::cin;
// using std::cout;

// * Las lineas anteriores se pueden sustituir con la siguiente linea:
// * Lo cual habilita a nuestro programa a hacer uso de nombres del espacio de nombres de std sin el prefijo std::
using namespace std;

int main() {
  int number1{0};
  int number2{0};

  cout << "Enter two integers to compare: ";
  cin >> number1 >> number2;

  // * Calcula si los 2 numeros son iguales
  if (number1 == number2) {
    cout << number1 << " == " << number2 << "\n";
  }

  // * Calcula si los 2 numeros son iguales
  if (number1 != number2) {
    cout << number1 << " != " << number2 << "\n";
  }

  // * Calcula si el number1 es menor que el number2
  if (number1 < number2) {
    cout << number1 << " < " << number2 << "\n";
  }

  // * Calcula si el number1 es mayor que el number2
  if (number1 > number2) {
    cout << number1 << " > " << number2 << "\n";
  }

  // * Calcula si el number1 es menor o igual que el number2
  if (number1 <= number2) {
    cout << number1 << " <= " << number2 << "\n";
  }

  // * Calcula si el number1 es mayor o igual que el number2
  if (number1 >= number2) {
    cout << number1 << " >= " << number2 << "\n";
  }
}
