#include "CompositeGlyph.h"

#ifndef __COLUMN_H_INCLUDED
#define __COLUMN_H_INCLUDED
class Column : public CompositeGlyph
{
	void Draw(WWindow& w) override;
	void Bounds(Point& a, Point& b) override;
	void Intersects(const Point& p) override;
	void Insert(Glyph* g, int i) override;
	void Remove(Glyph* g) override;
	Glyph* GetParent() override;
};
#endif 
