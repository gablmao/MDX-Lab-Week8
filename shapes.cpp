#include <iostream>
#include "shapes.h"
#define _USE_MATH_DEFINES
#include <math.h>
#include <vector>

using namespace std;


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

/*
>line 1 links this .cpp file to the header file (shapes.h) which
contains the Shape class and other derived classes

>lines 3-10 brings the Shape class to here
>lines 12-15 gives the description function some code. this function was
just initially declared in the Shape class

>lines 17-20 creates a child class Square, deriving from 
the parent class, Shape. It also gives the derived class a name
or identifier, "Square".
*/



/* ----- FIRST TASK STARTS HERE -----
create derived classes Circle and Rectangle, matching the UML diagram 
(see week8 lab file in Moodle) */

Circle::Circle(double radius) : Shape("Circle") {
  this->radius = radius;
}

double Circle::area() {
  return M_PI * (radius*radius);
}

Rectangle::Rectangle(double width, double height) : Shape("Rectangle") {
  this->width = width;
  this->height = height;
}

double Rectangle::area() {
  return width*height;
}


/* ----- TASK 1.5 START HERE -----
using std::vector, hold pointers to Shape, Square, Circle and Rectangle.
then, loop through the vector to print the description of each shape. */

int main() {
  //create vector with pointer to class Shape
  // vector is called "shapes", has pointer pointing to "Shape"
  vector<Shape*> shapes;

  //put the descriptions of derived classes into vector
  /*
  using vector's push_back puts items into vector to next free space.
  to call or create objects from the derived classes, 
  write "(new className(parameter))".
  */
  shapes.push_back(new Square(5));
  shapes.push_back(new Circle(5));
  shapes.push_back(new Rectangle(5, 5));

  //use a loop to print out the contents in the vector
  for (int i=0; shapes.size(); i++){
    cout << shapes[i]->description() << endl;
  }
}
