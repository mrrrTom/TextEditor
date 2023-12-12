#include "Glyph.h";
#include "CompositeGlyph.h"

#ifndef __PAGE_H_INCLUDED
#define __PAGE_H_INCLUDED
class Page : public CompositeGlyph
{

public:
	void Draw(WWindow& w) override;
	void Bounds(Point& lt, Point& rb) override;
	void Intersects(const Point& p) override;
	void Insert(Glyph* g, int i) override;
	void Remove(Glyph* g) override;
	Glyph* GetParent() override;
};

#endif // !__PAGE_H_INCLUDED

