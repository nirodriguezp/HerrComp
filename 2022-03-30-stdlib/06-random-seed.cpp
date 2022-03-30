#include <random>
#include <iostream>
#include <cstdlib>

int main(int argc, char **argv)
{
  int seed = std::atoi(argv[1]);
  std::mt19937 gen(seed);
  std::uniform_real_distribution<double> dis(1, 2);
  for(int n = 0; n < 100000; ++n) {
    std::cout << dis(gen) << std::endl;
  }
  return 0;
}
