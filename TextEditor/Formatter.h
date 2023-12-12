#include "Document.h"
#ifndef __FORMATTER_H_INCLUDED
#define __FORMATTER_H_INCLUDED

class Formatter
{
public:
	virtual void Format(Document& d) = 0;
protected:

	//ToDo: Use Move semantics
	void SetPages(Document d, vector<Page> pgs) {
		d.SetPages(pgs);
	}

	string GetRawText(Document d) {
		return d.GetRawString();
	}
};

#endif // !__FORMATTER_H_INCLUDED


