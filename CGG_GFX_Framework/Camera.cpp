#include "Camera.h"


Camera::Camera()
{

}

Camera::~Camera()
{

}

std::shared_ptr<Ray> Camera::MakeRay(int x,int y)
{
	std::shared_ptr<Ray> ray = std::make_shared<Ray>(glm::vec3(x, y, 0), glm::vec3(0, 0, 0));

	return ray;
}
