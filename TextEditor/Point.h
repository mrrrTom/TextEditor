#ifndef __POINT_H_INCLUDED
#define __POINT_H_INCLUDED
class Point
{
public:
	Point() = default;
	Point(float x, float y) : _x{x}, _y{y}
	{
	}
	float GetX() { return _x; }
	float GetY() { return _y; }
private:
	float _x;
	float _y;
};
#endif // !__POINT_H_INCLUDED


