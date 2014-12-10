#include <iostream.h>
#include <conio.h>

main()                                //[i]
{
	char edad[3],telefono[15];
   char peso[3],estatura[4];
   char nombre[20],rfc[13],domicilio[20],mail[30], curp[20];
   char grupo[5], turno[10], sangre[5], boleta[10], sexo[10],edocivil [15];

      cout<<endl;
   	cout<<'\t'<<'\t'<<'\t'<<"DATOS"<<endl;
   	cout<<endl;

   	cout<<"Dar Domicilio: ";
   	cin.getline(domicilio,20,'\n');
   	cout<<endl;

   	cout<<"Dar nombre: ";
   	cin.getline(nombre,20,'\n');
   	cout<<endl;

   	cout<<"Dar sexo: ";
   	cin>>sexo;
   	cout<<endl;

   	cout<<"Dar estado civil: ";
   	cin>>edocivil;
   	cout<<endl;

   	cout<<"Dar edad: ";
   	cin>>edad;
   	cout<<endl;

   	cout<<"Dar peso [kg]: ";
   	cin>>peso;
   	cout<<endl;

   	cout<<"Dar estatura [cm]: ";
   	cin>>estatura;
   	cout<<endl;

   	cout<<"Dar tipo de sangre: ";
   	cin>>sangre;
   	cout<<endl;

   	cout<<"Dar telefono: ";
   	cin>>telefono;
   	cout<<endl;

   	cout<<"Dar mail: ";
   	cin>>mail;
   	cout<<endl;

   	cout<<"Dar RFC: ";
   	cin>>rfc;
   	cout<<endl;

   	cout<<"Dar CURP: ";
   	cin>>curp;
   	cout<<endl;

   	cout<<"Dar Grupo: ";
   	cin>>grupo;
   	cout<<endl;

   	cout<<"Dar turno: ";
   	cin>>turno;
   	cout<<endl;

   	cout<<"Dar boleta: ";
   	cin>>boleta;
   	cout<<endl;

   	cout<<endl;
   	cout<<"DATOS ACCESADOS"<<endl;
   	cout<<endl;
   	cout<<"Nombre: "<<nombre<<endl;
   	cout<<endl;
   	cout<<"Estado Civil: "<<edocivil<<endl;
   	cout<<endl;
   	cout<<"Edad: "<<edad<<endl;
   	cout<<endl;
   	cout<<"Peso: "<<peso<<" kg"<<endl;
   	cout<<endl;
   	cout<<"Sexo: "<<sexo<<endl;
   	cout<<endl;
   	cout<<"Estatura: "<<estatura<<" cm"<<endl;
   	cout<<endl;
   	cout<<"Tipo de Sangre: "<<sangre<<endl;
   	cout<<endl;
   	cout<<"Domicilio: "<<domicilio<<endl;
   	cout<<endl;
   	cout<<"Correo Electronico: "<<mail<<endl;
   	cout<<endl;
   	cout<<"Telefono: "<<telefono<<endl;
   	cout<<endl;
   	cout<<"RFC: "<<rfc<<endl;
   	cout<<endl;
   	cout<<"CURP: "<<curp<<endl;
   	cout<<endl;
   	cout<<"Boleta: "<<boleta<<endl;
   	cout<<endl;
   	cout<<"Grupo: "<<grupo<<endl;
   	cout<<endl;
   	cout<<"Turno: "<<turno<<endl;

   getch();
}