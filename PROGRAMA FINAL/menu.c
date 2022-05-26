#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "instrucciones.h"
#include "login.h"
#include "facil.h"
#include "dificil.h"
int main()
{
int op;
char printnick[100];
int numsuarios=0;
usuario datos[100];
 printf("BIENVENIDO AL GALAXY KEBAB.\n");
 printf("\n");
 printf("Estas en el menu,elija una opcion por favor:\n");
 printf("\n");
 printf("Pulse 1 si quiere iniciar el juego.\n");
 printf("Pulse 2 si quiere salir del juego.\n");
 do
 {
     fflush(stdin);
 scanf("%d",&op);
 }
 while(op!=1&&op!=2);
 switch(op)
 {
 case 1:
     {
         printf("Ha iniciado el juego.\n");
         printf("Debe registrarse (pulsando 1) o iniciar sesion (pulsando 2).\n");
         do
         {
             fflush(stdin);
         scanf("%d",&op);
         }
         while((op!=1)&&(op!=2));
         switch(op)
         {
         case 1:
             {
                if(reconocerfich(datos,&numsuarios)==0)
                    {
                        return 0; //se acaba el programa si no hay fichero

				    }
				else
				{
					registrar(printnick,&numsuarios,datos);
				}
				break;
             }
         case 2:
            {
               if(reconocerfich(datos,&numsuarios)==0)
                {
                 return 0; //se acaba el programa si no hay fichero
				}
				else
				{
				login(printnick,&numsuarios,datos);
				}
				break;
            }
         }
     }

 printf("\n");
 printf("Despues de haber iniciado sesion o haberse registrado en el galaxy kebab, toca pasar al siguiente paso.\n");
 inicio1:
 printf("Pulse 1 si desea leer las intrucciones del juego.\n");
 printf("Pulse 2 si desea empezar a jugar.\n");
 do
 {
     fflush(stdin);
 scanf("%d",&op);
 }
 while((op!=1)&&(op!=2));
 switch(op)
 {
 case 1:
     {
    printf("Aqui estan las instrucciones: \n");
    printf("\n");
    printins(); //funcion de instrucciones
    system ("cls");
    goto inicio1;
    break;
     }
 case 2:
     inicio2:
     {
    printf("COMIENZA EL JUEGO.\n");
    break;
     }
 }
 printf("Y por tanto debe escoger un nivel de dificultad.\n");
 printf("\n");
 printf("Pulse 1 si quiere escoger el nivel de dificultad facil.\n");
 printf("Pulse 2 si quiere escoger el nivel de dificultad dificil.\n");
 do
 {
fflush(stdin);
scanf("%d",&op);
 }
 while((op!=1)&&(op!=2));
 switch(op)
 {
   case 1:
       {
           system("cls");
        printf("Ha escogido el nivel facil.\n");
        printf("Por tanto, durante el juego se encontrara con preguntas asequibles.\n");
        printf("Comienza la gran experiencia del scape room GALAXY KEBAB.\n");
        juegofacil();
           break;
       }
   case 2:
    {
        system("cls");
        printf("Ha escogido el nivel dificil.\n");
        printf("Por tanto,durante el juego se encontrara con preguntas mas complejas.\n");
        printf("Comienza la gran experiencia del scape room GALAXY KEBAB.\n");
        juegodificil();
        break;
    }
 }
 printf("\n");
 printf("\n");
 printf("HA TERMINADO LA PARTIDA.\n");
 printf("\n");
 printf("Pulse 1 si desea reiniciar la partida.\n");
 printf("Pulse 2 si desea acabar.\n");
do
 {
fflush(stdin);
scanf("%d",&op);
 }
 while((op!=1)&&(op!=2));
 switch(op)
 {
 case 1:
     {
    goto inicio2;
    break;
     }
 case 2:
    {
        break;
    }
 }
 case 2:
    {
        printf("Hasta pronto!\n");
        break;
    }
}
return 0;
}

