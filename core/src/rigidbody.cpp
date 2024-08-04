#include <models/rigidbody.h>

#include <iostream>

RigidBody::RigidBody()
    : position(0.0f),
    orientation(1.0, 0.0, 0.0, 0.0),
    velocity(0.0f),
    angularVelocity(0.0f),
    mass(1.0f),
    inertiaTensor(1.0f)
{
}

void RigidBody::applyForce(const glm::vec3& force, const glm::vec3& point)
{
    std::cout << "Force applied.\n";
}

void RigidBody::integrate(float deltaTime)
{
    std::cout << "Integrated.\n";
}