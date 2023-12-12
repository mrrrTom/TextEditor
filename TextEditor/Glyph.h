#pragma once
#include "WWindow.h"
#include "Point.h"
#include <vector>
using namespace std;

#ifndef __GLYPH_H_INCLUDED
#define __GLYPH_H_INCLUDED
class Glyph {
public:
	virtual void Draw(WWindow& ww) = 0;
	virtual void Bounds(Point& lt, Point& rb) = 0;
	virtual void Intersects(const Point& p) = 0;
	virtual void Insert(Glyph* g, int i) = 0;
	virtual void Remove(Glyph* g) = 0;
	virtual vector<Glyph*> GetChildren() { return vector<Glyph*>(); }
	virtual Glyph* GetParent() = 0;
};
#endif // !__GLYPH_H_INCLUDED
