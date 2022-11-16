/**
 * @autor David Rostro Buide
 * @fecha Nov 14th 2022
 * @Nombre del programa: años bisiestos.
 * El programa consiste en leer un año y decir si es un año bisiesto o no.
 * alu0101544359@ull.edu.es
 */

#include <iostream>

void PrintProgramPurpose();

int main() {
  PrintProgramPurpose();
  int ano;
  std::cin >> ano;
  int resto;
  resto = ano % 4;
  if ((ano % 100 == 0) && ((ano / 100) % 4 != 0)) {
    std::cout << "NO" << std::endl;
  }
  else if  ((ano % 100 == 0) && ((ano / 100) % 4 == 0)) {
    std::cout << "YES" << std::endl;
  }
  else if (resto == 0) {
    std::cout << "YES" << std::endl;
  }
  else if (resto != 0) {
    std::cout << "NO" << std::endl;
  } 
  return 0;
}
void PrintProgramPurpose() {
  std::cout << "Este programa lee un año y dice si es un año bisiesto o no" << std::endl;
}

