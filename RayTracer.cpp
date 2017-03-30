//
//  RayTracer.cpp
//  RayTracing
//
//  Created by Vinze Gonzales on 3/30/17.
//  Copyright © 2017 Vinze. All rights reserved.
//

#include "RayTracer.hpp"

RayTracer::RayTracer(int width, int height)
{
    nx = width;
    ny = height;
    
    Vector light_position(0.0,0.0,200.0);
    RGB light_color(0.8,0.7,0.6);
    Light light(light_position,light_color);
    this->light = light;
    
    Vector e(278,273,-800);
    Vector center(278,273,-700);
    Vector up(0,1,0);
    float fov = 39.31;
    float df = 0.035;
    
    Camera camera(e,center,up,fov,df);
    cam = camera;
    
    
    Vector position(370,120,370);
    float radius = 120;
    RGB sphere_color(1.0,0.0,1.0);
    
    
    Vector a(522,8,0);
    Vector b(0,0,0);
    Vector c(0,0,560);
    RGB triangle_color(1.0,1.0,0.0);
    
    
    
    Sphere sphere(position,radius,sphere_color);
    Triangle tringle(a,b,c,triangle_color);
    
    spheric_objects[0] = sphere; tam_s++;
    triangle_objects[0] = tringle; tam_t++;
}

RayTracer::~RayTracer()
{
    
}


RGB RayTracer::calculatePixel(int i, int j)
{
    Vector e = cam.get_e();
    Vector dir = cam.ray_direction(i, j, nx, ny);
    Ray ray(e,dir);
    float t = numeric_limits<float>::infinity();
    
    RGB color(0.0,0.0,0.0);
    
    Sphere* obj_s = NULL;
    
    for (int obj=0; obj<tam_s; obj++) {
        Intersection intersection = spheric_objects[obj].isIntersection(ray, t);
        if (intersection.isSuccess()) {
            *obj_s = spheric_objects[obj];
        }
    }
    
    if (obj_s == NULL) {
        RGB color(0.0,0.0,0.0);
    }
    else
    {
        RGB color;
        color = obj_s[0].getColor();
    }
    
    return color;
}
