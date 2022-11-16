/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file binario_a_decimal.cc
  * @author Yoel Benitez Cabrera
  * @email alu0101592305@ull.edu.es
  * @date Nov 14 2022
  * @brief Programa que recibe un número binario y lo convierte a decimal.
  */

#include <iostream>
#include <cmath>

void PropositoDelPrograma() {
  std::cout << "Este programa recibe un número en binario y lo convierte a decimal." << std::endl;
}

int BinarioADecimal(int numero_binario) {
  int numero_decimal{0};
  int potencia{0};
  while (numero_binario > 0) {
    if (numero_binario % 10 == 1) {
      numero_decimal = numero_decimal + pow(2, potencia); 
    }
    numero_binario = numero_binario / 10;
    ++potencia;
  }

  return numero_decimal;
}

bool ComprobacionBinario(int numero_binario) {
  while (numero_binario > 0) {
    if (numero_binario % 10 != 0 && numero_binario % 10 != 1){
      return false;
    }
    numero_binario = numero_binario / 10;
  }
  return true;
}

int main() {
  PropositoDelPrograma();
  int numero_binario{0}; 
  std::cin >> numero_binario;

  if (ComprobacionBinario(numero_binario) == true) {
    std::cout << BinarioADecimal(numero_binario) << std::endl;
  }
  else {
    std::cout << "Wrong Input" << std::endl;
  }

  return 0;
}
