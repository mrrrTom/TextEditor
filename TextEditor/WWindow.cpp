#pragma once
#include "WWindow.h"
#include <tchar.h>
#include <string>
using namespace std;

void WWindow::GetWindowSize(Point& lt, Point& rb) {
    tagRECT trect;
    GetWindowRect(_hwnd, &trect);
    Point lt{ 0,0 };
    Point rt{ 0,0 };
}

void WWindow::DrawRectangle(Point&& lt, Point&& rb) {
    //ToDo нужна ли тут мув семантика
    //ToDo рисуй прямоугольник https://learn.microsoft.com/en-us/windows/win32/api/wingdi/nf-wingdi-rectangle
}
