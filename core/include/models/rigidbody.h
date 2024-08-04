#pragma once

#include <glm/glm.hpp> 
#include <glm/gtc/quaternion.hpp>

struct RigidBody
{
    glm::vec3 position;
    glm::quat orientation;
    glm::vec3 velocity;
    glm::vec3 angularVelocity;
    float mass;
    glm::mat3 inertiaTensor;

    RigidBody();

    void applyForce(const glm::vec3& force, const glm::vec3& point);
    void integrate(float deltaTime);
};