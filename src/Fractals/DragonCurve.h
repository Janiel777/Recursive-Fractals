#pragma once

#include "ofMain.h"
#include "Fractal.h"

class DragonCurve : public Fractal  {
public:
    DragonCurve();
    void draw();

private:
    void generateCurve(int order, ofVec2f start, ofVec2f end);
    void addCurvePoint(ofVec2f point1, ofVec2f point2);
    void drawLine(ofVec2f start, ofVec2f end);
    void setN(int n);
    std::vector<ofVec2f> curvePoints;
    float size;
};