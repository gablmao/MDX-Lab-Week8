#include "shapes.h"

Shape::Shape(std::string name)
{
  this->name = name;
}

Shape::~Shape()
{
}

std::string Shape::description()
{
  return name + " has area: " + std::to_string(area());
}

Square::Square(double width) : Shape("Square")
{
  this->width = width;
}

double Square::area()
{
  return width * width;
}
