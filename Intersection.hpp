//
//  Intersection.hpp
//  RayTracing
//
//  Created by Vinze Gonzales on 3/29/17.
//  Copyright © 2017 Vinze. All rights reserved.
//

#ifndef Intersection_hpp
#define Intersection_hpp

class Intersection
{
public:
    Intersection(float,bool);
    ~Intersection();
    bool isSuccess(){return success;}
private:
    float distance;
    bool success;
};

#endif /* Intersection_hpp */
