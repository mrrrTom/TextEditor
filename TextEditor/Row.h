#include "CompositeGlyph.h"

#ifndef __ROW_H_INCLUDED
#define __ROW_H_INCLUDED
class Row : public CompositeGlyph {
	void Draw(WWindow& w) override;
	void Bounds(Point& a, Point& b) override;
	void Intersects(const Point& p) override;
	void Insert(Glyph* g, int i) override;
	void Remove(Glyph* g) override;
	Glyph* GetParent() override;
};
#endif // !__ROW_H_INCLUDED
