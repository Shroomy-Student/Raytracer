#ifndef Camera_H
#define Camera_H
#include "Ray.h"
#include <memory>

//Class definition for Camera data
class Camera
{
public:
	Camera();
	~Camera();
	//Make a ray
	std::shared_ptr<Ray> MakeRay(int x,int y);
	//Function to return ray

};
#endif