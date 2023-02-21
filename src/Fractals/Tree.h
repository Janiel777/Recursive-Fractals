#pragma once
#include "Fractal.h"

class Tree : public Fractal{
    public:
        Tree();
        void draw();
        void helperDraw(float len, float angle, int n);
    private:
        float len, angle;

};