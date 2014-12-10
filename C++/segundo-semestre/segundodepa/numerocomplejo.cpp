/* definir una clase que contenga un numero complejo como atributo 
y mediante funciones amigas realizar las siguientes operaciones:
operaciones:
- suma
- resta
- multipicacion
- division
*/

class complejo{
    float real, imag;
    complejo();
    void leer();
    void imprimir();
    friend float suma();
    friend float resta();
    friend float producto();
    friend float cociente();
};

complejo::complejo(){
    real = 0;
    img = 0;
}

void complejo::leer(){
    std::cout << "dame el valor real:";
    std::cin >> real;
    std::cout << "dame la parte imaginaria:";
    std::cin >> imag;
}

void complejo::imprimir(){
    std::cout << "el valor real es " << real << ", el valor imaginario es " << imag << ".\n";
}
