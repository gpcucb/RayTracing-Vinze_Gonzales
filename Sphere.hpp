//
//  Sphere.hpp
//  RayTracing
//
//  Created by Vinze Gonzales on 3/29/17.
//  Copyright © 2017 Vinze. All rights reserved.
//

#ifndef Sphere_hpp
#define Sphere_hpp

#include "Vector.hpp"
#include "Intersection.hpp"
#include "Ray.hpp"
#include <iostream>
#include "RGB.hpp"
#include "Material.hpp"

using namespace std;

class Sphere
{
public:
    Sphere(Vector,float,RGB);
    Sphere();
    ~Sphere();
    Intersection isIntersection(Ray,float);
    RGB getColor(){return color;}
    Vector normal(Vector p);
    
private:
    Vector position;
    float radius;
    RGB color;
    float infinity;
    Material material;
};

#endif /* Sphere_hpp */
