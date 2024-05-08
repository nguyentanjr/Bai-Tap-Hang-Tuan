#include<bits/stdc++.h>
using namespace std;
struct Point
{
    int x, y;
    Point midPoint(Point a1, Point a2) const
    {
        Point a;
        a.x = (a1.x + a2.x)/2;
        a.y = (a1.y + a2.y)/2;
        return a;
    }
};

struct Rect
{
    float x,y,w,h;
    bool contain(Point a)
    {
        if(a.x >= x && a.x <= a.x + w && a.y <= y && y <= a.y + h)
        {
            return true;
        }
        return true;
    }
};

struct Ship
{
    Rect ship;
    string id;
    float dx,dy;
    void move(Rect &ship){
        ship.x += dx;
        ship.y += dy;
    }
};

void display(const Ship& ship) {
    cout << ship.id << " " << ship.ship.x << " " << ship.ship.y;
}
