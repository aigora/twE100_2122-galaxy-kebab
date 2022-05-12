#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include "facil.h"
#include "crono.h"
#include "ahorcado.h"

void juegofacil()
{
    int vidas[1]={5};
     printf("Es sabado por la mañana. Has estado estudiando y como hace un buen dia decides irte a comer al Galaxy Kebab\n");
    printf("Cuando llegas el cocinero te saluda amablemente:\n");
    printf("<cocinero> ¿Que tal amigo?¿Te pongo lo de siempre, un durum mixto?\n");
    printf("<tu> Hola! Si lo de siempre, gracias\n");
    printf("El cocinero te da el durum y te sientas a comer tranquilamente\n");
    printf("Despues de estar un rato comiendo, te empiezas a sentir algo mareado, todo se empieza a mover, te caes y pierdes el conocimiento\n");
    sala1(vidas);
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
    fflush(stdin);
    cronosec(0);
   int d, j=0, h=0, a;
   int caso1=0,caso2=0,caso3=0,caso5=0,caso6=0, llave=0;
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
            if(caso1!=0)
            {
                 printf("Ya has mirado aqui.\n");
                goto buclesala1;
            }
            char palabra1[20];
            char pregunta1[]="10000";
            printf("Ves una caja con tomates. Dentro hay un papel con la siguiente pregunta:\n");
            printf("Cuantos tipos de tomates existen? 5000, 10000 o 15000\n");
            printf("(responde contestando el numero) \n");
             h=0, j=0;
            do
    {

    scanf("%s",palabra1);
    a=strcmp(palabra1,pregunta1);
    if(a!=0)
    {
    h++;
    printf("MAL ,Te quedan %d intentos.\n",3-h);
    if(h==3)
    {
        printf("Has perdido una vida!\n");
        vidas[0]=puntosdevidarestafac(vidas);
    }
    j++;
    }
    if(a==0)
    {
        printf("CORRECTO.\n");
        if(h==0)
        {
            printf("Has ganado una vida!\n");
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
        printf("Tras responder la pregunta en voz alta suenan unos altavoces:\n");
        printf("Lo estas haciendo muy bien. La tuberia roja no te llama la atencion?\n");
        system("PAUSE");
        printf("Miras detras de la tuberia roja y encuentras una llave que podria abrir la puerta. \n");
        llave++;
        caso1++;
        goto buclesala1;
    }
           break;
        }

    case 2:
        {
             if(caso2!=0)
            {
                 printf("Ya has mirado aqui.\n");
                goto buclesala1;
            }
            char palabra2[20];
            char pregunta2[]="aliento";
             printf("Ves una caja con unas lechugas. Una de ellas es muy rara, asi que la coges para inspeccionarla.\n");
            printf("Al cogerla te das cuenta de que es de plastico y que lleva la siguiente adivinanza escrita: \n");
            printf("Si lo ves es invierno, si lo pierdes pereces, cada día lo tomas mas de 1000 veces. Qué es?\n");
            printf("(escribe solo la palabra en minusculas)");
             h=0, j=0;
            do
    {

    scanf("%s",palabra2);
    a=strcmp(palabra2,pregunta2);
    if(a!=0)
    {
    h++;
    printf("MAL ,Te quedan %d intentos.\n",3-h);
    if(h==3)
    {
        printf("Has perdido una vida!\n");
        vidas[0]=puntosdevidarestafac(vidas);
    }
    j++;
    }
    if(a==0)
    {
        printf("CORRECTO.\n");
        if(h==0)
        {
            printf("Has ganado una vida!\n");
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
        caso2++;
            goto buclesala1;
    }
            break;
        }
    case 3:
        {
             if(caso3!=0)
            {
                 printf("Ya has mirado aqui.\n");
                goto buclesala1;
            }
            char palabra3[20];
            char pregunta3[]="1895";
            printf("Ves una caja con unos cuantos panes. Tienes algo de hambre asi que aprovechas y te comes unos.");
            printf("En el fondo de la caja encuentras la siguiente pregunta: \n");
            printf("En que año se invento la hamburguesa? En 1895, en 1912 o en 1930?\n");
            printf("(responde contestando el año) \n");
             h=0, j=0;
            do
    {

    scanf("%s",palabra3);
    a=strcmp(palabra3,pregunta3);
    if(a!=0)
    {
    h++;
    printf("MAL ,Te quedan %d intentos.\n",3-h);
    if(h==3)
    {
        printf("Has perdido una vida!\n");
        vidas[0]=puntosdevidarestafac(vidas);
    }
    j++;
    }
    if(a==0)
    {
        printf("CORRECTO.\n");
        if(h==0)
        {
            printf("Has ganado una vida!\n");
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
        caso3++;
            goto buclesala1;
    }
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
             if(caso5!=0)
            {
                printf("Ya has mirado aqui.\n");
                goto buclesala1;
            }
            char palabra5[20];
            char pregunta5[]="1963";
            printf("Abres la nevera. No hay mas que varios paquetes de filetes de carne y un brick de leche. te fijas en la pegatina del brick y cuentras esto:\n");
            printf("En que año se invento el tetra brick? En 1941, en 1957 o en 1963?\n");
            printf("(responde contestando el año) \n");
            h=0, j=0;
            do
    {

    scanf("%s",palabra5);
    a=strcmp(palabra5,pregunta5);
    if(a!=0)
    {
    h++;
    printf("MAL ,Te quedan %d intentos.\n",3-h);
    if(h==3)
    {
        printf("Has perdido una vida!\n");
        vidas[0]=puntosdevidarestafac(vidas);
    }
    j++;
    }
    if(a==0)
    {
        printf("CORRECTO.\n");
        if(h==0)
        {
            printf("Has ganado una vida!\n");
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
        caso5++;
        goto buclesala1;
    }
            break;
        }
    case 6:
        {
             if(caso6!=0)
            {
                 printf("Ya has mirado aqui.\n");
                goto buclesala1;
            }
             char palabra6[20];
            char pregunta6[]="turquia";
            printf("Vas al ordenador y lo enciendes. En la pantalla encuentras la siguiente pregunta: \n");
            printf("De que pais es originario el kebab?\n");
            printf("(escribe el pais con todas las letras minusculas y sin tildes)\n");
            h=0, j=0;
            do
    {

    scanf("%s",palabra6);
    a=strcmp(palabra6,pregunta6);
    if(a!=0)
    {
    h++;
    printf("MAL ,Te quedan %d intentos.\n",3-h);
    if(h==3)
    {
        printf("Has perdido una vida!\n");
        vidas[0]=puntosdevidarestafac(vidas);
    }
    j++;
    }
    if(a==0)
    {
        printf("CORRECTO.\n");
        if(h==0)
        {
            printf("Has ganado una vida!\n");
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
             caso6++;
            goto buclesala1;
         }
        break;
    }
    }
    if(vidas[0]>0)
    {
     finalsala1:
          printf("Tras pasar ves unas escaleras y subes en busca de una salida.\n");
   printf("Has tardado %ld segundos en pasarte la sala 1.\n",cronosec(1));
   sala2(vidas);
    }
}
void sala2(int vidas[])
{
    cronosec(0);
    system("PAUSE");
    system("cls");
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

    sala5(vidas);
        }
        }
        }
        }
        }

}

void sala5(int vidas[])
{
     printf("%d\n",vidas[0]);

}

