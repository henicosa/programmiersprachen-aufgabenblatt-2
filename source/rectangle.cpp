# include "rectangle.hpp"
# include "color.hpp"

Rectangle::Rectangle() {
    min_ = Vec2{0,0};
    max_ = Vec2{1,1};
};

Rectangle::Rectangle(Vec2 const& min, Vec2 const& max, Color const& c) {
    min_ = min;
    max_ = max;
    c_ = c;
    higlight_color_ = Color{1-c.r,1-c.g,1-c.b};
};


void const Rectangle::draw(Window& w, bool highlight) {
    Color c;
    if (highlight) {
        c = higlight_color_;
    } else {
        c = c_;
    }
    Vec2 p_lo{min_.x,max_.y};
    Vec2 p_ru{max_.x,min_.y};
    w.draw_line(min_.x,min_.y,p_lo.x,p_lo.y,c.r,c.g,c.b);
    w.draw_line(min_.x,min_.y,p_ru.x,p_ru.y,c.r,c.g,c.b);
    w.draw_line(max_.x,max_.y,p_lo.x,p_lo.y,c.r,c.g,c.b);
    w.draw_line(max_.x,max_.y,p_ru.x,p_ru.y,c.r,c.g,c.b);
};

float const Rectangle::circumference() {
    return 2*abs(max_.x - min_.x) + 2*abs(max_.y - min_.y);
};