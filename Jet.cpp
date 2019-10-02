#include "Jet.h"
Jet::Jet(){
numberOfEngines=1;
setBrand("Custom");
setModel("Boeing");
}
Jet::Jet(string brand,string model, string fuelType, int numEngines){
	setBrand(brand);
    	setModel(model);
    	setFuelType(fuelType);
	setnumberOfEngines(numEngines);
}
Jet::~Jet()=default;
int Jet::getnumberOfEngines(){
	return numberOfEngines;
}
void Jet::setnumberOfEngines(int engines){
	numberOfEngines=engines;
}
double Jet::mileageEstimate(double time){
	double mileage = 40 + (rand() % (100 - 40 + 1 ) );
	mileage=mileage*time;
	if(numberOfEngines>2 && fuelType == "Rocket")
	{
		mileage += mileage*0.055;
	}
	return mileage;

}

string Jet::toString(){
	return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber of Engines: "+ to_string(getnumberOfEngines());

}
