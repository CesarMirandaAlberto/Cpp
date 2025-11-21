/*
                **** NAMESPACES ****
    El presente código implementa el uso de namespaces creados para x utilidad
    se implementan dos namespace con la misma variable Temperatura pero con
    diferente tipo de dato int y float a fin de analizar el funcionamiento de  
    los namespace mientras que el tercer namespace es variable de tipo string
    donde las variables antes mencionadas son utilizadas en la función principal.
    
*/

//Inclusión de librerias
#include <iostream>

//Definición de los namespaces
namespace Aproximacion{
    int Temperatura= 27;
}
namespace Exactitud{
    float Temperatura = 27.54321;
}
namespace Mensaje{

    std::string Temperatura = "La temperatura es: ";
}

//Función principal
int main()
{
    //Utilización de los namespaces
    std::cout<<Mensaje::Temperatura;
    std::cout<<"\nTemperatura aproximada: "<<Aproximacion::Temperatura;
    std::cout<<"\nTemperatura exacta: "<<Exactitud::Temperatura;

    return 0;
}