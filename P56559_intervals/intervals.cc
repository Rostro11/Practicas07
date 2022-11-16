/**
 * @author David Rostro Buide
 * @date Nov 15th 2022
 * @ProgramName: P56559 intervals.
 * @brief Write a program that, given two intervals, tells if one is inside the other.
 * alu0101544359@ull.edu.es
 */

#include <iostream>

int MayorMenor();
int MenorMayor();

int main() {
	int intervalo1_a, intervalo1_b, intervalo2_a, intervalo2_b;
  std::cin >> intervalo1_a >> intervalo1_b >> intervalo2_a >> intervalo2_b;
  if ((intervalo1_a == intervalo2_a) && (intervalo1_b == intervalo2_b)) {
    std::cout << '=' << std::endl;
  }
  if ((intervalo1_a <= intervalo2_a) && (intervalo1_b >= intervalo2_b)) {
    std::cout << 2 << std::endl;
  }
  if ((intervalo1_a >= intervalo2_a) && (intervalo1_b <= intervalo2_b)) {
    std::cout << 1 << std::endl;
  }
  else {
    std::cout << '?' << std::endl;
  }
  return 0;
}
