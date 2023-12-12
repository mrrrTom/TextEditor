#include <wtypes.h>
#include <string>
#include "Point.h"
using namespace std;

#ifndef __WWINDOW_H_INCLUDED
#define __WWINDOW_H_INCLUDED
class WWindow
{
public:
	WWindow(HDC hdc, HWND hwnd) : _hdc{ hdc }, _hwnd{hwnd}
	{
	}
	void DrawRectangle(Point&& lt, Point&& rb);
	void GetWindowSize(Point& lt, Point& rb);
private:
	HDC _hdc;
	HWND _hwnd;
};

#endif // !__WWINDOW_H_INCLUDED

