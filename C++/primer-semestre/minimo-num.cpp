#include <iostream.h>
#include <conio.h>

main()
{
	int min = 10000, i, num[4];

		for(i = 0; i < 4; i++){
      cout << "dame los numeros: ";
      cin >> num[i];
      }

      for(i = 0; i < 4; i++){
      	if(min >= num[i])
         	min = num[i];
         }
   cout << "el minimo es: " << min << '\n';

   getch();
}
