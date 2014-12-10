#include <iostream.h>
#include <conio.h>
#define	PI	3.1415

main()
{

int radio, res;

cout << "escribe el valor del radio: ";
cin >> radio;

	res = PI * (radio * radio);

cout << "el valor de radio es: " << res << endl;
getch();

}
