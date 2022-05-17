#ifndef COLOR_H
#define COLOR_H

class Color{
public:
    // constructors
    Color(unsigned char red, unsigned char green, unsigned char blue);
    Color(const Color& b);
    // accessors
    unsigned char red() const;
    unsigned char green() const;
    unsigned char blue() const;

    static const Color RED, GREEN, BLUE, BLACK, WHITE;
    // other member functions
    bool equal_to(const Color& other) const;
    void invert();

private:
    unsigned char _red;
    unsigned char _green;
    unsigned char _blue;
};




#endif