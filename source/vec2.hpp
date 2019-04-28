# ifndef VEC2_HPP
# define VEC2_HPP
// Vec2 data type definition
struct Vec2
{
/* TODO add member variables with
default member initialisation*/
double x = 0.0f;
double y = 0.0f;

//bool operator==(Vec2 const& v );
Vec2& operator+=(Vec2 const& v );
Vec2& operator-=(Vec2 const& v );
Vec2& operator*=(float s );
Vec2& operator/=(float s );
};

Vec2 operator+(Vec2 const& u ,Vec2 const& v);
Vec2 operator-(Vec2 const& u ,Vec2 const& v);
Vec2 operator*(Vec2 const& v ,float s);
Vec2 operator/(Vec2 const& v ,float s);
Vec2 operator*(float s ,Vec2 const& v);
bool operator==(Vec2 const& lhs,  Vec2 const& rhs);
# endif // VEC2_HPP