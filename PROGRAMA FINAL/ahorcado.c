#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#include "ahorcado.h"
#include "facil.h"
void juegoahorcado(int vidas[])
 {
     char *palabras[] = {"kebab", "informatica", "ingeniero", "mesa", "libro", "programacion", "electrico"}; //palabras guardadas en un vector cadena
     char guardado[100];//
     char letra;//letra que introducira el usuario
     int dimension; //dimension de la palabra escogida aleatoriamente
     int i;//variable para los for
     int check;//variable para controlar el proceso dentro del bucle
     int correctas=0;//contador de letras acertadas
     int comprobar=0;//contador para restar o no las oportunidades
     int oportunidades=11;//variable de oportunidades en este caso van a ser 10
     int win=0;//variable para cuando se consiga la palabra entera se termine el juego
    printf("Ahorcado\n");
    srand(time(NULL));//creacion de un numero aleatorio para escoger aleatoriamente una palabra del vector cadena
    int num = rand();
    num=rand()%5;
    dimension = 0;
    check = 0;
    system("PAUSE");

    do {
        system("cls");
        comprobar=0;//para actualizar la pantalla
        if(check == 0)
            {
         for(i=0;i<strlen(palabras[num]);i++)//comprobar dimension de la palabra escogida
            {
          if(palabras[num][i] == ' ')
          {
            guardado[i] = ' ';
             dimension++;
          }
          else {
             guardado[i] = '_';//imprimir rayas o espacios segun la dimension de la palbra escogida aleatoriamente
             dimension++;
               }
            }
             }

        check = 1; //dar valor a la variable para pasar a la segunda parte del bucle
        guardado[dimension] = '\0';//final del vector cadena guardado
         for(i=0;i<strlen(palabras[num]);i++)
          {
                    if(palabras[num][i] == letra)
                    {
             guardado[i] = letra;//si la letra introducida esta en la palbra se suma uno a la variable de acierto
              correctas++;//sumamos a la variable de letras correctas
              comprobar=1;//y a la variable que mide si el intento ha sido correcto
                    }

          }
         if(comprobar==0)
          {
           oportunidades = oportunidades - 1;
          }
        printf("\n");
        for(i=0;i<strlen(guardado);i++)
        {
         printf(" %c ",guardado[i]);//imprimimos la letra correcta
        }
        printf("\n");
        if(strcmp(palabras[num],guardado) == 0)//con la libreria string.h,comprobamos finalmente con los bucles ya realizados si se ha conseguido la palabra entera
         {
            win = 1;
            break;
         }
        printf("\n");
        printf("Letras Correctas: %d",correctas);
        printf("\n");
        printf("Oportunidades: %d",oportunidades);
        printf("\n");

        if (oportunidades==0)
        {
           break;
        }

        printf("Introduzca una letra:");
        scanf("\n%c",&letra);

    }while(oportunidades != 0);//sale del bucle si las oportunidades se han acabado


    if(win) {
                printf("\n");
        printf("Enhorabuena, has ganado y por tanto has ganado una vida.");
        puntosdevidasumafac(vidas);
    }
    else {
                printf("\n");
        printf("Has perdido y por tanto has perdido una vida.");
        puntosdevidarestafac(vidas);
         }
    printf("\n");

}

