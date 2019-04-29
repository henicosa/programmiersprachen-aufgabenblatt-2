# include "rectangle.hpp"

Rectangle::Rectangle() {
    min_ = Vec2{0,0};
    max_ = Vec2{1,1};
};

Rectangle::Rectangle(Vec2 const& min, Vec2 const& max) {
    min_ = min;
    max_ = max;
};