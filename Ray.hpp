//
//  Ray.hpp
//  RayTracing
//
//  Created by Vinze Gonzales on 3/29/17.
//  Copyright © 2017 Vinze. All rights reserved.
//

#ifndef Ray_hpp
#define Ray_hpp

#include "Vector.hpp"

class Ray
{
public:
    Ray(Vector,Vector);
    ~Ray();
    Vector getPosition(){return position;}
    Vector getDirection(){return direction;}
private:
    Vector position, direction;
};

#endif /* Ray_hpp */
