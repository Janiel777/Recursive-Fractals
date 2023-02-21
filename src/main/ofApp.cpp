#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofNoFill();
    st = new SierpinskiTriangle();
    t = new Tree();
    dc = new DragonCurve();
    fractals.push_back(st);
    fractals.push_back(t);
    fractals.push_back(dc);
}


//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    fractals[currentFractal]->draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key >= '1' and key <= '3'){
        currentFractal = '3' - key;
    }
    if(key == '-'){
        for(Fractal* f: fractals){
            if(f->getN() > 0) f->setN(f->getN() - 1);
        }
    }
    if(key == '='){
        for(Fractal* f: fractals){
            if(f->getN() < 9) f->setN(f->getN() + 1);
        }
    }
}       

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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