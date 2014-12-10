#include <iostream.h>
#include <conio.h>

main ()
{
	char opcion,op_dos;
   do
{
   cout<<endl;
	cout<<"Elegir Opcion"<<endl;
  	cout<<" "<<endl;
  	cout<<"a. Opcion Piramide"<<endl;
  	cout<<"b. Opcion Piramide Inversa"<<endl;
  	cout<<"c. Opcion Piramides Encontradas"<<endl;
  	cout<<"d. Opcion Marco"<<endl;
   cout<<"e. Opcion Cuadrado"<<endl;
   cout<<"f. Opcion Rombo"<<endl;
   cout<<"g. Opcion Letra K"<<endl;
  	cout<<endl;
  	cin>>opcion;
  	cout<<endl;

   switch (opcion)
   {
      case 'a':
      {
      	int a,b,c;

  			cout<<"\t"<<"Piramides"<<endl;

         for(a=1;a<=15;a++)
  			{
   		for(c=15;c>=a;c--)
   		cout<<" ";

   		for(b=a;b>=1;b--)
   		cout<<" *";
   		cout<<"\n";
  			}

      break;
      }

      case 'b':
      {
       int a,b,c;

       cout<<"\t"<<"Piramide Inversa"<<endl;

       for(a=1;a<=15;a++)
       {
       for(c=1;c<=a;c++)
       cout<<" ";

       for(b=a;b<=15;b++)
       cout<<" *";
       cout<<"\n";
       }

      break;
      }

      case 'c':
      {
       int a,b,c;

       cout<<"\t"<<"\t"<<"Piramides"<<endl;

       for(a=1;a<=15;a++)
       {
       for(c=1;c<=a;c++)
       cout<<" ";

       for(b=a;b<=15;b++)
       cout<<" *";
       cout<<"\n";
       }

       for(a=1;a<=15;a++)
       {
       for(c=15;c>=a;c--)
       cout<<" ";

       for(b=a;b>=1;b--)
       cout<<" *";
       cout<<"\n";
       }

      break;
      }

       case 'd':
      {
      int i,j;

       cout<<'\t'<<"Marco"<<endl;
       cout<<endl;

       for (j=1; j<=30; j++)
       cout<<"#";
       cout<<endl;

       for (i=2; i<=29; i++)
       {
       cout<<"#";

       for (j=2; j<=29; j++)
       cout<<" ";
       cout<<"#"<<endl;
       }

       for (j=1; j<=30; j++)
       cout<<"#";

      break;
      }

       case 'e':
      {
      	int linea_horizontal, linea_vertical;
   		for (linea_horizontal=1; linea_horizontal<=30; linea_horizontal++)
   		{
   			for (linea_vertical=2; linea_vertical<=30; linea_vertical++)
      	{
   			cout<<"* ";
         }
      	cout<<"*";
      	cout<<endl;
      }

      break;
      }

       case 'f':
      {
      	int c,b,a;

  			cout<<"\t"<<"\t"<<"ROMBO"<<endl;
         cout<<endl;

  			for(a=1;a<=15;a++)
  			{
   		for(c=15;c>=a;c--)
   		cout<<" ";

   		for(b=a;b>=1;b--)
   		cout<<" *";
   		cout<<"\n";
  			}

			for(a=1;a<=15;a++)
  			{
   		for(c=1;c<=a;c++)
   		cout<<" ";

   		for(b=a;b<=15;b++)
   		cout<<" *";
   		cout<<"\n";
  			}
      break;
      }

      case 'g':
      {
        int a,b,c;

        cout<<"\t"<<"\t"<<"Letra K"<<endl;
        for(a=1;a<=15;a++)
  			{
         for(c=15;c>=a;c--)
   		cout<<"K";

   		for(b=a;b>=1;b--)
   		cout<<" ";
   		cout<<"\n";
  			}

  			for(a=1;a<=15;a++)
  			{
   		for(c=1;c<=a;c++)
   		cout<<"K";

   		for(b=a;b<=15;b++)
   		cout<<" ";
   		cout<<"\n";
  			}

      break;
      }

      default:
      cout<<"Opcion incorrecta"<<endl;
      }
      cout<<endl;
      cout<<"Deseas volver al menu? S/N"<<endl;
      cin>>op_dos;

}while (op_dos=='s' || op_dos=='S');

 		if (op_dos!='s' || op_dos!='S')
      cout<<endl<<"Enter para salir";

      getch();
}
