//
// Created by dechaiss on 11/11/20.
//

#ifndef TD_PARTICLES_H
#define TD_PARTICLES_H

#include <exception>
#include <memory>
#include "GasField.cpp"
#include <iostream>
#include <vector>
#include <fstream>
#include <ctime>
#include <string>
class Particles {
private: 
	unsigned taille;
	double t0; //ancien temps de comute 
	std::vector<float> x; // vecteur de positions
	std::vector<float> velo; //

public:
  Particles(): taille(0), x(0), velo(0), t0(0) {};
  Particles( unsigned z) : taille(z), x(z), velo(z), t0(0) {};
  ~Particles(){};
  auto get_taille(){
  return this->taille;
  }

  void particles_position(){
  std::ofstream os;
	os.open ("particles_positoins.txt");
	for (int i = 0; i < taille; i++)
		os << std::to_string(this->x[i]) << "\n";
	os.close();
  };
  
  void particles_velocities(){
  std::ofstream os;
	os.open ("particles_velocities.txt");
	for (int i = 0; i < taille; i++)
		os << this->velo[i] << "\n";
	os.close();
  
  }
  void init(){
    std::cout << "--- init particles --- "<< std::endl;
	std::fill ( x.begin(), x.end(), 0);
	std::fill ( velo.begin(), velo.end(), 0);
  
  };

  void computeEvolution(double tf){
   std::cout << "--- compute particles evolution at time " << tf << " ---" << std::endl;
   
   if (x.empty() and velo.empty()) throw std::exception();
   else{
   std::fill ( velo.begin(), velo.end(), GasField::get_vitesse());
      	for ( auto i = 0; i < x.size(); i++)	{
	x[i] += velo[i] * (tf - t0);
	std::cout << "x[" << i << "] = " << x[i] << ", velo[" << i << "] = " << velo[i] << std::endl;
	}
  }

	this->t0 = tf;
  };

  void print(double time) {
  std::cout << "--- print particles position at time " << time << " ---" << "in file particles_positions "<< std::endl;
  std::cout << "--- print particles velocities at time " << time << " ---" << "in file particles_velocities "<< std::endl;	
  	this->particles_position();
	this->particles_velocities();

  }
};
#endif // TD_PARTICLES_H
