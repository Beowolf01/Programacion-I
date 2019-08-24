#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    int contador=0;
    int dinero;
    char tipo;
    int primerDolar;
    int dolarMaximo;
    int acumPositivos=0;
    int contadorDolares=0;
    float promPositivos;


    while(contador<2)
    {
        contador++;
        printf("\nIngrese un importe de dinero: ");
        scanf("%d", &dinero);
        printf("\nIngrese tipo de dinero: (b,l,d,p): ");
        tipo = tolower(getche());

        if(tipo=='d')
        {
            if(primerDolar==1)
            {
                dolarMaximo=dinero;
                primerDolar=0;
            }
            else
            {
                if(dinero>dolarMaximo)
                {
                    dolarMaximo=dinero;
                }
            }
        }
        if(dinero>0)
        {
            contadorDolares++;
            acumPositivos = acumPositivos + dinero;
        }

    }
    if(primerDolar==1)
    {
        printf("No ingreso dolares ");

    }
    else
    {
        printf("\nEl importe maximo en dolares es: %d", dolarMaximo);
    }
    promPositivos = (float) acumPositivos/contadorDolares;
    printf("\nEl promedio de positivos es: %f", promPositivos);

    return 0;
}
