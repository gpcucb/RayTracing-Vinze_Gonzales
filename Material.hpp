//
//  Material.hpp
//  RayTracing
//
//  Created by Vinze Gonzales on 3/30/17.
//  Copyright © 2017 Vinze. All rights reserved.
//

#ifndef Material_hpp
#define Material_hpp

#include "RGB.hpp"

class Material
{
public:
    Material(RGB,RGB,RGB,RGB);
    Material();
    ~Material();
    RGB getDiffuse(){return diffuse;}
private:
    RGB diffuse, specular, reflection, power;
};

#endif /* Material_hpp */
