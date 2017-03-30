//
//  Ray.cpp
//  RayTracing
//
//  Created by Vinze Gonzales on 3/29/17.
//  Copyright © 2017 Vinze. All rights reserved.
//

#include "Ray.hpp"

Ray::Ray(Vector position, Vector direction)
{
    this->position=position;
    this->direction=direction;
}

Ray::~Ray()
{
    
}
