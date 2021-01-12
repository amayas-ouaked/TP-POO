#include "Simulator.h"
#include "SteadySimulator.h"
#include "UnsteadySimulator.h"
#include "Particles.h"
#include <memory>
#include "GasField.h"
#include <string>
#include <iostream>

enum class SimulationType {SteadyState, UnsteadyState};

std::unique_ptr<Simulator> create_simulator (SimulationType simulation_type){
 std::unique_ptr<Simulator> simulator; //=
 
 switch (simulation_type)
  {
  case SimulationType::SteadyState:
    simulator = std::make_unique<SteadySimulator>(5);
    break;
  case SimulationType::UnsteadyState:
    simulator = std::make_unique<UnsteadySimulator>();
    break;
  }
  return simulator;
}
/*
Simulator* createSimulator(SimulationType simulation_type) {
  Simulator* simulator = nullptr;
  
*/

int main(){
auto simulation_type = SimulationType::SteadyState;
std::unique_ptr<Simulator> s= create_simulator (simulation_type);
  s->compute();
  return 0;
   
  
  /*auto simulation_type = SimulationType::UnsteadyState;
  Simulator* simulator = createSimulator(simulation_type);
  simulator->compute();
  return 0;
  */
  
  
}
