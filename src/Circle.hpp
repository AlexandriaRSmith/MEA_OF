//
//  Circle.hpp
//  MEA_OF2
//
//  Created by Alexandria Smith on 3/2/16.
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
    void keyPressed(int key);
};