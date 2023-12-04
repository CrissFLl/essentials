#include <iostream>

using namespace std;

/*En este programa definiremos 'arrays' o arreglos*/

/*Arreglo: estructura de datos que contiene una SERIE
de valores, los cuales SON DEL MISMO TIPO. (conjunto 
de datos del mismo tipo, no pueden tener diferentes tipos).
Generalmente se utilizan para almacenar multiples valores 
que tienen alguna relación entre sí*/

int main(){

    const int n = 5;

    /*A continuacion declararemos distintos arreglos*/
    
    /* Arreglo de enteros (int) que tiene de nombre
    'primerArreglo' y almacena 'n' elementos (entre
    corchetes se especifica el tamaño del arreglo).
    IMPORTANTE: Los arreglos SIEMPRE tienen tamaño fijo, por lo tanto
    su TAMAÑO NO podrá ser cambiado.
    Los VALORES que almacena el arreglo SÍ podrán ser cambiados*/
    int primerArreglo[n]; 
    // n debe ser constante.
    //Los valores pueden ser introducidos más adelante


    /* También es posible inicializar sus valores, ejemplo:*/

    /* Arreglo que almacena 5 elementos en el orden que dictan los {}*/
    int segundoArreglo[5] {10,15,20,25,30}; // Será: (10,15,20,25,30)

    /* Arreglo que almacena 5 elementos pero SOLO da el valor de DOS
    (los tres restantes tendrán valor 0)*/
    int tercerArreglo[5] {10,15}; //Será: (10,15,0,0,0)

    /* Arreglo que almacena X doubles, y el valor de la primera posición
    será dictado por el {}*/
    const int x {15};
    double cuartoArreglo[x] {2700.35}; // Será: (2700.35,0,0,0, ..., 0) arreglo de tamaño x

    /*Arreglo que no sabremos su tamaño, pero al inicializarlo tendrá tantos
    valores como su inicialización indique*/
    int quintoArreglo[] {10,15,20,25}; //Será (10,15,20,25) Tamaño 4


    /* IMPORTANTE: Las posiciones de un arreglo comiezan desde 0
    por ejemplo: en segundoArreglo, la POSICIÓN 0 tiene el valor de 10*/

    /* Para ingresar al valor de un elemento es necesario indicar SU INDICE:*/

    cout << "El primer elemento (posición 0) del arreglo 'segundoArreglo' es: " << segundoArreglo[0] << endl;
    

    /* Para EDITAR un valor dentro del arreglo tambien es necesario indicar
    el INDICE del valor que queremos editar*/
    int valorAntiguo;
    int nuevoValor;
    
    valorAntiguo = segundoArreglo[0];
    cout << "Ingresa un NUEVO valor para el primer elemento del arreglo 'segundoArreglo': ";
    cin >> nuevoValor;

    segundoArreglo[0]=nuevoValor;

    cout << "Se ha cambiado el valor del primer elemento del arreglo"<< endl;
    cout << "Valor antiguo: "<< valorAntiguo<< endl;
    cout << "Valor nuevo: "<< segundoArreglo[0]<< endl;

    return 0;


}