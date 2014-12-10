# include <iostream>
using namespace std;
class Animal
{
public:
     virtual void come() { cout << "Yo como como un animal generico.\n"; }
};


class Lobo : public Animal
{
public:
    void come() { cout << "Yo como como un lobo!\n"; }
};
 
class Pez : public Animal
{
public:
    void come() { cout << "Yo como como un pez!\n"; }
};
 
class OtroAnimal : public Animal
{
};
 
int main()
{
    Animal *unAnimal[4];
    unAnimal[0] = new Animal();
    unAnimal[1] = new Lobo();
    unAnimal[2] = new Pez();
    unAnimal[3] = new OtroAnimal();
 
    for(int i = 0; i < 4; i++) {
        unAnimal[i]->come();
    }
 
    for (int i = 0; i < 4; i++) {
        delete unAnimal[i];
    }
    return 0;
}
