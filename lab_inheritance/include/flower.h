/**
 * Copyright 2011 University of Illinois at Urbana-Champaign
 * CS 225 Lab 04 C++ Object Oriented Programming
 * Authors:
 *   Simon Krueger <skruege2@illinois.edu>
 */

#ifndef FLOWER_H_
#define FLOWER_H_

#include "rectangle.h"
#include "circle.h"
#include "triangle.h"

class Flower : public Drawable
{
  private:
	
	Shape* stem;
	Shape* pistil;
	Shape* leaf;

    void drawPetals(epng::png& canvas, const Vector2& center, int x,
                    int y) const;

  public:
    Flower(const Vector2& center);
	~Flower();
	int area() const;
	int perimeter() const;
    void draw(epng::png& canvas) const override;
};

#endif // FLOWER_H_
