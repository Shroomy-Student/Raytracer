#include "Object.h"

Object::Object()
{
}

Object::~Object()
{
}

glm::vec3 Object::ClosestPoint(std::shared_ptr<Ray> ray, glm::vec3 qPoint)
{
	
	glm::vec3 x = glm::vec3(0, 0, 0);
	glm::vec3 a = ray.dir

	//p-a
	glm::vec3 hypo = qPoint - 
	//x = a +((p-a).n)n
	return glm::vec3();
}

GetHit Object::RaySpheseInter(std::shared_ptr<Ray> ray, glm::vec3 center, int radius)
{
	sphere.hit = false;
	sphere.hitDistance = glm::vec3 (NULL);
	return sphere;
}

glm::vec3 Object::SphereNormal(glm::vec3 centre, glm::vec3 sPoint)
{
	return glm::vec3();
}

glm::vec3 Object::IntersectColor(std::shared_ptr<Ray> ray, glm::vec3 intersect)
{
	return glm::vec3(0,0,1);
}
