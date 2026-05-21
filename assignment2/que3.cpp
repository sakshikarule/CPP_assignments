/*Q3 :Write a class of  cylinder using following members

Data members:
	height,radius,volume
member function:
cylinder()
cylinder(height,radius)
setHeight(int h)
setRadius(int r)
getHeight()
getRadius()
CalculateVolume();
getVolume()*/


#include <iostream>
using namespace std;

class Cylinder
{
private:
    int height;
    int radius;
    float volume;

public:
    // Default Constructor
    Cylinder()
    {
        height = 0;
        radius = 0;
        volume = 0;
    }

    // Parameterized Constructor
    Cylinder(int h, int r)
    {
        height = h;
        radius = r;
        volume = 0;
    }

    // Setter functions
    void setHeight(int h)
    {
        height = h;
    }

    void setRadius(int r)
    {
        radius = r;
    }

    // Getter functions
    int getHeight()
    {
        return height;
    }

    int getRadius()
    {
        return radius;
    }

    // Calculate Volume
    void CalculateVolume()
    {
        volume = 3.14 * radius * radius * height;
    }

    // Get Volume
    float getVolume()
    {
        return volume;
    }
};

int main()
{
    Cylinder c1;

    c1.setHeight(10);
    c1.setRadius(5);

    c1.CalculateVolume();

    cout << "Height : " << c1.getHeight() << endl;
    cout << "Radius : " << c1.getRadius() << endl;
    cout << "Volume : " << c1.getVolume() << endl;

    // Using Parameterized Constructor
    Cylinder c2(7, 3);

    c2.CalculateVolume();

    cout << "\nSecond Cylinder Details:" << endl;
    cout << "Height : " << c2.getHeight() << endl;
    cout << "Radius : " << c2.getRadius() << endl;
    cout << "Volume : " << c2.getVolume() << endl;

    return 0;
}
