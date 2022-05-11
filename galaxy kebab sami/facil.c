#include <stdio.h>
#include <string.h>
#include "facil.h"
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
cronosec(0);
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

}
void sala5(int vidas[])
{

}
