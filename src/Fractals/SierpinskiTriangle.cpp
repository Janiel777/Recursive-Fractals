#pragma once
#include "SierpinskiTriangle.h"

SierpinskiTriangle::SierpinskiTriangle() : Fractal("Sierpinski Triangle", ofGetWidth() / 3, 10, 4){
    this->size = ofGetHeight() / 2;
}

void SierpinskiTriangle::draw(){
    return helperDraw(x,y,size,n);
}

void SierpinskiTriangle::helperDraw(float x, float y, float size, int level){
    if(level == 0) {
        return;
    }
    ofPoint a(x, y);
    ofPoint b(x + size, y);
    ofPoint c(x + size / 2, y + ((sqrt(3) * size) / 2));

    ofDrawTriangle(a, b, c);
    
    helperDraw(x, y, size / 2, level - 1);
    helperDraw((a.x + b.x) / 2, (a.y + b.y) / 2, size / 2, level - 1);
    helperDraw((c.x + a.x) / 2, (c.y + a.y) / 2, size / 2, level - 1);

}