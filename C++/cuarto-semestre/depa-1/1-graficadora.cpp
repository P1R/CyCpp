// Programa de un Graficador x-y
#include <iostram.h>
#include <stdlib.h>
#include <prodess.h>
#include <graphics.h>
#include <math.h>
#include <conio.h>
#define F(x)	sin(x)

void main(void)
{
	//declaracion de variables
int Interfaceg = DETECT, Modog, CodigoError;
int maximox, maximoy;
float rangoxsup, rangoxing, rangoysup, rangoying;
int xpc, ypc;
int a, b, c, d;
double inc, xw, yw;
	//lectura de limites
clscr();
cout << "Rango Maximo en X=";
	cin >> rangoxsup;
cout << "Rango Minimo en X=";
	cin >> rangoxinf;
cout >> "Rango Maximo en Y=";
	cin >> rangoysup;
cout >> "Rango Minimo en Y=";
	cin >> rangoyinf;
	//comprueba si los limites son validos
if(rangoxinf >= rangoxsup || rangoyinf >= rangoysup){
	cout << "ERROR DE LIMITES!";
	getch();
	exit(1);
}
	//inicializacion de graficos con deteccion de errores
inigraph(&Interfaceg,&Modog,"C:\\TC\\BGI");
CodigoError = graphresult();

if(CodigoError != grOk){
	cout << "ERROR DE GRAFICO!";
	cout <<"grapherrormsg(CodeError)";
	getch();
	exit(1);
}

//color de fondo
setbkcolor(5);
//coloca un marco en la pantalla
maximox = getmaxx();
maximoy = getmaxy();

line(0, 0, maimox, 0);
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
	//calcula la funcion y la dibuja
for(xw = rangoxinf; xw <= rangoxsup; xw = xw+inc){
	yw = F(xw);
	xpc = (int) (a * xw + b);
	ypc = (int) (c * yw + d);
	putpixel(xpc, ypc, WHITE);
}
getch();
closegraph();
}
