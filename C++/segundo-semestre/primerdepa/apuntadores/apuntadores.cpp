#include <iostream>

using namespace std;

main()
{
    int x, y = 5, z = 10;
    int *ap;
    int *ap1;

    ap = &y;

    std::cout << "ap es: " << ap << '\n';
    std::cout << "*ap es: " << *ap << '\n';

ap1 = &z;
x = *ap;
*ap = *ap1;
*ap1 = x;

std::cout << "X= " << x << '\n';
std::cout << "Y= " << y << '\n';
std::cout << "Z= " << z << '\n';

}