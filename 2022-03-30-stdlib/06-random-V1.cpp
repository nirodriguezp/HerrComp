#include <random>
#include <iostream>

int main(void)
{
  //std::random_device rd; // inicializacion con semilla aleatoria
  //std::mt19937 gen(rd()); // genera bits aleatorios
  std::mt19937 gen(10);
  std::uniform_real_distribution<> dis(1, 2); // distribucion
  for(int n = 0; n < 10; ++n) {
    std::cout << dis(gen) << std::endl;
  }
}
