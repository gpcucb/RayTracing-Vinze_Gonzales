//
//  Intersection.cpp
//  RayTracing
//
//  Created by Vinze Gonzales on 3/29/17.
//  Copyright © 2017 Vinze. All rights reserved.
//

#include "Intersection.hpp"

Intersection::Intersection(float distance, bool success)
{
    this->distance=distance;
    this->success=success;
}

Intersection::~Intersection()
{
    
}
