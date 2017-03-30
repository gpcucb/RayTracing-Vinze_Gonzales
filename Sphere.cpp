//
//  Sphere.cpp
//  RayTracing
//
//  Created by Vinze Gonzales on 3/29/17.
//  Copyright © 2017 Vinze. All rights reserved.
//

#include "Sphere.hpp"

Sphere::Sphere(Vector position, float radius, RGB color)
{
    this->position=position;
    this->radius=radius;
    this->color=color;
    infinity = numeric_limits<float>::infinity();
}

Sphere::Sphere()
{
    
}

Sphere::~Sphere()
{
    
}


Intersection Sphere::isIntersection(Ray ray, float t)
{
    Vector e = ray.getPosition();
    Vector d = ray.getDirection();
    Vector e_c = e.minus(position);
    Vector d2 = d.product_number(2);
    
    float a = d.scalar_product(d);
    float b = d2.scalar_product(e_c);
    float c = e_c.scalar_product(e_c) - powf(radius, 2.0);
    
    float discriminant = powf(b, 2.0) - (4*a*c);
    
    if (discriminant<0.0) {
        Intersection intersection(0.0,false);
        return intersection;
    }
    
    float t0 = (-b - sqrtf(discriminant))/2*a;
    float t1 = (-b + sqrtf(discriminant))/2*a;
    
    bool success = false;
    
    if (t0>0.0 && t0<infinity) {
        t = t0;
        success = true;
    }
    if (t1>0.0 && t1<infinity) {
        t = t1;
        success = true;
    }
    
    Intersection intersection(t,success);
    return intersection;
}


Vector Sphere::normal(Vector p)
{
    return p.minus(position).product_number(1/radius).normalize();
}


























