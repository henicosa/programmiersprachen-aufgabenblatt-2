# ifndef CIRCLE_HPP
# define CIRCLE_HPP

# include "vec2.hpp"
# include "mat2.hpp"

class Circle
{
public:
    Circle();
    Circle(Vec2 const& mid, float r);
private:
    Vec2 mid_;
    float r_;    
};

# endif //circle.hpp