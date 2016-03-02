//
//  Circle.hpp
//  MEA_OF
//
//  Created by Miyeon Kim2 on 3/1/16.
//
//

#ifndef Circle_hpp
#define Circle_hpp

#include "ofMain.h"
#include <stdio.h>

#endif /* Circle_hpp */

class Circle {
public:
    
    float counter;
    bool bSmooth;
    int xPos, yPos;
    
    
    Circle();
    
    
    void setup(float _x, float _y);
    void update();
    void draw();
};