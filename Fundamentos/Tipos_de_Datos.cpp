/*
        ***** TIPOS DE DATOS ****

    El presente código implementa el uso de diferentes tipos de datos disponibles 
    en C++, solamente son algunos.
    El código simula almacenar los datos de un alumno con datos de diferente tipo.

    CASO DE PRUEBA: Para analizar el funcionamiento del los tipos de datos se cambian
    los valores de algunas de las variables y constante para analizar el comportamiento
    del programa.

*/

#include <iostream>

int main()
{
    //Constantes
    const int Matricula = 12345;

    //Declaracion de variables
   //Enteros
    int Grado;

    //Flotantes
    float Promedio;
    double PromedioGral;

    //Char
    char TipoAlumno;


    //Cadena de caracteres
    std::string Nombre ="ALUMNO 1";
    //Booleanos
    bool Estatus;

    //Asingnaci�n de valores
    Grado= 9;
    Promedio = 9.3;
    PromedioGral = 9.34562;
    TipoAlumno = 'E';
    Estatus = true;


   
    // **** CASO DE PRUEBA **** descomentar las siguientes tres lines
    //    Matricula = 678910;
    //    Promedio = 9.3;
    //    Estatus = false;
    

    //Impresión de valores
    std::cout<<"Matricula: "<<Matricula;
    std::cout<<"\nNombre: "<<Nombre;
    std::cout<<"\nGrado: "<<Grado;
    std::cout<<"\nPromedio: "<<Promedio;
    std::cout<<"\nPromedio general: "<<PromedioGral;
    std::cout<<"\nTipo de alumno: "<<TipoAlumno;
    std::cout<<"\nEstatus: "<<Estatus;

    return 0;

}
