#include "Color.h"

Color::Color(unsigned char red, unsigned char green, unsigned char blue):_red(red), _green(green), _blue(blue){}

Color::Color(const Color& b):_red(b.red()), _green(b.green()), _blue(b.blue()){}

const Color Color::RED(255,0,0);

const Color Color::GREEN(0,255,0);

const Color Color::BLUE(0,0,255);

const Color Color::BLACK(0,0,0);

const Color Color::WHITE(255,255,255);

unsigned char Color::red() const{
    return _red;
}

unsigned char Color::green() const{
    return _green;
}

unsigned char Color::blue() const{
    return _blue;
}

bool Color::equal_to(const Color& other) const{
    return (_red==other._red && _green==other._green && _blue==other._blue);
}

void Color::invert(){
    _red=255-_red;
    _green=255-_green;
    _blue=255-_blue;
}