//
//  Triangle.cpp
//  RayTracing
//
//  Created by Vinze Gonzales on 3/29/17.
//  Copyright © 2017 Vinze. All rights reserved.
//

#include "Triangle.hpp"

Triangle::Triangle(Vector a, Vector b, Vector c, RGB color)
{
    this->a=a;
    this->b=b;
    this->c=c;
    this->color=color;
}


Triangle::Triangle()
{
    
}

Triangle::~Triangle()
{
    
}


float Triangle::determinant(Vector vec1, Vector vec2, Vector vec3)
{
    float a,b,c,d,e,f,g,h,i;
    a = vec1.get_x();  b = vec1.get_y();  c = vec1.get_z();
    d = vec2.get_x();  e = vec2.get_y();  f = vec2.get_z();
    g = vec3.get_x();  h = vec3.get_y();  i = vec3.get_z();
    return (a*e*i)+(b*f*g)+(c*d*h)-(c*e*g)-(f*h*a)-(i*d*b);
}

Intersection Triangle::isIntersection(Ray ray, float t)
{
    Vector e = ray.getPosition();
    Vector d = ray.getDirection();
    
    float xa_xb, xa_xc, xa_xe;
    float ya_yb, ya_yc, ya_ye;
    float za_zb, za_zc, za_ze;
    
    xa_xb = a.get_x() - b.get_x(); xa_xc = a.get_x() - c.get_x(); xa_xe = a.get_x() - e.get_x();
    ya_yb = a.get_y() - b.get_y(); ya_yc = a.get_y() - c.get_y(); ya_ye = a.get_y() - e.get_y();
    za_zb = a.get_z() - b.get_z(); za_zc = a.get_z() - c.get_z(); za_ze = a.get_z() - e.get_z();
    
    float xd = d.get_x(); float yd = d.get_y(); float zd = d.get_z();
    
    
    Vector A(xa_xb, xa_xc, xd);
    Vector B(ya_yb, ya_yc, yd);
    Vector C(za_zb, za_zc, zd);
    
    float m = determinant(A, B, C);
    
    Vector A1(xa_xe, xa_xc, xd);
    Vector B1(ya_ye, ya_yc, yd);
    Vector C1(za_ze, za_zc, zd);
    
    float beta = determinant(A1, B1, C1)/m;
    
    Vector A2(xa_xb, xa_xe, xd);
    Vector B2(ya_yb, ya_ye, yd);
    Vector C2(za_zb, za_ze, zd);
    
    float gama = determinant(A2, B2, C2)/m;

    Vector A3(xa_xb, xa_xc, xa_xe);
    Vector B3(ya_yb, ya_yc, ya_ye);
    Vector C3(za_zb, za_zc, za_ze);
    
    t = determinant(A3, B3, C3)/m;
    bool success = false;
    
    
    if (beta>0.0 && gama>0 && (beta+gama)<1.0) {
        success = true;
        Intersection intersection(t,success);
        return intersection;
    }
    else
    {
        Intersection intersection(t,success);
        return intersection;
    }
    
    
    
    
}




Vector Triangle::normal(Vector p)
{
    return (b.minus(a)).vector_product(c.minus(a)).normalize();
}







