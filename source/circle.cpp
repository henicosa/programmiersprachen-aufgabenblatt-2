# include "circle.hpp"
# include  <catch.hpp>

Circle::Circle() {
    mid_ = Vec2{0,0};
    r_ = 1;
};

Circle::Circle(Vec2 const& mid, float r) {
    mid_ = mid;
    r_ = r;
};

float const Circle::circumference() {
    return 2 * M_PI * r_; 
};