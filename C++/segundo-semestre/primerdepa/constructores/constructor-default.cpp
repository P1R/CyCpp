#include <iostream>


using namespace std;

class datos{
    private:
	int edad, talla;
	float peso;

    public:
    void lee();
    void imprime();
    datos();
}

    void datos::lee(){
    std::cout << "Edad: ";
    std::cin >> edad;
    std::cout << "Peso: ";
    std::cin >> peso;
    std::cout << "talla: ";
    std::cin >> talla;
    }

    void datos::imprime(){
	std::cout << "el peso es  " << peso << " Kg  la talla es "  << talla << "la edad es " << edad << '\n';
	}
    datos::datos(){
    edad = 0;
    peso = 0;
    talla = 0;
    }

main()
{
    datos a;
    
    a.imprime();
    a.lee();
    a.imprime();

}