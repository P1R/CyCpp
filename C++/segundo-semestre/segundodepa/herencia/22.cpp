#include <iostream.h>
#inlcude <conio.h>

class complejo
{
protected:
float Re;
float Img;

public:

complejo(float, float);
friend ostream &operator<<(ostream&, const complex&);
friend istream &oparator>>(istream&, complex&);

};

complejo::complejo(float R=0; float I=0)
{
Re=R;
Img=I;
}

ostream& operator<<(ostream & Cout, const complex& imp)
{

	if (Img>0)
   {
   Cout<<imp.Re<<" + "<<imp.Img<<"i"endl;
   }
   else
   {
   Cout<<imp.Re<<imp.Img<<"i"<<endl;
   }

   return Cout;
}

	istream& operator>>(istream& Cin, complex& imp)
	{
   	Cin>>imp.Re;
      Cin>>imp.Img;

       return  Cin;
   }



class






