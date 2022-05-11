#include <stdio.h>
#include <string.h>
#include "facil.h"
#include <stdlib.h>
void juegofacil()
{
    char decision;
    int vidas[1]={5};
     printf("Es sabado por la mañana. Has estado estudiando y como hace un buen dia decides irte a comer al Galaxy Kebab\n");
    printf("Cuando llegas el cocinero te saluda amablemente:\n");
    printf("<cocinero> ¿Que tal amigo?¿Te pongo lo de siempre, un durum mixto?\n");
    printf("<tu> Hola! Si lo de siempre, gracias\n");
    printf("El cocinero te da el durum y te sientas a comer tranquilamente\n");
    printf("Despues de estar un rato comiendo, te empiezas a sentir algo mareado, todo se empieza a mover, te caes y pierdes el conocimiento\n");
    sala1(vidas);
    sala2(vidas);
    sala5(vidas);

}
int puntosdevidasumafac(int vidas[])
{
   return vidas[0]=vidas[0]+1;
}
int puntosdevidarestafac(int vidas[])
{
   return vidas[0]=vidas[0]-1;

}
void fin()
{
    printf("Usted ha perdido todas las vidas por tanto se acaba el juego aqui.\n");
    printf("Suerte para la proxima vez.\n");
    printf("END GAME.\n");
}
void sala1(int vidas[])
{
    int op;
    printf("1 O 2.\n");
    fflush(stdin);
    scanf("%d",&op);
    switch(op)
    {
    case 1:
        {
        printf("HOLA.\n");
        puntosdevidasumafac(vidas);
        printf("%d",vidas[0]);
        break;
        }
    case 2:
        {
        printf("ADIOS.\n");
        break;
        }
    }
    int d;
    printf("Te despiertas en lo que parece un sotano. No es una sala muy grande, pero esta muy sucia. Es,\n");
    buclesala1:
    do
    {
        printf("¿Que quieres mirar ahora?");
        scanf("%d",&d);
    }
    while((d<1)||(d>7));
    switch(d)
    {
    case 1:
        {
            goto buclesala1;
            break;
        }
    case 2:
        {
            goto finalsala1;
            break;
        }
    case 3:
        {
            printf("Solo ves una caja con unas lechugas");
            goto buclesala1;
            break;
        }
    case 4:
        {
            printf("Solo ves una caja con unos cuantos panes");
            goto buclesala1;
            break;
        }
    case 5:
        {
            goto buclesala1;
            break;
        }
    case 6:
        {
            goto buclesala1;
            break;
        }
    case 7:
        {
            goto buclesala1;
            break;
        }
    }
    finalsala1:
        printf("sales");
}
void sala2(int vidas[])
{
    printf("terminas de subir las escaleras y llegas a una cocina,\n");
    system("PAUSE");
    printf("hay poca luz pero la justa como para poder ver bien, huele mal y de repente te das cuenta de algo.\n");
    printf("Hay una grabadora sobre la encimera, no la enciendes temiendo que pueda pasar.\n");
    printf("Miras a tu alrededor y ves un telefono fijo que no dudas en coger, no da linea.\n");
    system("PAUSE");
    printf("Tambien ves una foto del secuestrador. Al darte cuenta de que no tienes otra opcion coges la grabadora y la enciendes.\n");
    printf("'Hola amigo, si estas escuchando esto es por que has salido del sotano y ahora estas aqui.\n");
    printf("La realidad es que quiero darte una oportunidad para escapar.\n");
    system("PAUSE");
    printf("si miras a tu derecha veras una mesa con un plato encima, si levantas el plato encontraras un papel con cinco preguntas\n");
    printf("estas preguntas tienen una sola respuesta y las primeras letras de cada pregunta formaran una palabra\n");
    printf("esta palabra es el lugar en el que encontraras un objeto que te ayudara a estar mas cerca de ser libre, buena suerte'\n");
    printf("estas desconcertado, te acercas a la mesa y ves  el papel, en este pone: \n");
    printf("'como soy una gran aficionado del cine y de la ingenieria que soy, las preguntas tendran que ver con ello.\n");
    system("PAUSE");
    printf("1. Maquina que pone en rotacion una muestra para la sedimentacion o decantacion de sus componentes.\n");
    printf("2. pelicula de ciencia ficcion de 1979 conocida tambien como 'el octavo pasajero.\n");
    printf("3. pelicula protagonizada por the rock en el que unos amigos entran en un videojuego.\n");
    printf("4. apellido del cientifico español ganador del premio novel de fisiologia en 1959 .\n");
    printf("5. nombre del cientifico ganador del nobel en 1922 de apellido bohr.\n");
}

void sala5(int vidas[])
{

}

