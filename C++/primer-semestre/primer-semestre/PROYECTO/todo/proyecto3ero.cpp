#include <iostream>
//#include <conio.h>
#include <math.h>
void ascendente(void);
void ascendente(void)
{ int i,j,pos,menor;
int *x,n[5]={5,8,2,7,9};
int vartemp;
x=n;
for (i=0;i<5;i++)
{
menor=x[i];
pos=i;
for (j=i+1;j<5;j++)
{
if (x[j]<menor)
{
menor=x[j];
pos=j;
}
}
vartemp=x[i];
x[i]=x[pos];
x[pos]=vartemp;
}
for (i=0;i<5;i++)
printf("\n n[%d]=%d",i,x[i]);
}


main ()
     {
         int opcion;
         char opcion_2;
     do
       {
         
              cout << " \t\tProgramas del 3er departamental " << '\n' << '\n';
              cout << "\t*****MENU-PRINCIPAL*****" << '\n' << '\n';
              cout << " 1.- Arreglos " << '\n';
              cout << " 2.- Operaciones de vectores " << '\n';
              cout << " 3.- Operaciones de matrices " << '\n';
              cout << " 4.- Otros programas " << '\n' << '\n';
              cout << " Que opcion deseas realizar?: ";
                   cin >> opcion;
              cout << '\n';
                   
         switch ( opcion )
            {
                case 1:
                     {
                         char opcion;
                          
                              cout << "\t*****MENU-2-Arreglos*****" << '\n' << '\n';
                              cout << " a.- Ordenador descendente " << '\n';
                              cout << " b.- Ordenador ascendente" << '\n';
                              cout << " c.- Ordenador descendente II " << '\n';
                              cout << " d.- Ordenador ascendente II " << '\n';
                              cout << " e.- Ordenado o No ordenado" << '\n';
                              cout << " f.- Nombres " << '\n';
                              cout << " g.- Numero y posicion " << '\n';
                              cout << " h.- Maximo " << '\n';
                              cout << " i.- Minimo " << '\n';
                              cout << " j.- Datos Personales " << '\n';
                              cout << " k.- Agenda " << '\n' << '\n';
                              cout << " Ahora, Que opcion desea realizar?: ";
                                   cin >> opcion;
                              cout << '\n';
                                   
                         switch ( opcion )
                                {
                                    case 'a':
                                         {
                                           
                                         break;
                                         }
                                    case 'b':
                                         {
                                             ascendente();
                                             cout << '\n';
                                         break;
                                         }
                                    case 'c':
                                         {
                                         break;
                                         }
                                    case 'd':
                                         {
                                         break;
                                         }
                                    case 'e':
                                         {
                                         break;
                                         }
                                    case 'f':
                                         {
                                         break;
                                         }
                                    case 'g':
                                         {
                                         break;
                                         }
                                    case 'h':
                                         {
                                         break;
                                         }
                                    case 'i':
                                         {
                                         break;
                                         }
                                    case 'j':
                                         {
                                         break;
                                         }
                                    case 'k':
                                         {
                                         break;
                                         }
                                         
                                    default:
                               cout << " OPCION INCORRECTA " << '\n';     
                               }
                         break;
                     }
                    case 2:
                          {
                               char opcion;
                                    cout << "\t*****MENU-3-Op. con Vectores*****" << '\n' << '\n';
                                    cout << " a.- Suma de Vectores " << '\n';
                                    cout << " b.- Resta de Vectores " << '\n';
                                    cout << " c.- Multiplicacion de Vectores " << '\n' << '\n';
                                    cout << " Ahora, Que opcion desea realizar?: ";
                                         cin >> opcion;
                                    cout << '\n';
                                    
                          switch ( opcion )
                              {
                                   case 'a':
                                        {
                                        break;
                                        }
                                   case 'b':
                                        {
                                        break;
                                        }
                                   case 'c':
                                        {
                                        break;
                                        }
                                   default:
                                cout << " OPCION INCORRECTA " << '\n';
                              }
                          break;
                          }
                    case 3:
                          {
                               char opcion;
                                    cout << "\t*****MENU-4-Op. con Matrices*****" << '\n' << '\n';
                                    cout << " a.- Suma de Matrices " << '\n';
                                    cout << " b.- Resta de Matrices " << '\n';
                                    cout << " c.- Multiplicacion de Matrices " << '\n';
                                    cout << " d.- Transpuesta de Matrices " << '\n' << '\n';
                                    cout << " Ahora, Que opcion desea realizar?: ";
                                         cin >> opcion;
                                    cout << '\n';
                                    
                          switch ( opcion )
                              {
                                   case 'a':
                                        {
                                        break;
                                        }
                                   case 'b':
                                        {
                                        break;
                                        }
                                   case 'c':
                                        {
                                        break;
                                        }
                                   default:
                                cout << " OPCION INCORRECTA " << '\n';
                              }
                          break;
                          }
            }
                          cout << '\n';
                          cout << " Desea continuar con el programa y regresar al menu principal s/n?: ";
                               cin >> opcion_2;
         }while ( opcion_2 == 's' || opcion_2 == 'S' );                  
    //getch();                    
     }
