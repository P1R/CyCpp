/* Copyright (C) 19aa David E. Pereznegron Rocha

Este programa es software libre. Puede redistribuirlo y/o modificarlo bajo los t�rminos de la Licencia P�blica General de GNU seg�n es publicada por la Free Software Foundation, bien de la versi�n 2 de dicha Licencia o bien (seg�n su elecci�n) de cualquier versi�n posterior.

Este programa se distribuye con la esperanza de que sea �til, pero SIN NINGUNA GARANT�A, incluso sin la garant�a MERCANTIL impl�cita o sin garantizar la CONVENIENCIA PARA UN PROP�SITO PARTICULAR. V�ase la Licencia P�blica General de GNU para m�s detalles.

Deber�a haber recibido una copia de la Licencia P�blica General junto con este programa. Si no ha sido as�, escriba a la Free Software Foundation, Inc., en 675 Mass Ave, Cambridge, MA 02139, EEUU.
A�ada tambi�n informaci�n sobre c�mo contactar con usted mediante correo electr�nico y postal. */

#include <iostream>
//#include <conio.h>

main()
{
      int lista[5], i = 0, num, max = 0, pmax, min = 100000, pmin;
      
      cout << '\t' << '\t'<< "ingrese valores numericos" << '\n' <<'\n';
      
      for(num = 1; num <= 5; ++num, ++i){
      cout << "ingresa numero " << num << ": ";
           cin >> lista[i];
           
           if(max < lista[i]){
              max = lista[i];
              pmax = i;
              }
           if(min > lista[i]){
              min = lista[i];
              pmin = i; 
              }                           
           }
  cout << '\n' << '\t' <<"-------------------------------------------------------------" << '\n' << '\n';
  cout << "el numero mayor es " << max << " y se ingreso en el lugar " << ++pmax << '\n' << '\n';
  cout << "el numero menor es " << min << " y se ingreso en el lugar " << ++pmin << '\n';

     /*for (i = 0; i <= 4; ++i)
      cout << lista[i];  */         
      

getch();                
}
