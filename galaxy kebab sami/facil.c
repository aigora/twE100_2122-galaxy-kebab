#include <stdio.h>
#include <string.h>
#include "facil.h"
#include <stdlib.h>
#include "crono.h"

void juegofacil()
{
    char decision;
    int vidas[1]={5};
     printf("Es sabado por la ma?ana. Has estado estudiando y como hace un buen dia decides irte a comer al Galaxy Kebab\n");
    printf("Cuando llegas el cocinero te saluda amablemente:\n");
    printf("<cocinero> ?Que tal amigo??Te pongo lo de siempre, un durum mixto?\n");
    printf("<tu> Hola! Si lo de siempre, gracias\n");
    printf("El cocinero te da el durum y te sientas a comer tranquilamente\n");
    printf("Despues de estar un rato comiendo, te empiezas a sentir algo mareado, todo se empieza a mover, te caes y pierdes el conocimiento\n");
    system("PAUSE");
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
    fflush(stdin);
    cronosec(0);
   int d, j=0, h=0, a;
   int caso1=0,caso2=0,caso3=0,caso4=0,caso5=0,caso6=0, llave=0;
    printf("Te despiertas en lo que parece un sotano. No es una sala muy grande, pero hace frio. Ves una gran estanteria con cajas, una nevera y \n");
    printf("unas tuberias con goteras. Tambien hay una especie de despacho con una silla, una mesa con un ordenador y un corcho con recortes y fotos.\n");
    printf("En un lado hay una puerta con lo que parecen ara?azos de una persona. Fijandote en la mesa encuentras varias grabadoras.\n");
    printf("Todas estan vacias menos una. En ella reproduces un mensaje en un idioma desconocido pero en una parte entiendes con complicaciones \n");
    printf("algo de un secuestro y de que la persona tendra que ir resolviendo pruebas para salir. Fijandote en todos los recobecos de la sala te das\n");
    printf("cuenta de que en las esquinas superiores hay unos altavoces. \n");
    system("PAUSE");
    buclesala1:
    do
    {
        fflush(stdin);
        printf("?Que quieres mirar ahora? Caja 1 (1), Caja 2 (2), Caja 3 (3), Puerta (4), Nevera (5) o Ordenador (6) \n");
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
            printf("Si lo ves es invierno, si lo pierdes pereces, cada d?a lo tomas mas de 1000 veces. Qu? es?\n");
            printf("(escribe solo la palabra en minusculas)\n");
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
            printf("En que a?o se invento la hamburguesa? En 1895, en 1912 o en 1930?\n");
            printf("(responde contestando el a?o) \n");
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
            if(caso4==0)
            {
                printf("Ves una puerta. Es de madera y tiene muchos ara?azos, como si alguien ya hubiera estado encerrado aqui. La puerta esta cerrada.\n");
                caso4++;
            }

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
            printf("En que a?o se invento el tetra brick? En 1941, en 1957 o en 1963?\n");
            printf("(responde contestando el a?o) \n");
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
   //sala2(vidas);
    }
}

void sala5(int vidas[])
{
    //printf(" \n");
    fflush(stdin);
    cronosec(0);
   int d, j=0, h=0, a;
   int caso1=0,caso2=0,caso3=0,caso4=0,caso5=0,caso6=0, hilo=0, dinamita=0, mechero=0;
    printf("Tras abrirse la puerta bajas unos cuantos tramos de escaleras hasta llegar al comedor del restaurante.\n");
    printf("Es un salon peque?o, con unas cuantas mesas y sillas. En un extremo de la sala esta la puerta que da a la calle, aunque esta cerrada\n");
    printf("Ya no queda nada! En el comedor tambien hay algunas plantas de decoracion y un estante con menus, cubiertos y saleros. Todas las paredes son \n");
    printf("blancas a excepcion de una donde estan pintados todos los menus con sus precios.  \n");
    system("PAUSE");
    buclesala5:
    if((hilo!=0)&&(dinamita!=0)&&(mechero!=0))
    {
        goto finalsala5;
    }
    do
    {
        fflush(stdin);
        printf("?Que quieres mirar ahora? Planta 1 (1), Planta 2 (2), Mesas (3), Pared con los menus (4) o Estante (5) \n");
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
                goto buclesala5;
            }
            char palabra1[20];
            char pregunta1[]="300";
            printf("Ves una planta de aloe vera. Encuentras un papel con la siguiente pregunta:\n");
            printf("Alrededor de cuantos tipos de Aloe vera existen? 150, 300 o 500\n");
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
        printf("Sigues rebuscando por la maceta y encuentras un mechero. Lo guardas por si te hace falta en el futuro.\n");
        mechero++;
        caso1++;
        goto buclesala5;
    }
           break;
        }

    case 2:
        {
             if(caso2!=0)
            {
                 printf("Ya has mirado aqui.\n");
                goto buclesala5;
            }
            char palabra2[20];
            char pregunta2[]="china";
             printf("Ves una maceta con unos cuantos bambus. En un lado encuentras la pregunta:\n");
             printf("De que pais es originario el bambu? \n");
             printf("(escribe solo la palabra en minusculas)\n");
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
        printf("Despues de examinar la planta te acuerdas de que en un episodeo que viste de el ultimo superviviente se puede sacar hilo del bambu.\n");
        printf("Por ello, coges un cuchillo del estante de los cubiertos y consigues un poco hilo. \n");
        hilo++;
        caso2++;
            goto buclesala5;
    }
            break;
        }
    case 3:
        {
             if(caso3!=0)
            {
                 printf("Ya has mirado aqui.\n");
                goto buclesala5;
            }
            char palabra3[20];
            char pregunta3[]="xiii";
            printf("Te fijas en las mesas y sillas a ver si encuentras alguna pista. En general todo el mobiliario esta algo desgastado. \n");
            printf("Ves que en una mesa hay algo grabado:\n");
            printf("De que siglo datan los primeros grabados?\n");
            printf("(responde contestando el siglo en misnuculas y numeros romanos) \n");
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
            goto buclesala5;
    }
            break;
        }

    case 4:
        {
             if(caso4!=0)
            {
                printf("Ya has mirado aqui.\n");
                goto buclesala5;
            }
            char palabra4[20];
            char pregunta4[]="umami";
            printf("Fijandote en la pared te sorprende la cantidad de platos que se cocinan en este restaurante. En los ingredientes encuentras escrito:\n");
            printf("Cual de los cinco sabores basicos significa 'esencia de la delicia' en japones?\n");
            printf("(responde contestando la palabra en minusculas) \n");
            h=0, j=0;
            do
    {

    scanf("%s",palabra4);
    a=strcmp(palabra4,pregunta4);
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
        caso4++;
        goto buclesala5;
    }
            break;
        }
    case 5:
        {
             if(caso5!=0)
            {
                 printf("Ya has mirado aqui.\n");
                goto buclesala5;
            }
             char palabra5[20];
            char pregunta5[]="egipcia";
            printf("Ves un estante con unos cuantos menus, cubiertos y saleros. Mirando los menus encuentras la siguiente pregunta:\n");
            printf("Que civilizacion empezo a usar tenedores?\n");
            printf("(escribe solo el nombre de la civilizacion en misnuculas)\n");
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
             printf("Despues miras en los cajones del mueble y te das cuenta de que hay un falso fondo. Al abrirlo encuentras una dinamita. \n");
             printf("Empizas a pensar en una manera de usarla para salir... \n");
             dinamita++;
             caso5++;
            goto buclesala5;
         }
        break;
    }
    }
    if(vidas[0]>0)
    {
     finalsala5:
         system("PAUSE");
        printf("Con todos los objetos que has conseguido haces un explosivo para abrir la puerta. Colocas la dinamita en la cerradura y la pones el\n");
        printf("hilo que sacaste de la planta. Prendes el hilo con el mechero y rapidamente corres a protegerte detras de unas mesas. \n");
        printf("Esperas unos segundos y... BUM!\n");
        system("PAUSE");
        printf("La puerta se abre de golpe y escapas corriendo. \n");
        printf("Enhorabuena! Has conseguido salir del Galaxy Kebab.");
   printf("Has tardado %ld segundos en pasarte la sala 5.\n",cronosec(1));
    }
}
