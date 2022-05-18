#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include "facil.h"
#include "crono.h"
void juegofacil()
{
    int vidas[1]={5};
     printf("Es sabado por la mañana. Has estado estudiando y como hace un buen dia decides irte a comer al Galaxy Kebab\n");
    printf("Cuando llegas el cocinero te saluda amablemente:\n");
    printf("<cocinero> ¿Que tal amigo?¿Te pongo lo de siempre, un durum mixto?\n");
    printf("<tu> Hola! Si lo de siempre, gracias\n");
    printf("El cocinero te da el durum y te sientas a comer tranquilamente\n");
    printf("Despues de estar un rato comiendo, te empiezas a sentir algo mareado, todo se empieza a mover, te caes y pierdes el conocimiento\n");
     if(vidas[0]>0)
     {
    sala1(vidas);
     }
      if(vidas[0]>0)
      {
    sala2(vidas);
      }
       if(vidas[0]>0)
       {
    sala5(vidas);
       }
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

}
void sala2(int vidas[])
{
 printf("\n");
    cronosec(0);
    printf("Terminas de subir las escaleras y llegas a una cocina,\n");
    system("PAUSE");
    printf("Hay poca luz pero la justa como para poder ver bien, huele mal y de repente te das cuenta de algo.\n");
    printf("Hay una grabadora sobre la encimera, no la enciendes temiendo que pueda pasar.\n");
    printf("Miras a tu alrededor y ves un telefono fijo que no dudas en coger, no da linea.\n");
    system("PAUSE");
    printf("Tambien ves una foto del secuestrador. Al darte cuenta de que no tienes otra opcion coges la grabadora y la enciendes.\n");
    printf("'Hola amigo, si estas escuchando esto es por que has salido del sotano y ahora estas aqui.\n");
    printf("La realidad es que quiero darte una oportunidad para escapar.\n");
    system("PAUSE");
    printf("Si miras a tu derecha veras una mesa con un plato encima, si levantas el plato encontraras un papel con cinco preguntas\n");
    printf("Estas preguntas tienen una sola respuesta y las primeras letras de cada pregunta formaran una palabra\n");
    printf("Esta palabra es el lugar en el que encontraras un objeto que te ayudara a estar mas cerca de ser libre, buena suerte'\n");
    printf("Estas desconcertado, te acercas a la mesa y ves  el papel, en este pone: \n");
    printf("'Como soy una gran aficionado del cine y de la ingenieria que soy, las preguntas tendran que ver con ello.\n");
    system("PAUSE");
    printf("1. Maquina que pone en rotacion una muestra para la sedimentacion o decantacion de sus componentes.\n");

    char palabra[20];
    int a,h=0,j=0;
    char pregunta1 []="centrifugadora";
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

    printf("2. Pelicula de ciencia ficcion de 1979 conocida tambien como 'el octavo pasajero.\n");

    char pregunta2 []="alien";
    h=0,j=0;
     do
    {
    scanf("%s",palabra);
    a=strcmp(palabra,pregunta2);
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

    printf("3. Pelicula protagonizada por the rock en el que unos amigos entran en un videojuego.\n");

    char pregunta3 []="jumanji";
    h=0,j=0;
     do
    {
    scanf("%s",palabra);
    a=strcmp(palabra,pregunta3);
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

    printf("4. Apellido del cientifico español ganador del premio novel de fisiologia en 1959 .\n");

    char pregunta4 []="ochoa";
    h=0,j=0;
     do
    {
    scanf("%s",palabra);
    a=strcmp(palabra,pregunta4);
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

    printf("5. Nombre del cientifico ganador del nobel en 1922 de apellido bohr.\n");

    char pregunta5 []="niels";
    h=0,j=0;
     do
    {
    scanf("%s",palabra);
    a=strcmp(palabra,pregunta5);
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


    printf("La palabra es cajon.\n");
    printf("Comienzas a buscar rapidamente en todos los cajones de la cocina y encuentras un destornillador\n");
    printf("Guardas el destornillador, y continuas buscando.\n");
    printf("Finalmente encuentras tambien una bombilla de luz ultravioleta que no dudas en conectasçr a el techo.\n");
    printf("Accionas el interruptor. En una de las baldosas de la cocina resalta una X. Rompes la baldosa y encuentras una llave.\n");
    system("PAUSE");
    printf("Sin dudarlo intentas abrir la puerta que podria ser tu salida con la llave y lo consigues.\n");
    printf("Recoges el destornillador y la bombilla de luz  y sigues adelante\n");
     printf("Has tardado %ld segundos en pasarte la sala 2.\n",cronosec(1));
     system("PAUSE");
        }
        }
        }
        }
        }
}

void sala5(int vidas[])
{


}

