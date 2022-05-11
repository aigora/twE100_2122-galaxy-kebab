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
    system("PAUSE");
    sala1(vidas);
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
    //printf(" \n");
    int d, j=0, h=0, a, llave=0;
    printf("Te despiertas en lo que parece un sotano. No es una sala muy grande, pero hace frio. Ves una gran estanteria con cajas, una nevera y \n");
    printf("unas tuberias con goteras. Tambien hay una especie de despacho con una silla, una mesa con un ordenador y un corcho con recortes y fotos. \n");
    printf("En un lado hay una puerta con lo que parecen arañazos de una persona. Fijandote en la mesa encuentras varias grabadoras.\n ");
    printf("Todas estan vacias menos una. En ella reproduces un mensaje en un idioma desconocido pero en una parte entiendes con complicaciones \n");
    printf("algo de un secuestro y de que la persona tendra que ir resolviendo pruebas para salir. Fijandote en todos los recobecos de la sala te das\n");
    printf("cuenta de que en las esquinas superiores hay unos altavoces. \n");
    system("PAUSE");
    buclesala1:
    do
    {
        fflush(stdin);
        printf("¿Que quieres mirar ahora? Caja 1 (1), Caja 2 (2), Caja 3 (3), Puerta (4), Nevera (5) o Ordenador (6) \n");
        printf("Para indicar lo que quieres mirar escribe solo el numero del objeto \n");
        scanf("%d",&d);
    }
    while((d<1)||(d>6));
    switch(d)
    {
    case 1:
        {
            printf("Ves una caja con tomates. Dentro hay un papel con la siguiente prueba:\n");

            printf("Miras detras de la tuberia roja y encuentras una llave que podria abrir la puerta. \n");
            llave++;
            goto buclesala1;
            break;
        }

    case 2:
        {
            printf("Ves una caja con unas lechugas. Una de ellas es muy rara, asi que la coges para inspeccionarla.\n");
            printf("Al cogerla te das cuenta de que es de plastico y que lleva escrito lo siguiente: \n");
            goto buclesala1;
            break;
        }
    case 3:
        {
            printf("Ves una caja con unos cuantos panes. Tienes algo de hambre asi que aprovechas y te comes uno.");
            goto buclesala1;
            break;
        }
    case 4:
        {
            printf("Ves una puerta. Es de madera y tiene muchos arañazos, como si alguien ya hubiera estado encerrado aqui. La puerta esta cerrada.\n");
            if(llave==0)
            {
                printf("Hace fala una llave para abrirla\n");
            }
            else
            {
                printf("Pruebas la llave que has encontrado y haciendo un poco de fuerza consigues abrirla\n");
                goto finalsala1;
            }
            goto buclesala1;
            break;
        }
    case 5:
        {
            printf("Abres la nevera. No hay mas que varios paquetes de filetes de carne y un brick de leche. te fijas en la pegatina del brick y cuentras esto:\n");
            goto buclesala1;
            break;
        }
    case 6:
        {
            char palabra[20];
            char pregunta1[]="mesa";
            printf("Vas al ordenador y lo enciendes. En la pantalla encuentras lo siguiente: \n");
            do
    {

    scanf("%s",palabra);
    a=strcmp(palabra,pregunta1);
    if(a!=0)
    {
    h++;
    printf("MAL ,Te quedan %d.\n",3-h);
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
            goto buclesala1;
        }
        break;
    }
    finalsala1:
        printf("Tras pasar ves unas escaleras y subes en busca de una salida.");
}

}

void sala5(int vidas[])
{

}
