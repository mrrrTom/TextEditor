#include "Glyph.h"

#ifndef __COMPOSITE_GLYPH_H_INCLUDED
#define __COMPOSITE_GLYPH_H_INCLUDED
class CompositeGlyph : public Glyph
{
public:
	vector<Glyph*> GetChildren() override;
private:
	vector<Glyph*> _childrenList;
};
#endif // !__COMPOSITE_GLYPH_H_INCLUDED

