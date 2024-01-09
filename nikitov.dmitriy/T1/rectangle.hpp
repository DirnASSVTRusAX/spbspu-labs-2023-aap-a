#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "shape.hpp"

namespace nikitov
{
  class Rectangle: public Shape
  {
  public:
    Rectangle(point_t& leftCorner, point_t& rightCorner);
    virtual ~Rectangle();
    virtual double getArea() const;
    virtual rectangle_t getFrameRect() const;
    virtual void move(const point_t& point);
    virtual void move(double dx, double dy);
    virtual void scale(double ratio);
  private:
    point_t leftCorner_;
    point_t rightCorner_;
  };
}
#endif