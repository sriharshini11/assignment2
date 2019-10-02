#include "PoweredVehicle.h"
#include<cstdlib>
#include<ctime>

class Jet : public PoweredVehicle {

private:
	int numberOfEngines;
public:
	Jet();
	explicit Jet(string brand,string model, string fuelType, int numEngines);
	virtual ~Jet();
	int getnumberOfEngines();
	void setnumberOfEngines(int engines);
	virtual	double mileageEstimate(double time);
	virtual string toString();


};
