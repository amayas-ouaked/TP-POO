//
// Created by dechaiss on 11/11/20.
//

#ifndef TD_STEADYSIMULATOR_H
#define TD_STEADYSIMULATOR_H
#include <string>
#include <memory>
#include "Simulator.h"
#include <iostream>
#include "Particles.h"
#include <exception>

class SteadySimulator : public Simulator {
  Particles m_particles;
public:
  SteadySimulator (unsigned taille): m_particles(taille) {};
  void compute() override {
  m_particles.init();
  auto final_time = 1.0;
  try {
    m_particles.computeEvolution(final_time);
  }
  catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }
  m_particles.print(final_time);
    
  }
};

#endif // TD_STEADYSIMULATOR_H
