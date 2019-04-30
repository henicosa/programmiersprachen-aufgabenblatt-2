# ifndef RECTANGLE_HPP
# define RECTANGLE_HPP

# include "vec2.hpp"
# include "mat2.hpp"
# include "color.hpp"
# include "window.hpp"

class Rectangle
{
public:
    Rectangle();
    Rectangle(Vec2 const& min, Vec2 const& max, Color const& c);
    float const circumference();
    void const draw(Window& w);
private:
    Vec2 min_;
    Vec2 max_;
    Color c_;   
};

# endif //color.hpp