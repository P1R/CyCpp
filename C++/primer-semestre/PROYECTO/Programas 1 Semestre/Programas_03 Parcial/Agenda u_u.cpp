#include <iostream.h>
#include <conio.h>

main()                                //[i]
{
	int i,j,k, num, edad[3],telefono[15];
   float peso[5],estatura[4];
   char nombre[50],rfc[13],domicilio[80],mail[30], curp[20];
   char grupo[5], turno[10], sangre[5], boleta[10], sexo[10],edocivil [15];

   cout<<"Dame numero de alumnos"<<endl;
   cin>>num;

   for(i=1; i<=num; i++)
   {
   cout<<"Dar nombre"<<endl;
   cin.getline(nombre,50,'\n');

   cout<<"Dar sexo"<<endl;
   cin>>sexo[10];

   cout<<"Dar estado civil"<<endl;
   cin>>edocivil[15];

   cout<<"Dar edad"<<endl;
   cin>>edad[3];

   cout<<"Dar peso"<<endl;
   cin>>peso[5];
   }

   for(j=1; j<=num; j++)
   {
   cout<<"Dar estatura"<<endl;
   cin>>estatura[4];

   cout<<"Dar tipo de sangre"<<endl;
   cin>>sangre[5];

   cout<<"Dar Domicilio"<<endl;
   cin.getline(domicilio,80,'\n');

   cout<<"Dar telefono"<<endl;
   cin>>telefono[15];

   cout<<"Dar mail"<<endl;
   cin>>mail[30];
   }

   for(k=1; k<=num; k++)
   {
   cout<<"Dar RFC"<<endl;
   cin>>rfc[13];

   cout<<"Dar CURP"<<endl;
   cin>>curp[20];

   cout<<"Dar Grupo"<<endl;
   cin>>grupo[5];

   cout<<"Dar turno"<<endl;
   cin>>turno[10];

   cout<<"Dar boleta"<<endl;
   cin>>boleta[10];
	}

	for(i=1; i<=num; i++)
   {
   cout<<nombre[i]<<endl;
   cout<<edocivil[i]<<endl;
   cout<<edad[i]<<endl;
   cout<<peso[i]<<endl;
   cout<<sexo[i]<<endl;
   }

   for(j=1; j<=num; j++)
   {
   cout<<estatura[j]<<endl;
   cout<<sangre[j]<<endl;
   cout<<domicilio[j]<<endl;
   cout<<mail[j]<<endl;
   cout<<telefono[j]<<endl;
   }

   for(k=1; k<=num; k++)
   {
   cout<<rfc[k]<<endl;
   cout<<curp[k]<<endl;
   cout<<boleta[k]<<endl;
   cout<<grupo[k]<<endl;
   cout<<turno[k]<<endl;
   }
   getch();
}