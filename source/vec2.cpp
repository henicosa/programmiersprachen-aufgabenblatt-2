#include "vec2.hpp"
#include <iostream>
//#include <limits>
/*
bool Vec2::operator==(Vec2 const& v2) {
    if (x == v2.x and y == v2.y) {
        return true;
    } else {
        return false;
    }
}
*/

Vec2& Vec2::operator+=(Vec2 const& v) {
    x += v.x;
    y += v.y;
    return *this;
}


Vec2& Vec2::operator*=(float s) {
    x *= s;
    y *= s;
    return *this;
}

Vec2& Vec2::operator/=(float s) {
    if(s == 0) {
        std::cout << "Division by 0 not defined.";
        Vec2 v{0,0};
        return v;
    }
    x = x/s;
    y = y/s;
    return *this;
}


Vec2& Vec2::operator-=(Vec2 const& v) {
    x -= v.x;
    y -= v.y;
    return *this;
}

bool operator==(Vec2 const& lhs,  Vec2 const& rhs) {
    //if (Approx(lhs.x) == Approx(rhs.x) and Approx(lhs.y) == Approx(rhs.y)) {
    if (lhs.x == rhs.x and lhs.y == rhs.y) {
        return true;
    } else {
        return false;
    }
}