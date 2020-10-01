#include <iostream>
#include <cmath>
#include <cstdlib>
//Cambio de prueba para hacer el push
float p(float x);
float q(float x);
float r(float x);

int main(int argc, char **argv)
{
    float x = std::atof(argv[1]);
    std::cout.precision(15);
    std::cout.setf(std::ios::scientific);
    std::cout << x << "\t" << p(x) << "\t" << q(x) << "\t" << r(x) << "\n";
    // Escriba acá cuál función usaría siempre y porqué

  return 0;
}
