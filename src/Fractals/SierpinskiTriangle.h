#pragma once
#include "Fractal.h"

class SierpinskiTriangle : public Fractal{
    public:
        SierpinskiTriangle();
        void draw();
        void helperDraw(float x, float y, float size, int n);
    private:
        float size;
};