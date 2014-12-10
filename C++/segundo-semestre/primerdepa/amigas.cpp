#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

class vector{
    private:
    float x, y;
    
    public:
    vector(float, float);
    vector(const vector&);
    friend float magnitud(vector);
    };
    
    vector::vector(float a = 0, float b = 0){
    x = a;
    y = b;
    cout << "constructor general\n";
    }
    vector::vector(const vector &A){
    cout << "constructor copia\n";
    x = A.x;
    y = A.y;
    }

float magnitur(vector V){
    return (sqrt(pow(V.x,2)+pow(V.y,2)));
    }
    
main()
{
    vector A(5,2);
    cout << "magnitur: " << magnitud(A);
}
