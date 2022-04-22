#include <iostream>
#include <math.h>

using namespace std;

class Point
{
    int x, y;
    friend float distance(Point, Point);

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    void displayPoint(void)
    {
        cout << "The Point is (" << x << ", " << y << ")" << endl;
    }
};

// Create a function which takes 2 point objects and computes the distance between those points.(HINT: make it a friend function) Formula: d=√((x_2-x_1)²+(y_2-y_1)²)

float distance(Point o1, Point o2)
{
    float d = sqrt(pow(o2.x - o1.x, 2) + pow(o2.y - o1.y, 2));
    return d;
}

int main()
{
    Point p(1, 0);
    p.displayPoint();

    Point q(70, 0);
    q.displayPoint();

    float dis = distance(p, q);
    cout << "The Distance Between p and q points are: " << dis << endl;

    return 0;
}