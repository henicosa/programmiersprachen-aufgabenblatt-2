# include "circle.hpp"
# include  <catch.hpp>
# include "color.hpp"

Circle::Circle() {
    r_ = 1;
};

Circle::Circle(Vec2 const& mid, float r, Color const& c) {
    mid_ = mid;
    r_ = r;
    c_ = c;
};

float const Circle::circumference() {
    return 2 * M_PI * r_; 
};