
#include "DragonCurve.h"

DragonCurve::DragonCurve() : Fractal("Dragon curve", ofGetWidth()/2, ofGetHeight()/2, 10){
    size = 300.0;
    ofVec2f start(x, y);
    ofVec2f end(x + size, y);
    generateCurve(n, start, end);
    
}

void DragonCurve::setN(int n){
    this->n = n;
    ofVec2f start(x, y);
    ofVec2f end(x + size, y);
    curvePoints.clear();
    generateCurve(n, start, end);
}

void DragonCurve::draw() {
    ofNoFill();
    ofBeginShape();
    for (auto &point : curvePoints) {
        ofVertex(point);
    }
    ofEndShape();
}

void DragonCurve::generateCurve(int order, ofVec2f start, ofVec2f end) {
    if (order == 0) {
        addCurvePoint(start, end);
        return;
    }

    ofVec2f mid = (start + end) / 2.0;
    ofVec2f diff = end - start;
    ofVec2f perp(diff.y, -diff.x);
    perp.normalize();
    ofVec2f newStart = mid - perp * (diff.length() / 2.0);
    ofVec2f newEnd = mid + perp * (diff.length() / 2.0);

    generateCurve(order - 1, start, newStart);
    addCurvePoint(newStart, newEnd);
    generateCurve(order - 1, newEnd, end);
}

void DragonCurve::addCurvePoint(ofVec2f point1, ofVec2f point2) {
    curvePoints.push_back(point1);
    curvePoints.push_back(point2);
}

void DragonCurve::drawLine(ofVec2f start, ofVec2f end) {
    ofDrawLine(start, end);
}