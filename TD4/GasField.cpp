#include <iostream>
#include "GasField.h"
 
double GasField::vitesse=1.0;

GasField::GasField()  {};	
GasField::~GasField() {};


double GasField::get_vitesse(){
	return GasField::vitesse;
	};
	
void GasField::set_vitesse(double vitess){
	GasField::vitesse = vitess;
	};
