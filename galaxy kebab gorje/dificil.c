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
    char palabra[20];
    int a,j=0,h=0;
    char pregunta1[]="Edison";
    system("PAUSE");
    printf("Se cierra la pesada puerta metalica detras de ti con un sonido seco.\n");
    printf("Tratas de volver a abrirla pero esta bloqueada y no puedes.\n");
    system("PAUSE");
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
    scanf("%s",palabra);
    a=strcmp(palabra,pregunta1);
    if(a!=0)
    {
    h++;
    printf("MAL ,Te quedan %d intentos.\n",3-h);
    if(h==3)
    {
        vidas[0]=puntosdevidarestafac(vidas);
    }
    j++;
    }
    if(a==0)
    {
        printf("CORRECTO.\n");
         if(h==0)
        {
            vidas[0]=puntosdevidasumafac(vidas);
        }
    }
    }while((a!=0)&&(j<3));
    printf("Tienes %d vidas.\n",vidas[0]);
    if(vidas[0]==0 || vidas[0]<0)
    {
        fin();
    }
    else
        {


    printf("Se encienden las luces de repente y quedas cegado unos segundos.\n");

    sala4(vidas);
    }

}
void sala4(int vidas[])
{
printf("dkjfhgdjskldñfkgjnbjdnkzml,ñzcvlmkbn");
}
