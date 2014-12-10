#include <iostream>

using namespace std;

main(){
	int a, b, c, d, e, f, Pmin,  i, j;
	
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
	
		for(i = 0; i < 6; i++){
			if(a > b && a > c &&  a > d && a > e &&  a > f && a!=0){
				Pmin = a;
				cout << a << " ";
				a = 0;
			}
			if(b > a && b > c &&  b > d && b > e &&  b > f && b!=0){
				Pmin = b;
				cout << b << " ";
				b = 0;
			}
			if(c > b && c > a &&  c > d && c > e &&  c > f && c!=0){
				Pmin = c;
				cout << c << " ";
				c = 0;
			}
			if(d > b && d > c &&  d > a && d > e &&  d > f &&d!=0){
				Pmin = d;
				cout << d << " ";
				d = 0;
			}
			if(e > b && e > c &&  e > d && e > a &&  e > f && e != 0){
				Pmin = e;
				cout << e << " ";
				e = 0;
			}
			if(f > b && f > c &&  f > d && f > e &&  f > a && f !=0){
				Pmin = f;
				cout << f << " ";
				f  = 0;
			}
			//cout << Pmin << " ";
		
			
		}
	cout << '\n';
}

/*
    for(i = 1; i <= n; ++n)
	for(j = 0; j < n; ++j ){
	if(A[i] > A[i+1]){
	    aux = A[i];
	    A[i] = A[i+1];
	    A[i+1] = aux;
	}
}
