#include <iostream>

using namespace std;

class FIGURE {
public:
    virtual void draw() = 0;
    virtual ~FIGURE() {}
};

class CLOSE : public FIGURE {
public:
    void draw() override {}
    virtual ~CLOSE() {}
};

class OPEN : public FIGURE {
public:
    void draw() override {}
    virtual ~OPEN() {}
};

class POLYGON : public CLOSE {
public:
    void draw() override {}
    virtual ~POLYGON() {}
};

class ELLIPSE : public CLOSE {
public:
    void draw() override {}
    virtual ~ELLIPSE() {}
};

class LINE : public OPEN {
public:
    void draw() override {}
    virtual ~LINE() {}
};

class POLYLINE : public OPEN {
public:
    void draw() override {}
    virtual ~POLYLINE() {}
};

int main() {
    FIGURE* figure;

    figure = new POLYGON();
    figure->draw();
    delete figure;

    figure = new ELLIPSE();
    figure->draw();
    delete figure;

    figure = new LINE();
    figure->draw();
    delete figure;

    figure = new POLYLINE();
    figure->draw();
    delete figure;

    return 0;
}
