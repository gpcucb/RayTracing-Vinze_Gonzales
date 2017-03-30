//
//  Renderer.hpp
//  RayTracing
//
//  Created by Vinze Gonzales on 3/30/17.
//  Copyright © 2017 Vinze. All rights reserved.
//

#ifndef Renderer_hpp
#define Renderer_hpp

#include <iostream>
#include <cstdlib>
#include <string>
#include <GLUT/GLUT.h>
#include <OpenGL/OpenGL.h>
#include "RGB.hpp"

using namespace std;

class Renderer
{
public:
    Renderer(int width, int height, double backRed, double backGreen, double backBlue);
    ~Renderer();
    
    void reset();
    void initGL();
    void drawScene();
    void reshape();
    void idle();
    void saveImage();
    void render(string title, string filename);
    void reshape(int width, int height);
    
    virtual void keyboard(int key, int x, int y);
    virtual RGB calculatePixel(int i, int j);
private:
    RGB backgroundColor;
    RGB **buffer;
    bool isDrawing;
    int x, y;
    int window;
protected:
    int width;
    int height;
};

#endif /* Renderer_hpp */
