#include "Truck.h"

Truck::~Truck()=default;
double Truck::mileageEstimate(double time)
{
	double mileage = 20 + (rand() % (80 - 20 + 1 ) );
	mileage=mileage*time;
	return mileage;
		
}
string Truck::toString(){
	return "-> Truck\n" + PoweredVehicle::toString();

}

