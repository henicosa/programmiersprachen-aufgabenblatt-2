# ifndef CIRCLE_HPP
# define CIRCLE_HPP

# include "vec2.hpp"
# include "mat2.hpp"
# include "color.hpp"
# include "window.hpp"

class Circle
{
public:
    Circle();
    Circle(Vec2 const& mid, float r, Color const& c);
    float const circumference();
    void const draw(Window& w, bool highlight = false, int divisor = 21);
    bool is_inside(const Vec2& point);
private:
    Vec2 mid_;//vector to the circles middle
    float r_; //radius
    Color c_; //color  
    Color higlight_color_; 
};

# endif //circle.hpp