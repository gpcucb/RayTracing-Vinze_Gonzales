//
//  Vector.cpp
//  RayTracing
//
//  Created by Vinze Gonzales on 3/29/17.
//  Copyright © 2017 Vinze. All rights reserved.
//

#include "Vector.hpp"

Vector::Vector(float x,float y,float z)
{
    this->x=x;
    this->y=y;
    this->z=z;
}

Vector::Vector()
{
    
}

Vector::~Vector()
{
    
}

Vector Vector::plus(Vector vector)
{
    Vector result(x + vector.x,y + vector.y,z + vector.z);
    return result;
}

Vector Vector::minus(Vector vector)
{
    Vector result(x - vector.x,y - vector.y,z - vector.z);
    return result;
}

float Vector::module()
{
    return sqrtf(powf(x, 2) + powf(y, 2) + powf(z, 2));
}

Vector Vector::vector_product(Vector vector)
{
    Vector result((y * vector.z) - (z * vector.y),-((x * vector.z) - (z * vector.x)),(x * vector.y) - (y * vector.x));
    return result;
}

float Vector::scalar_product(Vector vector)
{
    float x = this->x * vector.x;
    float y = this->y * vector.y;
    float z = this->z * vector.z;
    return x+y+z;
}

Vector Vector::product_number(float number)
{
    Vector result(x*number,y*number,z*number);
    return result;
}


Vector Vector::normalize()
{
    float mod = module();
    
    return Vector(x / mod, y / mod, z / mod);
}
