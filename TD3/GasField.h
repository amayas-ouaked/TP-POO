#ifndef TD_GASFIELD_H_
#define TD_GASFIELD_H_

class GasField {

private:
 
static double vitesse;

 GasField();	
~GasField();

public:

static double get_vitesse();
	
static void set_vitesse(double vitess);
};
#endif
