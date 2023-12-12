
#include "Glyph.h"
#include "Page.h"

#ifndef __DOCUMENT_H_INCLUDED
#define __DOCUMENT_H_INCLUDED
class Formatter;
class Document :
	public Glyph
{
#pragma region Glyph impl
	void Draw(WWindow& ww);
	void Bounds(Point& lt, Point& rb);
	void Intersects(const Point& p);
	void Insert(Glyph* g, int i);
	void Remove(Glyph* g);
	vector<Glyph*> GetChildren() { return vector<Glyph*>(); }
	Glyph* GetParent();
#pragma endregion
	void SetText();
	void SetFormatter(Formatter& f);
	bool Format();
	friend class Formatter;
private:
	string GetRawString();
	void SetPages(vector<Page> pgs);
};

#endif // !__DOCUMENT_H_INCLUDED