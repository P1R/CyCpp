#include <stdio>
#include <iostream>
#include <stdlib>

class A{
    protected:
    int x;
    public:
    A(int);
};

A::A(int a = 0){
    x=a;
}

class B: public A{
  protected:
  float w;
  int z;
  public:
  B(int , float , int);
};

B::B(int aa = 0; float ww = 0, int zz=0):A(aa){
    w = ww;
    z = zz;
}

class E: virtual public A{
    protected:
    int c;
    public:
    E(int, int);
};

E::E(int cc, int aa):A(aa){
    c = cc;
};


