//
//  Camera.cpp
//  RayTracing
//
//  Created by Vinze Gonzales on 3/29/17.
//  Copyright © 2017 Vinze. All rights reserved.
//

#include "Camera.hpp"

Camera::Camera(Vector e, Vector center, Vector up, float fov, float df)
{
    this->e=e;
    this->center=center;
    this->up=up;
    this->fov=fov;
    this->df=df;
}

Camera::Camera()
{
    
}

Camera::~Camera()
{
    
}

Vector Camera::w_vector()
{
    Vector d = center.minus(e);
    float x = d.get_x()/d.module();
    float y = d.get_y()/d.module();
    float z = d.get_z()/d.module();
    Vector result(x,y,z);
    return result;
}

Vector Camera::u_vector()
{
    Vector product = up.vector_product(w_vector());
    float x = product.get_x()/product.module();
    float y = product.get_y()/product.module();
    float z = product.get_z()/product.module();
    Vector result(x,y,z);
    return result;
}


Vector Camera::v_vector()
{
    return w_vector().vector_product(u_vector());
}


Vector Camera::ray_direction(int i, int j, int nx, int ny)
{
    float t = df*tanf(fov/2);
    float b = -t;
    float r = (nx*t)/ny;
    float l = -r;
    
    float u = l + ((r - l) * (i+0.5))/nx;
    float v = b + ((t - b) * (j+0.5))/ny;
    
    Vector dw = w_vector().product_number(-df);
    Vector uu = u_vector().product_number(u);
    Vector vv = v_vector().product_number(v);
    
    return (dw.plus(uu)).plus(vv);
}
