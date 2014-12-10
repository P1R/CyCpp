#include <iostream>

using namespace std;

main(){
	int a, b, c, d, e, f, Pmax=0,  i = 0, j;
	
	cout << "ingresa a:";
		cin >> a;
	cout << "ingresa b:";
		cin >> b;
	cout << "ingresa c:";
		cin >> c;
	cout << "ingresa d:";
		cin >> d;
	cout << "ingresa e:";
		cin >> e;
	cout << "ingresa f:";
		cin >> f;
		
		while(i < 6){
			if(a>b||a>c||a>d||a>e||a>f){
				Pmax = a;
				//cout << a << " ";
				a = 0;
			}
			if(b>a||b>c||b>d||b>e||b>f){
				Pmax = b;
				//cout << b << " ";
				b = 0;
			}
			if(c>b||c>a||c>d||c>e||c>f){
				Pmax = c;
				//cout << c << " ";
				c = 0;
			}
			if(d>b||d>c||d>a||a>e||d>f){
				Pmax = d;
				//cout << d << " ";
				d = 0;
			}
			if(e>b||e>c||e>d||e>a||e>f){
				Pmax = e;
				//cout << e << " ";
				e = 0;
			}
			if(f>b||f>c||f>d||f>e||f>a){
				Pmax = f;
				//cout << f << " ";
				f  = 0;
			}
			cout << Pmax << " ";
			i++;
		
		}
	cout << '\n';
}
