/*
                    **** OPERADORES ARITMETICOS ****
    El presente código implementa el uso de los operadores aritmeticos 
    calculando las cuatro operaciones básicas de la aritmetica, ademas 
    que se implementa un namespace con una variable string para imprimir
    un texto en consola.

*/

//Inclusión de librerias
#include <iostream>

//Creación del namespaces
namespace Texto{
    std::string Inicio = "Operadores aritmeticos \n";
}
//Función principal
int main()
{
    //Definición de variables
    int X;
    int Y;

    X = 12;
    Y = 9;

    int resultado;
    float Division;
    //Calculos y Resultados
    std::cout<<Texto::Inicio;

    resultado = X+Y;
    std::cout<<"\nSuma: "<<X<<" + "<<Y<<"= "<<resultado;

    resultado = X-Y;
    std::cout<<"\nResta: "<<X<<" - "<<Y<<"= "<<resultado;

    resultado = X*Y;
    std::cout<<"\nMultiplicacion: "<<X<<" * "<<Y<<"= "<<resultado;

    Division = float(X)/Y;
    std::cout<<"\nDivision: "<<X<<" / "<<Y<<"= "<<Division;

    return 0;
}