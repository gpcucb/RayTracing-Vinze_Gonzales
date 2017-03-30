//
//  Triangle.hpp
//  RayTracing
//
//  Created by Vinze Gonzales on 3/29/17.
//  Copyright © 2017 Vinze. All rights reserved.
//

#ifndef Triangle_hpp
#define Triangle_hpp

#include "Vector.hpp"
#include "Intersection.hpp"
#include "Ray.hpp"
#include "RGB.hpp"

class Triangle
{
public:
    Triangle(Vector,Vector,Vector,RGB);
    Triangle();
    ~Triangle();
    float determinant(Vector,Vector,Vector);
    Intersection isIntersection(Ray,float);
    Vector normal(Vector p);
private:
    Vector a,b,c;
    RGB color;
};

#endif /* Triangle_hpp */
