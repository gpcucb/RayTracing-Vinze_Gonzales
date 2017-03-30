//
//  Light.cpp
//  RayTracing
//
//  Created by Vinze Gonzales on 3/30/17.
//  Copyright © 2017 Vinze. All rights reserved.
//

#include "Light.hpp"

Light::Light(Vector position, RGB color)
{
    this->position=position;
    this->color=color;
}


Light::Light()
{
    
}


Light::~Light()
{
    
}
