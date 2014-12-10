#include <iostream>
#include <math.h>

using namespace std;

class vector2D{
    protected:
	float x, y;
    public:
	vector2D(float, float);
	float magnitud();
};

vector2D::vector2D(float a = 0, float b = 0){
    x=a;
    y=b;
}

float vector2D::magnitud(){
    return sqrt(x*x+y*y);
}

class vector3D:public vector2D{
	float z;
    public:
vector3D(float, float, float);
    float magnitud();
}

vector3D::vector3D(float a = 0, float b = 0, float c = 0): vector2D(a,b){
    z = c;
}

float vector3D::magnitud(){
    return sqrt(x*x+y*y+z*z);
}

main()
{

    vector2D *apunta;
    vector2D objeto1(5,2);
    vector3D objeto2(8,9,7);
    //apuntador a direccion de objeto 1
    apunta = &objeto1;
	cout << "magnitud1 = " << apunta -> magnitud();
    apunta = &objeto2;
	cout << "magnitud2 = " << apunta -> magnitud();
}
    


    