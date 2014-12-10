#include <iostream.h>
#include <conio.h>

main()
{
	int max = 0, i, num[4];

		for(i = 0; i < 4; i++){
      cout << "dame los numeros: ";
      cin >> num[i];
      }

      for(i = 0; i < 4; i++){
      	if(max <= num[i])
         	max = num[i];
         }
   cout << "el maximo es: " << max << '\n';

   getch();
}
