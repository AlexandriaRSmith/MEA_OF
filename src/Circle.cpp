//
//  Circle.cpp
//  MEA_OF2
//
//  Created by Alexandria Smith on 3/2/16.
//
//

#include "Circle.hpp"
#include "ofMain.h"



Circle::Circle() {
    
    
}



void Circle::setup(float _x, float _y) {
    counter = 0;
    ofSetCircleResolution(50);
    //    ofBackground(255,255,255);
    bSmooth = false;
    ofSetFrameRate(60);
    xPos = _x;
    yPos = _y;
    
    
}
void Circle::keyPressed(int key){
    if (key == '1'){

    }
    
}

void Circle::draw() {
    ofSetColor(130, 70, 190, 80);
    float radius = 80 +50 * sin(counter);
    ofFill();
    ofCircle(ofGetWidth()/2, ofGetHeight()/2, radius);
    
    ofSetColor(130, 170, 40, 80);
    ofNoFill();
    ofCircle(ofGetWidth()/2, ofGetHeight()/2, 80);
    
    
}


void Circle::update() {
    counter = counter + 0.02f;
}
