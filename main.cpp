//
//  main.cpp
//  RayTracing
//
//  Created by Vinze Gonzales on 3/29/17.
//  Copyright © 2017 Vinze. All rights reserved.
//

#include <iostream>

#include "Vector.hpp"
#include "Camera.hpp"
#include "Ray.hpp"
#include "RayTracer.hpp"


using namespace std;
int main()
{
//    Vector e(1,2,-6);
//    Vector center(1,2,-4);
//    Vector up(0,1,0);
//    float fov = 39;
//    float df =1;
//    float nx = 640;
//    float ny = 480;
//    
//    Camera camera(e,center,up,fov,df);
//    Vector dir;
//    
//    
//    for (int i = 0; i < nx; i++) {
//        for (int j = 0; j < ny; j++) {
//            dir = camera.ray_direction(i, j, nx, ny);
//            dir.show();
//            cout<<endl;
//        }
//    }

//    RayTracer scene(600,600);
//    for (int i = 0 ; i <600; i++) {
//        for (int j = 0; j<600; j++) {
//            scene.calculatePixel(i, j);
//        }
//    }
    

    RayTracer renderer(640.0,480.0);
//    renderer.render("Raytracing","raytracing.png");
    return 0;
}
