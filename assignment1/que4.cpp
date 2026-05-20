#include <iostream>
using namespace std;

float Add(int a, int b, int c, float d) 
{
	return a + b + c + d;
}

float Add(int a, int b, float c, float d)
{
	return a + b + c + d;
}

float Add(int a, float b, float c, float d)
{
	return a + b + c + d;
}

float Add(int a, int b, int c, int d)
{
	return a + b + c + d;
}

float Add(float a, float b, float, float d) 
{
	return a + b + c + d;
}

int main
{
	cout << "3 int, 1 float: " << Add(10, 10, 10, 2.5f) << "\n";
    cout << "2 int, 2 float: " << Add(10, 10, 2.5f, 2.5f) << "\n";
    cout << "1 int, 3 float: " << Add(10, 2.5f, 2.5f, 2.5f) << "\n";
    cout << "4 int:          " << Add(10, 10, 10, 10) << "\n";
    cout << "4 float:        " << Add(2.5f, 2.5f, 2.5f, 2.5f) << "\n";

    return 0;
}
