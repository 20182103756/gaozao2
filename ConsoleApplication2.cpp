// ConsoleApplication2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;
class Ctestcopy
{
	int x;
	int y;
public:
	Ctestcopy();
	Ctestcopy(int a, int b);
	Ctestcopy(Ctestcopy&om);
	void setXY(int a, int b);
	void display();
};
Ctestcopy::Ctestcopy()
{

}
Ctestcopy::Ctestcopy(int a, int b)
{
	x = a;
	y = b;
}
Ctestcopy::Ctestcopy(Ctestcopy&om)
{
	x = om.x * 2;
	y = om.y * 2;
	cout << "***********************" << endl;
}
void Ctestcopy::setXY(int a, int b)
{
	x = a;
	y = b;
}
void Ctestcopy::display()
{
	cout << "x=" << x << "y=" << y << endl;
}
void mytest()
{
	Ctestcopy ocpy(20, 30);
	ocpy.display();
}
int main()
{
	Ctestcopy ocpy(500, 800);
	ocpy.display();
	Ctestcopy omyobj(ocpy);
	omyobj.display();
    return 0;
}

