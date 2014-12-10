/*******************************************************
Escuela Superior de Ingeniería Mecánica y Eléctrica
Alumnos:
    Perez-negrón Rocha David Eugenio
    Osmar trujillo huazo
Profesor:
    Cortés Pérez Alejandro
Programa metodo de fgauss seidel
*************************************************/
#include <cstdio>
#include <cmath>
#include <iostream>
#include <cstdlib>
#define L 10
#define P L
 using namespace std;

float A[L][P],MATRIZ[L][P],VECTOR[L],X[L],CX[L],C[L],RESULTADOS[L],tabla[1000];
float a, b, c, d, e, f;
int i,it,ini,n,x,y,z,cont=0;

void Gauss_Seidel(int n)
{
	for(x=0;x<n;x++)
	{
		CX[x]=0;
		X[x]=0;
	}
	for(y=0;y<n;y++)
	{
		for(x=0;x<n;x++) //Ingreso de la matriz A
		{
			cout<<"A["<<y<<"]["<<x<<"] = ";
			cin>>e;
			A[y][x]=e;
			MATRIZ[y][x]=e;  //esta es la matriz q no varia
		}
		cout<<"Y la constante C["<<y<<"] = ";
		cin>>f;
		C[y]=f;
		VECTOR[y]=f; //este es el vector que no se modifica
	}
	int sum=0,cont=0,reglon=0;
	for(int i=0;i<n;i++)   //se suma la diagonal principal
		sum=sum+abs(A[i][i]);

	for(i=0;i<n;i++) //se compara cada reglon con el valor de la diagonal
	{
		for(int j=0;j<n;j++)
			reglon=reglon+abs(A[i][j]);
		if(reglon<=sum) cont++;
		reglon=0;
	}

	int temp[L][P],H[P];
	if(cont!=n) //aqui se realiza el pivoteo
	{
		for(i=0;i<n;i++)
		{
			for(int j=i;j<n;j++)
			{
				int d,e;
				d=abs(A[i][i]);
				e=abs(A[j][i]);
				if(d<e)
				{
					for(int z=0;z<n;z++)
					{
						temp[i][z]=A[i][z];
						A[i][z]=A[j][z];
						A[j][z]=temp[i][z];
					}
					H[i]=C[i];
					H[j]=C[j];
					C[i]=H[j];
					C[j]=H[i];
				}
			}
		}
	}
	i=0;
	for(it=0;it<100;it++)
	{
		for(y=0;y<n;y++)
		{
			for(x=0;x<n;x++)
				CX[y]-=(A[y][x]*X[x])/A[y][y];
			CX[y]+=(C[y]/A[y][y]);
			X[y]=CX[y];
			tabla[i]=CX[y];   //tabla sirve para imprimir la tabla de resultados
			i++;
		}
	}
}

void titulo(int n)
{
	int o=10,i=1;
	//clrscr();
	system("CLS");
	for(i=1;i<n+1;i++)
	{
		o=o+10;
		cout<<"X"<<i << '\t';
	}
	cout<< endl<<"--------------------------------------------" << endl;
}

void resultados()
{
	int q=0,i=1,t=3,s=n,r=0;
	int sw=0,w=0,ite=0,h=0;
	while((sw==0)&&(w<20))
	{
		h=0;
		while(h<n)
		{
			if(tabla[r]==tabla[r+s])
			{
				cont++;
			}
			if(cont==n)
				sw=1;
			r++;
			s++;
			h++;
		}
		ite++;
		w++;
	}
	w=ite-1;
	for(int j=0;j<w;j++)
	{
		t=t+2;
		if((i%10==0))
		{

			cout<<"\n\n ­­­Presione una tecla para ver la siguiente parte de la tabla!!! ";
            getchar();
			//textcolor(GREEN);
			//clrscr();
			system("CLS");
			t=5;
			titulo(n);
		}
		cout<<i<<"ø:";
		int y=20,z=0;
		for(int r=0;r<n;r++)
		{
		cout<< tabla[q] << '\t';
			q++;
			z=z+10;
		}
		i++;
		cout << endl;
	}
}

int main()
{

	cout<<" Solucion de ecuaciones simultaneas\n\n\n Metodo de Gauss-Seidel";
	cout<<"\n\n Cuantas incognitas tendra el sistema: ";
	cin>>n;
	Gauss_Seidel(n);
	titulo(n);
	resultados();
	cout<<"\n\nLos resultado son ";
	for(x=0;x<n;x++)
	{
		RESULTADOS[x]=X[x];
		cout<<"\nX["<<x<<"]= "<<RESULTADOS[x];
	}
	getchar();
return(0);
}
