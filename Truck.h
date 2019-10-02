/*I am creating a new vehicle class name truck which inherits from poweredvehicle class and do not have any extra member data but the mileage is a random number between 20 and 80 miles per minute*/



#include "PoweredVehicle.h"
#include<cstdlib>
#include<ctime>

class Truck : public PoweredVehicle{

public: 
	virtual ~Truck();
	virtual double mileageEstimate(double time);
	virtual string toString();
};

