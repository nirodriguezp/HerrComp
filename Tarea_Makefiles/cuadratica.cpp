#include <iostream>
#include <cmath>
#include <iomanip>

double x1_1(double a, double b, double c); //forma 1 de solucionar la ec. cuadratica, solucion 1
double x1_2(double a, double b, double c); //forma 1 de solucionar la ec. cuadratica, solucion 2
double x2_1(double a, double b, double c); //forma 2 de solucionar la ec. cuadratica, solucion 1
double x2_2(double a, double b, double c); //forma 2 de solucionar la ec. cuadratica, solucion 2

int main(int argc, char **argv){
    
    double a=1.0, b=1.0;
    std::cout << "\t" << "c" << "\t\t" << "x_1" << "\t\t" << "x_2" << "\t\t" << "x'_1" << "\t\t" << "x'_2" << "\n";

    std::setprecision(15);  
    for(int n=1; n<=10; n++){

      double c = std::pow(10.0, -n); 
      std::cout << std::scientific << c << "\t" << x1_1(a, b, c) << "\t" << x1_2(a, b, c) << "\t" << x2_1(a, b, c) << "\t" << x2_2(a, b, c) << "\n";

    }      
}

double x1_1(double a, double b,double c){

  return (-b+std::sqrt(std::pow(b, 2) - 4*a*c))/(2*a);
}

double x1_2(double a, double b,double c){

  return (-b-std::sqrt(std::pow(b, 2) - 4*a*c))/(2*a);
}

double x2_1(double a, double b,double c){

  return (-2*c)/(b+std::sqrt(std::pow(b, 2) - 4*a*c));
}

double x2_2(double a, double b,double c){

  return (-2*c)/(b-std::sqrt(std::pow(b, 2) - 4*a*c));
}

