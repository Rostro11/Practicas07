/**
 * @autor David Rostro Buide
 * @fecha Nov 15th 2022
 * @Nombre del programa: decimal to binary.
 * El programa consiste en leer un número y mostrar el numero binario que corresponda.
 * alu0101544359@ull.edu.es
 */

#include <iostream>

void PrintProgramPurpose() {
  std::cout << "El programa consiste en leer un número y mostrar el numero binario que corresponda." << std::endl;
}

int Binario(int numero_decimal) {
  int resto{0},producto{1},numero_binario{0};
  while (numero_decimal > 0) {
    resto = numero_decimal % 2;
    numero_binario = numero_binario + (resto * producto);
    numero_decimal = numero_decimal / 2;
    producto *= 10;
  }
  return numero_binario;
}

int main() {
  PrintProgramPurpose();
  int numero_decimal;
  std::cin >> numero_decimal;
  std::cout << Binario(numero_decimal) << std::endl;
  return 0;
}
