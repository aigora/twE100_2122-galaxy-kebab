#include <stdio.h>
#include <math.h>
int main()
{
int op1,op2,op3,op4,op5;
 printf("BIENVENIDO A GALAXY KEBAB.\n");
 printf("\n");
 printf("Usted tiene varias opciones en este menu como por ejemplo:\n");
 printf("\n");
 printf("Pulse 1 si quiere iniciar el juego.\n");
 printf("Pulse 2 si quiere salir del juego.\n");
 do
 {
 scanf("%d",&op1);
 }
 while((op1<1)||(op1>2));
 switch(op1)
 {
 case 1:
     {
         printf("Ha iniciado el juego.\n");
         printf("Debe registrarse (pulsando 1) o iniciar sesion (pulsando 2).\n");
         do
         {
         scanf("%d",&op2);
         }
         while((op2<1)||(op2>2));
         switch(op2)
         {
         case 1:
             {
                 printf("Introduzca el nombre (maximo 10 caracteres): \n");
                 printf("Introduzca la contraseña: \n");
                 break;
             }
         case 2:
            {
                printf("Introduzca el nombre: \n");
                 printf("Introduzca la contraseña: \n");
                break;
            }
         }
     }

 printf("\n");
 inicio1:
 printf("Despues de haber iniciado sesion o haberse registrado en galaxy kebab. Toca pasar al siguiente paso.\n");
 printf("Pulse 1 si desea leer las intrucciones del juego.\n");
 printf("Pulse 2 si desea empezar a jugar.\n");
 do
 {
 scanf("%d",&op3);
 }
 while((op3<1)||(op3>2));
 switch(op3)
 {
 case 1:
     {
    printf("Aqui estan las instrucciones: \n");
    printf("\n");
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
 scanf("%d",&op4);
 }
 while((op4<1)||(op4>2));
 switch(op4)
 {
   case 1:
       {
           printf("Ha escogido el nivel facil.\n");
           printf("Por tanto, durante el juego se encontrara con preguntas asequibles.\n");
            printf("......................................................................\n");
        printf("Comienza la gran experiencia de el scape room GALAXY KEBAB");
           break;
       }
   case 2:
    {
        printf("Ha escogido el nivel dificil.\n");
        printf("Por tanto,durante el juego se encontrara con preguntas mas complejas.\n");
        printf("......................................................................\n");
        printf("Comienza la gran experiencia de el scape room GALAXY KEBAB\n");
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
 scanf("%d",&op5);
 }
 while((op5<1)||(op5>2));
 switch(op5)
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
}
