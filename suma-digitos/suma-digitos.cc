/**
 * @autor David Rostro Buide
 * @fecha Nov 1st 2022
 * @Nombre del programa: P98960 uppercase and lowercase letters.
 * El programa consiste en leer un numero y mostrar la suma de sus digitos.
 * alu0101544359@ull.edu.es
 */

#include <iostream>

void PrintProgramPurpose();

int main() {
  PrintProgramPurpose();
  int numero;
  std::cin >> numero;
  int suma = 0;
  while (numero > 0) {
    suma = suma + numero % 10;
    numero = numero / 10;
  }
  std::cout << suma << std::endl;
  return 0;
}


void PrintProgramPurpose() {
  std::cout << "Este programa lee un número natural y muestra la suma de sus dígitos" << std::endl;
}

