#include <iostream.h>
#include <conio.h>

main()
{
	char opcion;

   do
	{
      int lista[100], i = 0, num, max = 0, pmax, min = 100000, pmin, datos;

      cout<< '\t' << '\t'<< "Ingrese Valores Numericos" << '\n' <<'\n';

      cout<<"Numero de Datos a accesar"<<endl;
      cin>>datos;

      for(num = 1; num <= datos; ++num, ++i)
      {
			cout << "Ingresa Numero " << num << ": ";
         cin >> lista[i];

           if(max < lista[i])
           {
           	max = lista[i];
           	pmax = i;
           }

           if(min > lista[i])
           {
           	min = lista[i];
            pmin = i;
           }
      }

  		cout << "El numero mayor es " << max << " Y se ingreso en el lugar " << ++pmax << '\n' << '\n';
  		cout << "El numero menor es " << min << " Y se ingreso en el lugar " << ++pmin << '\n';

      cout<<endl;

      cout<<"Deseas usar el Programa de nuevo? S/N"<<endl;
		cin>>opcion;
      cout<<endl;

   }while (opcion =='s'||opcion =='S');

   	getch();
}
