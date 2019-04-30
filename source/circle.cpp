# include "circle.hpp"
# include  <catch.hpp>
# include "color.hpp"
# include "mat2.hpp"

Circle::Circle() {
    r_ = 1;
}

Circle::Circle(Vec2 const& mid, float r, Color const& c) {
    mid_ = mid;
    r_ = r;
    c_ = c;
}

float const Circle::circumference() {
    return 2 * M_PI * r_; 
}

void const Circle::draw(Window& w) {
    int divisor = 21;
    double phi = 2*M_PI/double(divisor);
    Vec2 ring_point{r_,0};
    Mat2 phi_rotation = make_rotation_mat2(phi);
    for (int i = 0; i < divisor; ++i) {
        Vec2 first_point = mid_ + ring_point;
        ring_point = ring_point * phi_rotation;
        Vec2 last_point = mid_ + ring_point;
        w.draw_line(first_point.x,first_point.y,last_point.x,last_point.y,c_.r,c_.g,c_.b);
    }
}