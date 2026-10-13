#include <stdio.h>
#include <stdlib.h>

int main(void) {

    char buffer[30];
    char *endptr;

    printf("Ingreso de tiempo y distancia del participante\n");
    printf("Por favor ingresa los minutos del participante\n:");
    fgets(buffer, 6, stdin);
    double minutos = strtod(buffer, &endptr);

    printf("Por favor ingresa los segundos del participante\n:");
    fgets(buffer, 6, stdin);
    double segundos = strtod(buffer, &endptr);

    printf("Por favor ingresa las centésimas del participante\n:");
    fgets(buffer, 6, stdin);
    double centesimas = strtod(buffer, &endptr);


    printf("Por favor ingresa la distancia recorrida en metros del participante\n:");
    fgets(buffer, 6, stdin);
    double distancia = strtod(buffer, &endptr);

     const double tiempoEnSegundos = minutos * 60 + segundos + (centesimas / 100);
     const double velocidadMetrosSegundo = distancia / tiempoEnSegundos;
     const double velocidadKilometorHora = (velocidadMetrosSegundo * 3600) / 1000;

    printf("El participante hizo un tiempo de: %2lf segundos\n", tiempoEnSegundos);
    printf("El participante recorrió %2lf metros por segundo\n", velocidadMetrosSegundo);
    printf("El participante recorrió %2lf kilómetros por hora\n", velocidadKilometorHora);
    return 0;
}
