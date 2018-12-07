#ifndef Object_H
#define Object_H
#include "Ray.h"

#include <ext.hpp>
#include <memory>

struct GetHit
{
	bool hit;
	glm::vec3 hitDistance;
}sphere;

//Class definition for Tracer class
class Object
{
public:
	Object();
	~Object();

	glm::vec3 ClosestPoint(std::shared_ptr<Ray> ray, glm::vec3 sPoint);
	GetHit RaySpheseInter(std::shared_ptr<Ray> ray, glm::vec3 center, int radius);
	glm::vec3 SphereNormal(glm::vec3 centre, glm::vec3 sPoint);
	glm::vec3 IntersectColor(std::shared_ptr<Ray> ray, glm::vec3 intersect);
};

#endif