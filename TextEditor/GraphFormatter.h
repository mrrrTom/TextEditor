#include "Formatter.h"
#ifndef __Graph_Formatter_H_INCLUDED
#define __Graph_Formatter_H_INCLUDED
class GraphFormatter :
    public Formatter
{
public:
    void Format(Document& d);
};
#endif // !__Graph_Formatter_H_INCLUDED