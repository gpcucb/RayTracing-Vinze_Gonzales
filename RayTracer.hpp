//
//  RayTracer.hpp
//  RayTracing
//
//  Created by Vinze Gonzales on 3/30/17.
//  Copyright © 2017 Vinze. All rights reserved.
//

#ifndef RayTracer_hpp
#define RayTracer_hpp

#include "Renderer.hpp"
#include "Camera.hpp"
#include "Sphere.hpp"
#include "Triangle.hpp"
#include "Light.hpp"

class RayTracer {
    
 
    public:
        RayTracer(int,int);
        ~RayTracer();
        RGB calculatePixel(int,int);
        
    private:
        Camera cam;
        Sphere spheric_objects[10];
        int tam_s, tam_t;
        Triangle triangle_objects[10];
        int nx, ny;
        Light light;
 

};


#endif /* RayTracer_hpp */
