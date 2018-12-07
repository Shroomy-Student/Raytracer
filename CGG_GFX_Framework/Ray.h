#ifndef Ray_H
#define Ray_H

#include <ext.hpp>
#include <memory>

//Class definition for Ray data
class Ray
{
public:
	Ray(glm::vec3 orig, glm::vec3 dir);
	~Ray();

};

#endif