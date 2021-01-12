#include <cmath>
#include <iostream>

class UnsteadyGasField{
public:
  static constexpr double pi=std::atan(1)*4;

  double velocity(double position){

    return (sin(-pi*position));


    };
};
