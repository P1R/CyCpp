/*******************************************************
Escuela Superior de Ingeniería Mecánica y Eléctrica
Alumnos:
    Perez-negrón Rocha David Eugenio
    Osmar trujillo huazo
Profesor:
    Cortés Pérez Alejandro
Programa de graficador de funciones
*************************************************/
#include <iostream.h>
#include <stdlib.h>
#include <process.h>
#include <graphics.h>
#include <math.h>
#include <conio.h>
#define F(x)	tan(x)

class grafica {
//declaracion de variables
int Interfaceg, Modog, CodigoError;
int maximox, maximoy;
float rangoxsup, rangoxinf, rangoysup, rangoyinf;
int xpc, ypc;
int a, b, c, d;
double inc, xw, yw;
public:
void lee(void);
void grafic(void);
void funcion(void);
grafica();
};
grafica::grafica(){
	Interfaceg = DETECT;
}
void grafica::lee(void)
{
//lectura de limites
clrscr();
cout << "Rango Maximo en X=";
	cin >> rangoxsup;
cout << "Rango Minimo en X=";
	cin >> rangoxinf;
cout << "Rango Maximo en Y=";
	cin >> rangoysup;
cout << "Rango Minimo en Y=";
	cin >> rangoyinf;
//comprueba si los limites son validos
if(rangoxinf >= rangoxsup || rangoyinf >= rangoysup){
	cout << "ERROR DE LIMITES!";
	getch();
	exit(1);
}
}

void grafica::grafic(void){
//inicializacion de graficos con deteccion de errores
initgraph(&Interfaceg,&Modog,"C:\\TC\\BGI");
CodigoError = graphresult();

if(CodigoError != grOk){
	cout << "ERROR DE GRAFICO!";
	cout <<"grapherrormsg(CodeError)";
	getch();
	exit(1);
}

//color de fondo
setbkcolor(16);
//coloca un marco en la pantalla
maximox = getmaxx();
maximoy = getmaxy();

line(0, 0, maximox, 0);
line(maximox, 0, maximox, maximoy);
line(maximox, maximoy, 0, maximoy);
line(0, maximoy, 0, 0);

//transformacion de cooredenadas

a =(maximox / (rangoxsup - rangoxinf));
b = -a * rangoxinf;
c = (-maximoy / (rangoysup-rangoyinf));
d = maximoy - c * rangoyinf;

// calcula el incremento de evaluacion de la funcion


inc = (double) (rangoxsup-rangoxinf) / (double) maximox;

//si el rango de limites pasa por cero, dibuja los ejes

if(rangoxsup > 0 && rangoxinf < 0){
xw = 0;
xpc = (int) (a*xw+b);
line(xpc, 0, xpc, maximoy);
}
if(rangoysup > 0 && rangoyinf < 0){
yw = 0;
ypc = (int)(c*yw+d);
line(0, ypc, maximox, ypc);
}
}
void grafica::funcion(void){
//calcula la funcion y la dibuja
for(xw = rangoxinf; xw <= rangoxsup; xw = xw+(inc/10000)){
	yw = -F(-xw);
	xpc = (int) (a * xw + b);
	ypc = (int) (c * yw + d);
	putpixel(xpc, ypc, GREEN);
}
}

void main()
{
 grafica A;
	A.lee();
	A.grafic();
	A.funcion();
	getch();
closegraph();
}
