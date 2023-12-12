#include "Document.h"

void Document::Draw(WWindow& ww)
{
	Point lt, rb;
	ww.GetWindowSize(lt, rb);
	ww.DrawRectangle(move(lt), move(rb));
}

void Document::Bounds(Point& lt, Point& rb)
{
}

void Document::Intersects(const Point& p)
{
}

void Document::Insert(Glyph* g, int i)
{
}

void Document::Remove(Glyph* g)
{
}

Glyph* Document::GetParent()
{
	return nullptr;
}

void Document::SetText()
{
}

void Document::SetFormatter(Formatter& f)
{
}

bool Document::Format()
{
	return false;
}

string Document::GetRawString()
{
	return nullptr;
}

void Document::SetPages(vector<Page> pgs)
{
}
