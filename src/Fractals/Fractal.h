#pragma once
#include "ofMain.h"

class Fractal{
    public:
        Fractal(string name, int x, int y, int n);
        int getN(){return n;}
        virtual void setN(int n){this->n = n;}
        bool isActivated(){return activated;}
        void setActivated(bool b){activated = b; }
        virtual void draw() = 0;
    protected:
        int n, x, y;
        bool activated;
        string name;
};