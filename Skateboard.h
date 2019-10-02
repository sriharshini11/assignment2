#include "Vehicle.h"
#include<cstdlib>
#include<ctime>
class Skateboard : public Vehicle{
public:
	virtual ~Skateboard();
	virtual double mileageEstimate(double time);
	virtual string toString();
};
