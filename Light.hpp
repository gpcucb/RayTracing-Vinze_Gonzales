//
//  Light.hpp
//  RayTracing
//
//  Created by Vinze Gonzales on 3/30/17.
//  Copyright © 2017 Vinze. All rights reserved.
//

#ifndef Light_hpp
#define Light_hpp

#include "Vector.hpp"
#include "RGB.hpp"

class Light
{
public:
    Light(Vector,RGB);
    Light();
    ~Light();
private:
    Vector position;
    RGB color;
};

#endif /* Light_hpp */
