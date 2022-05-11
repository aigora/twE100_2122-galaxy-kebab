#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dificil.h"
#include "facil.h"
void juegodificil()
{
    char decision;
    int vidas[1]={3};
    sala3(vidas);

}

void sala3(int vidas[])
{
    char letra;
    char palabra[20];
    char pregunta1[]="Edison";
    int a ;

    system("PAUSE");
    printf("Se cierra la pesada puerta metalica detras de ti con un sonido seco.\n");
    printf("Tratas de volver a abrirla pero esta bloqueada y no puedes.\n");
    printf("No ves nada. Te encuentras en una habitacion oscura, sin luces ni ventanas\n");
    printf("Empiezas a tocar todas las paredes tratando de encontrar un interruptor.\n");
    system("PAUSE");
    printf("Y de repente,... EUREKA!\n");
    printf("Has encontrado lo que parece un cuadro de luces, pero...\n");
    system("PAUSE");
    printf("Para poder encender los plomos deberas contestar una pregunta.\n");
    system("PAUSE");
    printf("Quien fue el inverntor de la bombilla incandescente? y recuerda que los nombres propios empiezan en mayuscula.\n");

    do
    {
    fflush(stdin);
    scanf("%s",palabra);
    a=strcmp(pregunta1,palabra);
     if(a==1)
     {
     printf("MAL.\n");
     printf("Tienes %d vidas",puntosdevidarestafac(vidas));
     }
    }while(a==1);
    printf("CORRECTO.\n");
    printf("Tienes %d vidas.\n",vidas[0]);


    printf("Se encienden las luces de repente y quedas cegado unos segundos.\n");
    printf(".\n");



    sala3(vidas);
}
void sala4(int vidas[])
{
printf("dkjfhgdjskldñfkgjnbjdnkzml,ñzcvlmkbn");
}
