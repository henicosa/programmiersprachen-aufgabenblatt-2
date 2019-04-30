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
    void const draw(Window& w);
private:
    Vec2 mid_;
    float r_;
    Color c_;    
};

# endif //circle.hpp