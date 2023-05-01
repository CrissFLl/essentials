#include <iostream>
using namespace std;


/*En este programa definiremos 'variables', 'constantes' y
'Tipos de datos'*/

/*Variables varían, constantes NO
Tipos de datos como su nombre lo indica, es el tipo de
dato que pueden almacenar las variables y/o constantes*/

int main(){
    
    /*A continuacion declararemos distintas 'variables' 
    y 'constantes' con distintos tipos de datos*/
    
    /*REGLAS SOBRE DECLARACION DE VARIABLES:
    -SOLO empiezan por letras o guion bajo.
    -NO se permiten espacios en blanco.
    -NO se permite declarar dos veces la misma variable.
    -NO declarar palabras reservadas (ej: cout).
    -ES case sersitive (ej: casa, Casa, CAsa, son diferentes)
    */

    const string nombre = "Juan";     //Constante de tipo de dato 'string' (cadena)
    int numero;             //Variable de tipo de dato 'int' (entero)
    double salario;         //Variable de tipo de dato 'double' (decimales mas largos)

    int edad; 
    numero = 3500;          //Le damos valor a la variable numero
    
    cout << "Introduce el salario del empleado: ";
    cin >> salario; /*'cin' pide un tipo de dato para agregar al 
                    codigo mediante consola*/

    cout << "Introduce la edad del empleado: ";
    cin >> edad;

    cout << "Datos del empleado: " << endl;

    cout << "Nombre: " << nombre << ". Edad: " << edad << ". Salario: " << salario;


    return 0;
}