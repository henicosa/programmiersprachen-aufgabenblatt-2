#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "vec2.hpp"

TEST_CASE("vec2", "[vec2]" ) 
{
Vec2 v1{5,3};
REQUIRE (5 == v1.x); 
REQUIRE (3 == v1.y);
Vec2 v2;
REQUIRE (0 == v2.x); 
REQUIRE (0 == v2.y);
Vec2 v3{5,3.0};
REQUIRE (5 == v1.x); 
REQUIRE (3 == v1.y);

REQUIRE (v1 == v3);
}

TEST_CASE("vec_op", "[vec_op]" ) 
{
Vec2 v1{5,3}; 
Vec2 v2{1,-3};
Vec2 sol{6,0};
REQUIRE ((v1+=v2)== sol); 

v1 = Vec2{5,3}; 
v2 = Vec2{-1,3};
sol = Vec2{6,0};
REQUIRE ((v1-=v2)== sol); 

v1 = Vec2{5,3}; 
double s = 1.5;
sol = Vec2{7.5,4.5};
REQUIRE ((v1*=s)== sol); 

v1 = Vec2{5,3}; 
s = 0;
sol = Vec2{0,0};
//REQUIRE ((v1/=s)== sol); 

v1 = Vec2{5,3}; 
s = 5;
sol = Vec2{1,3/5};
//REQUIRE ((v1/=s)== sol); 
}

int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
