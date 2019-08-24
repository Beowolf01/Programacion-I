#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main()
{
    int edad;
    float altura;
    char sexo;
    char seguir;//Solo necesito inicializarla si es un while solo y no un do while.
    int edadMujerMasVieja;
    float alturaMujerMasVieja;
    int edadMin;
    float alturaPersonaMasJoven;
    int edadHombreMasBajo;
    float minimaAltura;
    int acumuladorDeEdades=0;
    int contadorPersonas=0;
    float promedioEdades;
    float acumuladorDeAlturas=0;
    float promedioAlturas;
    int flagPetiso = 0;
    int flagPersonaJoven=0;
    int flagVieja=0;


    do
    {
        printf("Ingrese la edad: ");
        scanf("%d", &edad);
        while(edad<0 || edad>100)
        {
            printf("Reingrese la edad: ");
            scanf("%d", &edad);
        }
        printf("Ingrese la altura: ");
        scanf("%f", &altura);
        while(altura<1 || altura>2)
        {
            printf("Reingrese la altura: ");
            scanf("%f", &altura);
        }
        printf("Ingrese sexo (f/m): ");
        sexo = getche();
        sexo = tolower(sexo);
        while(sexo!='f' && sexo!='m')
        {
            printf("\nReingrese sexo: ");
            sexo=tolower(getche());
        }
        if(sexo=='f')
        {
            if(flagVieja == 0 || edad>edadMujerMasVieja)
            {
                edadMujerMasVieja = edad;
                alturaMujerMasVieja = altura;
                flagVieja = 1;
            }
        }
        else
        {
            if(flagPetiso=0 || altura<minimaAltura)
            {
                minimaAltura = altura;
                edadHombreMasBajo = edad;
                flagPersonaJoven = 1;
            }
        }

        if(flagPersonaJoven==0 || edad<edadMin)
        {
            edadMin = edad;
            alturaPersonaMasJoven = altura;
            flagPersonaJoven = 1;
        }

        contadorPersonas++;
        acumuladorDeEdades = acumuladorDeEdades + edad;
        acumuladorDeAlturas = acumuladorDeAlturas + altura;

        printf("\nDesea continuar? (s/n): ");
        fflush(stdin);
        scanf("%c", &seguir);

    }while(seguir == 's');
    promedioEdades = (float)acumuladorDeEdades/contadorPersonas;
    promedioAlturas = acumuladorDeAlturas/contadorPersonas;

    printf("La altura de la mujer mas vieja es: %f\n", alturaMujerMasVieja);
    printf("La altura de la persona mas joven es: %f\n", alturaPersonaMasJoven);
    printf("La edad del hombre mas bajo es: %d\n", edadHombreMasBajo);
    printf("El promedio de edades es:: %f\n", promedioEdades);
    printf("El promedio de altura es: %f", promedioAlturas);
    return 0;
}
