//
//  Material.cpp
//  RayTracing
//
//  Created by Vinze Gonzales on 3/30/17.
//  Copyright © 2017 Vinze. All rights reserved.
//

#include "Material.hpp"

Material::Material(RGB diffuse, RGB specular, RGB reflection, RGB power)
{
    this->diffuse=diffuse;
    this->reflection=reflection;
    this->specular=specular;
    this->power=power;
}

Material::Material()
{
    
}

Material::~Material()
{
    
}
