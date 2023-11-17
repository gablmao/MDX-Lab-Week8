#ifndef _SHAPES_H_
#define _SHAPES_H_

#include <string>

class Shape {
  std::string name;
public:
  Shape(std::string name);
  virtual ~Shape();
  std::string description();
  virtual double area() = 0;
};

class Square : public Shape {
 private:
  double width;
 public:
  Square(double width);
  double area();
};


/*
>lines 6-13 declares a class called Shapes
  > virtual keyword means that when declaring functions with virtual,
  the function in the main class can be overridden by other declared
  classed.
  > this is done by using pointers  

  >line 9 declares the "layout" to when creating objects
  >line 11 creates a function meant to output a String-data-type value
  >line 12 creates a function meant to output a double-data-type value

>lines 15-21 declares a child class called Square
  >it takes in attributes from the parent class Shape
  >it also has it's own unique attributes:
    >variable width
    >function area()
*/

/* ----- FIRST TASK STARTS HERE -----
create derived classes Circle and Rectangle, matching the UML diagram 
(see week8 lab file in Moodle) */

class Circle : public Shape {
  private:
    double radius;
  public:
    Circle(double radius);
    double area();
};

class Rectangle : public Shape {
  private:
    double width;
    double height;
  public:
    Rectangle(double width, double height); 
    double area();
};




#endif