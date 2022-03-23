#include <iostream>
#include <cmath>
#include <iomanip>

float x1_1(float c);
float x1_2(float c);
float x2_1(float c);
float x2_2(float c);
float a=1.0, b=1.0;

int main(int argc, char **argv){

    std::cout << "\t" << "c" << "\t\t" << "x_1" << "\t\t" << "x_2" << "\t\t" << "x'_1" << "\t\t" << "x'_2" << "\n";

    std::setprecision(7);
    for(int n=1; n<=10; n++){

      float c = std::pow(10, -n);
      std::cout << std::scientific << c << "\t" << x1_1(c) << "\t" << x1_2(c) << "\t" << x2_1(c) << "\t" << x2_2(c) << "\n";

    }      
}

float x1_1(float c){

  return (-b+std::sqrt(std::pow(b, 2) - 4*a*c))/(2*a);
}

float x1_2(float c){

  return (-b-std::sqrt(std::pow(b, 2) - 4*a*c))/(2*a);
}

float x2_1(float c){

  return (-2*c)/(b+std::sqrt(std::pow(b, 2) - 4*a*c));
}

float x2_2(float c){

  return (-2*c)/(b-std::sqrt(std::pow(b, 2) - 4*a*c));
}

