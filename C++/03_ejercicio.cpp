#include <iostream>

using namespace std;

/*EJERCICIO:
    Programa que simula un presupuesto de piso flotante, existen dos calidades
    una media y una alta, por lo que se pregunta por pantalla cuantos metros 
    de cada calidad se requieren, los precios de las calidades se muestran
    al inicio del programa junto con el IVA.
    
    Se debe mostrar por pantalla el precio final junto con un mensaje de 
    duración del presupuesto, generalmente los presupuestos tienen un tiempo
    de validez de 30 días. */
int main(){

    const double precioMetroCalidadMedia = 35.5;
    const double precioMetroCalidadAlta = 55.3;
    const double iva= 0.21;

    double mCalidadMedia; 
    double mCalidadAlta;

    double totalSinImpuestos;
    double totalConImpuestos;

    cout << "Cuántos metros deseas instalar con calidad media?" << endl;
    cin >> mCalidadMedia;

    cout << "Cuántos metros deseas instalar con calidad alta?" << endl;
    cin >> mCalidadAlta;

    totalSinImpuestos = (mCalidadMedia*precioMetroCalidadMedia)+(mCalidadAlta*precioMetroCalidadAlta);

    totalConImpuestos = (totalSinImpuestos*iva)+totalSinImpuestos;

    cout <<"El total del presupuesto es de: "<< totalConImpuestos << ". Y tiene una validez de 30 días " << endl;





}