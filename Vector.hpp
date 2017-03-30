//
//  Vector.hpp
//  RayTracing
//
//  Created by Vinze Gonzales on 3/29/17.
//  Copyright © 2017 Vinze. All rights reserved.
//

#ifndef Vector_hpp
#define Vector_hpp

#include <math.h>
#include <iostream>

using namespace std;

class Vector{
public:
    Vector(float,float,float);
    Vector();
    ~Vector();
    Vector plus(Vector);
    Vector minus(Vector);
    float module();
    Vector vector_product(Vector);
    float scalar_product(Vector);
    Vector product_number(float);
    Vector normalize();
    float get_x(){return x;}
    float get_y(){return y;}
    float get_z(){return z;}
    void show(){cout<<"<"<<x<<","<<y<<","<<z<<">"<<endl;};
private:
    float x,y,z;
};

#endif /* Vector_hpp */
