#ifndef COLOR_H
#define COLOR_H
#include <iostream>

class Color{
    public:
    Color(unsigned char red, unsigned char green, unsigned char blue);
    Color(const Color& c);
    unsigned char red() const;
    unsigned char green() const;
    unsigned char blue() const;
    static const Color RED, GREEN, BLUE, BLACK, WHITE;
    bool equal_to(const Color& other) const;
    void invert();

    private:
    unsigned char red_;
    unsigned char green_;
    unsigned char blue_;
};

#endif