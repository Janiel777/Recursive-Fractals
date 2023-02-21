#include "Tree.h"

Tree::Tree() : Fractal("Tree", ofGetWidth() / 2, ofGetHeight() / 2, 10){
    this->len = 120;
    this->angle = 15;
}
void Tree::draw(){
    ofPushMatrix();
    ofTranslate(x, y);
    helperDraw(len, angle, n);
    ofPopMatrix();
}
void Tree::helperDraw(float len, float angle, int n){
    ofDrawLine(0, 0, 0, -len);
    ofTranslate(0, -len);
    if(n >= 1){
        ofPushMatrix();
        ofRotate(angle);
        helperDraw(len * 0.67, angle, n-1);
        ofPopMatrix();
        ofPushMatrix();
        ofRotate(-angle);
        helperDraw(len * 0.67, angle, n-1);
        ofPopMatrix();
    }
}