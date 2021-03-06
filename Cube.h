#ifndef CUBE_H_INCLUDED
#define CUBE_H_INCLUDED


#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <vector>
#include "Mass.h"


class Cube
{
private:

    //Spring values
    float m = 2.0f;
    float h = 0.015f;
    
    glm::vec3 g=glm::vec3(0.0f, 9.82f, 0.0f);
    glm::vec3 sXlenght = glm::vec3(1.0f, 0.0f,0.0f);
    glm::vec3 sYlenght = glm::vec3(0.0f, 1.0f,0.0f);
    glm::vec3 sZlenght = glm::vec3(0.0f, 0.0f,1.0f);
    glm::vec3 sXYZlenght = glm::vec3(1.0f, 1.0f,1.0f);


public:
    
    float k = 600.0f;
    float d = 20.0f;

    Cube();
    void setConstans(float _k, float _d){
        k=_k;
        d=_d;
    }
    std::vector<Mass> massVec;
    glm::vec3 F[8];

    void draw();
    void update();
    void transBot(glm::vec3 _val);
    void jump();
    void addExternalForce();
    glm::vec3 getCenter();


};


#endif // CUBE_H_INCLUDED

