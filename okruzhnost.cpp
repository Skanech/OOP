//Вариант 20 Третьяков Виталий КМБО-06-20
//Окружность (радиус и 2 координаты)
//Операция сложения с вещественным числом – увеличение радиуса на это значение, унарная операция – изменение знаков координат

#include <iostream>
using namespace std;

class Circle  //создаем класс Окружность
{
private:    //добавляем переменные для класса: радиус, x и y
    double radius;
    double x;
    double y;
public:     //конструкторы
    Circle() {radius = 0; x = 0; y = 0;}
    Circle(double Radius, double X, double Y) {radius = Radius; x = X; y = Y;}

    friend Circle operator+(Circle C,int p)  //создаем оператор сложения для увеличения радиуса
    {
        Circle Res;
        Res.radius = p+ C.radius;
        Res.x = C.x;
        Res.y = C.y;
        return Res;
    }
    friend Circle operator-(Circle C)  //создаем оператор - для смены знака x и y
    {
        Circle Res;
        Res.radius = C.radius;
        Res.x = (-1) * C.x;
        Res.y = (-1) * C.y;
        return Res;
    }
    void print()  // создаем воид для вывода значений
    {
        cout << endl << "OKPYJILHOCTb" << endl;
        cout << "Radius = " << radius << endl;
        cout << "x = " << x << endl;
        cout << "y = " << y;
    }
};

int main()  //главная функция
{
    double r,x,y,p;  //создаем второстепенные переменные, для возможности ввода пользователя своих значений
    cout<<"Enter radius = "; cin>>r;  //ввод радиуса
    cout<<"Enter x = "; cin>>x;       //ввод координаты x
    cout<<"and y = "; cin>>y;         //ввод координаты y
    cout<<"Enter p = "; cin>>p;       //ввод переменной p, далее r=r+p
    Circle C1 (r,x,y);                //создаем окружность
    Circle C = -C1+p;                 //проводим операции
    C.print();                        //вывод C
    return 0;
}
