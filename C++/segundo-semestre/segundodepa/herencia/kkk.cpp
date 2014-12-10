#include <iostream.h>
#include <conio.h>
#include <string.h>

class password
{
private:
char clave[5];
char clavestan[5];
public:
password();
void pedirclave(void);
void compare(void);
};


password::password()
{
clave[0]='\0';
clavestan=="arlis";
}

void password::pedirclave()
{
int i;
cout<<"Ingrese la clave"<<endl;
for (i=0;i<5;i++)
{
clave[i]=getch();
cout<<"*";
}

}

void password::compare()
{
int x;
x=strcmp(clavestan,clave);

if(x==0)

cout<<"Clave Correcta";
else
cout<<"Clave incorrecta";
}

main()
{
password pisao;
pisado.pedirclave();
pisado.compare();
getch();
}



