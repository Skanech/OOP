#include <iostream>
using namespace std;
class Circle
{
private:    //поля: радиус, x и y
    int radius;
    int x;
    int y;
public:     //конструкторы
    Circle() {radius = 0; x = 0; y = 0;}
    Circle(int Radius, int X, int Y) {radius = Radius; x = X; y = Y;}

    Circle operator+(Circle C)
    {
        Circle Res;
        Res.radius = radius+ C.radius;
        Res.x = x+ C.x;
        Res.y = y+ C.y;
        return Res;
    }
    Circle operator*(Circle C)
    {
        Circle Res;
        Res.radius = radius* C.radius;
        Res.x = x* C.x;
        Res.y = y* C.y;
        return Res;
    }
    void print()
    {
        cout << "Radius = " << radius << endl;
        cout << "x = " << x << endl;
        cout << "y = " << y;
    }
};

int main()
{
    int c;
    cin>>c;
    Circle C1(5, 2, 2);
    Circle C2(1, -1, -1);
    Circle C3(c, 0, 0);
    Circle C4 = C1*C2;
    Circle C = C4+C3;
    C.print();
    return 0;
}