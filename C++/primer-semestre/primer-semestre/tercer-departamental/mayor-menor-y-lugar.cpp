/* Copyright (C) 19aa David E. Pereznegron Rocha

Este programa es software libre. Puede redistribuirlo y/o modificarlo bajo los términos de la Licencia Pública General de GNU según es publicada por la Free Software Foundation, bien de la versión 2 de dicha Licencia o bien (según su elección) de cualquier versión posterior.

Este programa se distribuye con la esperanza de que sea útil, pero SIN NINGUNA GARANTÍA, incluso sin la garantía MERCANTIL implícita o sin garantizar la CONVENIENCIA PARA UN PROPÓSITO PARTICULAR. Véase la Licencia Pública General de GNU para más detalles.

Debería haber recibido una copia de la Licencia Pública General junto con este programa. Si no ha sido así, escriba a la Free Software Foundation, Inc., en 675 Mass Ave, Cambridge, MA 02139, EEUU.
Añada también información sobre cómo contactar con usted mediante correo electrónico y postal. */

#include <iostream.h>
#include <conio.h>

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
