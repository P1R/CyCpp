//A hacer que ordene y hacer que verifique numeros repetidos y de menor a mayor

void main (void)

{
	int numeros[0];
	int cuantos;
	int i;

	cout << "Cuantos en tu lista";
	cin >> cuantos;

	for(i=0; i < cuantos; i++)
		cin >> numeros[i];
	i=0;

	while( (i <= cuantos -2) && (numeros[i] <= numeros[i+1]))
	i = i+1;

	if(i == cuantos-1)
		cout<<"Esta ordenado";
	else
		cout<<"No esta ordenado";

//B hacer que haga -, * y /

#define	max	5

void lee(float[], int);
void muestra(float[], int);
void suma(float[], float[], float[], int);

void lee(float A[],int n)
{
	for(int i=0; i<n; i++)
{
		cout<<"Dame los datos";
		cin>>A[i];}
}

void Muestra (float A[], int n)
{
	for(int i=0; i<n;i++)
		cout<<A[]<<" ";
		cout<<endl;}

Void suma(float A[], float B[], float C[], int n)
{int i;
	for(i=0; i<n; i++)
	c[i]=a[i]+b;
}

// metiendo el main

int main()
{
	int n=3;


float a[max], b[max], c[max];
	cout << "Para el vector A";
		lee(a, n);
	cout << "Para el vector B";
		lee(b, n);
	cout << "El Vector A es: ";
		muestra(a, n);
	cout << "El vector B es: ";
		muestra(b, n);

	suma(a, b, c, n);
	cout << "El vector suma es:";
	muestra(c,n);

}