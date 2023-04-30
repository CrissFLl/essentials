/*Biblioteca iostream que permite utilizar la funcion cout, endl (y muchas otras)*/
#include <iostream> 

/*Lo siguiente es una declaracion, estas terminan en ';'
esta especifica que utilizaremos el 'espacio de nombres' std,
el espacio de nombres lo que hace es especificar la funcion de
una biblioteca que utilizaremos sin 'equivocarnos' utilizando 
otra funcion con el mismo nombre perteneciente a otra biblioteca*/
using namespace std;

/*Lo siguiente es una funcion, estas empiezan y terminan con '{}'
y sirven para hacer 'bloques de codigo', es decir, ejecutar codigo
en orden (desde arriba hacia abajo). Tambien se debe especificar
el tipo de dato que debe 'retornar' la función, en este caso retorna
un tipo de dato perteneciente a los 'int' (enteros)*/

/*Siempre existe una función 'main' (principal) la cual es el 'punto
de entrada' de ejecución de cualquier aplicacion de C++*/

/*Las funciones pueden o no tener parámetros, que deben incluirse 
dentro de los '()' */
int main(){

    //console out << "mensaje" (siempre entre parentesis) << end line (salto de linea)
    cout << "Hello world" << endl;  //'cout' incluye un mensaje en consola
                                    //endl crea un salto de linea, puede o no incluirse. 

    /*También es posible utilizar la función cout o endl sin declarar el espacio de nombres std al inicio:
    Ej:
        std::cout << "Hello world" << std::endl; <-- Aqui declaramos el espacio de nombres std al inicio
                                                    de las funciones 'cout' y 'endl'

        NOTA: debemos comentar o quitar la linea 9 (using namespace std;) para poder utilizar la forma
        anterior.
    */

    return 0; 
    /*'return' retorna un valor, el cual debe corresponder al tipo de dato de la funcion, en este caso
    'main' es del tipo de dato 'int' por lo que, 'return' nos retorna un valor 0 (que es int)
    
    NOTA: esta línea es prescindible dentro de main, pero en las otras funciones SIEMPRE debe existir, 
    por lo que, para acostumbrarnos lo agregaremos.*/

}