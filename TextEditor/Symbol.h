#include "Glyph.h"
#ifndef __SYMBOL_H_INCLUDED
#define __SYMBOL_H_INCLUDED
class Symbol : public Glyph {
	void Draw(WWindow& w) override;
	void Bounds(Point& a, Point& b) override;
	void Intersects(const Point& p) override;
	void Insert(Glyph* g, int i) override;
	void Remove(Glyph* g) override;
	Glyph* GetParent() override;
};
#endif // !__SYMBOL_H_INCLUDED
