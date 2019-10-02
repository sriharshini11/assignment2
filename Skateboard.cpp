#include "Skateboard.h"
Skateboard::~Skateboard() = default;
double Skateboard::mileageEstimate(double time){
	double mileage=0.1 + (((double)rand()/RAND_MAX)*(0.5-0.1));
	mileage=mileage*time;
	if(time>25 && time<250)
	{
		double randommil; //to store random mileage to be added
		randommil=1 + (rand() % ((int)(time/3) - 1 + 1 ) );
		mileage+=randommil;

	}
	return mileage;
}
string Skateboard::toString(){
	return "-> Skateboard\n" + Vehicle::toString();

}
