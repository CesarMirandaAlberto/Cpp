/*
            **** OPERADORES RELACIONALES Y TERNARIO ****

    El presente código implementa el uso de algunos de los operadores relaciones
    en conjunto con el operador ternario para asignar en este caso un texto a una 
    variable string, un char y un número entero a la variable según corresponda.

    ** OPERADOR TERNARIO **
    (CONDICIÓN "OPERADORES RELACIONALES") ? Si se cumple : Si no se cumple;

*/

//Inclusión de librerias
#include <iostream>

//Función principal
int main()
{
    //Declaración de variables
    int X;
    int Y;
    int Mayor;

    X = 9;
    Y = 7;
    
    // CALCULOS
    std::string Igualdad = (X == Y) ? "Son iguales " : "No son iguales ";
    std::cout<<"Los numeros "<<Igualdad;

    char DIguales = (X != Y) ? 'D' : 'I';
    std::cout<<DIguales;

    Mayor = (X > Y) ? X : Y;
    std::cout<<"\nEl numero mayor es el: "<<Mayor;

    return 0;
}