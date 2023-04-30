#include <iostream>
/*Para mostrar la otra forma de imprimir por pantalla, comentaremos la siguiente
declaración.*/

//using namespace std; 

int main(){

    std::cout << "Prueba de 'cout' sin declarar un namespace" << std::endl; //utilizamos std

    std::cout << "Prueba de imprimir por pantalla"; //Aqui no agregaremos un salto de linea,
    std::cout << " un texto sin salto de linea";    /*por lo que la linea 11 y 12 se escribirán
                                                    en una única línea*/

    return 0;
}