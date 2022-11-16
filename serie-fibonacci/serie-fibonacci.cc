/**
 * @autor David Rostro Buide
 * @fecha Nov 14th 2022
 * @Nombre del programa: serie fibonacci.
 * El programa consiste en leer un numero n y escribir los n primeros numeros de la serie fibonacci.
 * alu0101544359@ull.edu.es
 */

#include <iostream>

void PrintProgramPurpose();

int main() {
  PrintProgramPurpose();
  int numero_repes;
  std::cin >> numero_repes;
  int numero1 = 0;
  int numero2 = 1;
  int suma = 1;
  while (numero_repes > 0) {
    std::cout << numero1 << " ";
    suma = numero1 + numero2;
    numero1 = numero2;
    numero2 = suma;
    numero_repes = numero_repes - 1;
  }
  return 0;
} 
void PrintProgramPurpose() {
  std::cout << "Este programa lee un número n y muestra los n primeros numeros de la serie fibonacci" << std::endl;
}

