#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0, 0, 0);
    circle.setup(ofGetWidth()/2, ofGetHeight()/2);
    

    sound.loadSound("Meditation.mp3");
    sound.setVolume(0.75f);

    

}

//--------------------------------------------------------------
void ofApp::update(){
    circle.update();
    
    ofSoundUpdate();


}

//--------------------------------------------------------------
void ofApp::draw(){
    
    circle.draw();
    
    branch.sphere();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == '1'){
          sound.play ();
    }
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}
