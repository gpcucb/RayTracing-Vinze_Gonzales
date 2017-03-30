//
//  Camera.hpp
//  RayTracing
//
//  Created by Vinze Gonzales on 3/29/17.
//  Copyright © 2017 Vinze. All rights reserved.
//

#ifndef Camera_hpp
#define Camera_hpp

#include "Vector.hpp"

class Camera
{
public:
    Camera(Vector,Vector,Vector,float,float);
    Camera();
    ~Camera();
    Vector w_vector();
    Vector u_vector();
    Vector v_vector();
    Vector ray_direction(int,int,int,int);
    Vector get_e(){return e;}
private:
    Vector e, center, up;
    float fov, df;
};

#endif /* Camera_hpp */
