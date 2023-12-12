#include "Formatter.h"
#ifndef __SIMPLE_LINE_FORMATTER_H_INCLUDED
#define __SIMPLE_LINE_FORMATTER_H_INCLUDED
class SimpleLineFormatter :
    public Formatter
{
public:
    void Format(Document& d);
};

#endif // !__SIMPLE_LINE_FORMATTER_H_INCLUDED


