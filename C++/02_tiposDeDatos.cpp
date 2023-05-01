#include <iostream>
using namespace std;

int main(){
    
    /* a continuacion declararemos distintas 'variables' 
    con distintos tipos de datos*/
    
    /*REGLAS SOBRE DECLARACION DE VARIABLES:
    -SOLO empiezan por letras o guion bajo.
    -NO se permiten espacios en blanco.
    -NO se permite declarar dos veces la misma variable.
    -NO declarar palabras reservadas (ej: cout).
    -ES case sersitive (ej: casa, Casa, CAsa, son diferentes)
    */

    int numero;     //Tipo de dato 'int' (entero)
    string nombre;  //Tipo de dato 'string' (cadena)
    double salario; //Tipo de dato 'double' (decimales mas largos)
    int edad;  //Lista de 'int'

    numero = 3500; //le damos valor a la variable numero
    nombre="Juan";

    cout << "Introduce el salario del empleado: ";
    cin >> salario; /*'cin' pide un tipo de dato para agregar al 
                    codigo mediante consola*/

    cout << "Introduce la edad del empleado: ";
    cin >> edad;

    cout << "Datos del empleado: " << endl;

    cout << "Nombre: " << nombre << ". Edad: " << edad << ". Salario: " << salario;


    return 0;
}