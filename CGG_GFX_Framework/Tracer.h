#ifndef Tracer_H
#define Tracer_H
#include "Ray.h"


#include <ext.hpp>
#include <memory>


//Class definition for Tracer class
class Tracer
{
public:
	Tracer();
	~Tracer();
	//Some function that takes in Ray and returns colour 
	glm::vec3 TraceRay(std::shared_ptr<Ray> ray);

	glm::vec3 color = glm::vec3(255, 0, 0);
};

#endif