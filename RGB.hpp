//
//  RGB.hpp
//  RayTracing
//
//  Created by Vinze Gonzales on 3/29/17.
//  Copyright © 2017 Vinze. All rights reserved.
//

#ifndef RGB_hpp
#define RGB_hpp

class RGB{
public:
    RGB(float,float,float);
    RGB();
    ~RGB();
    float getRed(){return red;}
    float getGreen(){return green;}
    float getBlue(){return blue;}
private:
    float red, green, blue;
};

#endif /* RGB_hpp */
