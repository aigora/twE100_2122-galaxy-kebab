#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "facil.h"
#include "dificil.h"
#include "tresenraya.h"

void juegotresenraya(int vidas[])
{
    char tab [3][3];//tablero
    llamada(tab,vidas);//llama a las funciones

}
void llamada(char tab[3][3],int vidas[])
{
  int i,j;
  i=0;
  valores(tab);
  do
  {
      system("cls");
      tablero(tab);
      if(i%2==0)//si es par le toca al usuario
      {
          turnousuario(tab);
      }
      else//sino le toca al pc
      {
          turnopc(tab);
      }
      j=situaciones(tab); //comprobamos el resultado, adquiriendo el valor de la variable j
      i++;

  }while(i<=9&&j==2);//se mantiene en el bucle cuando se haya jugado menos o igual de 9 jugadas o haya empate

      system("cls");
      tablero(tab);//imprimimos el tablero
  if(j==0)//ha ganado ya que devolvio un 0
  {
      printf("Enhorabuena, has ganado.\n");
      puntosdevidasumafac(vidas);
  }
  else if(j==1)//ha perdido ya que devolvio un 1
  {
      printf("Has perdido.\n");
      puntosdevidarestafac(vidas);
  }
  else
  {
      printf("Has emapatado.\n");
  }
}
void valores(char tab[3][3])
{
  int i,j;
  char h='1';
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
          tab[i][j]= h++; //se le añade los valores del 1 al 9 en orden a la matriz
      }
  }
}
void turnousuario(char tab[3][3])
{
    char decision;
    int i,j,k;
 do
 {
     do
     {
      printf("\nColoca tu ficha: ");
      fflush(stdin);
      scanf("%c",&decision);//lee la posicion escogida del usuario
     }while(decision<'1'||decision>'9');
     k=0;
     switch(decision) //comprobamos si la posicion esta ocupada,por tanto tenemos que comprobar todas las posiciones
     {
    case '1':
        {
            i=0;
            j=0;
            if(tab[i][j]=='X'|| tab[i][j]=='O')
            {
                k=1;
                printf("Casilla ocupada.\n");
            }
            break;
        }
          case '2':
        {
            i=0;
            j=1;
            if(tab[i][j]=='X'|| tab[i][j]=='O')
            {
                k=1;
                printf("Casilla ocupada.\n");
            }
            break;
        }
          case '3':
        {
            i=0;
            j=2;
            if(tab[i][j]=='X'|| tab[i][j]=='O')
            {
                k=1;
                printf("Casilla ocupada.\n");
            }
            break;
        }
          case '4':
        {
            i=1;
            j=0;
            if(tab[i][j]=='X'|| tab[i][j]=='O')
            {
                k=1;
                printf("Casilla ocupada.\n");
            }
            break;
        }
          case '5':
        {
            i=1;
            j=1;
            if(tab[i][j]=='X'|| tab[i][j]=='O')
            {
                k=1;
                printf("Casilla ocupada.\n");
            }
            break;
        }
          case '6':
        {
            i=1;
            j=2;
            if(tab[i][j]=='X'|| tab[i][j]=='O')
            {
                k=1;
                printf("Casilla ocupada.\n");
            }
            break;
        }
          case '7':
        {
            i=2;
            j=0;
            if(tab[i][j]=='X'|| tab[i][j]=='O')
            {
                k=1;
                printf("Casilla ocupada.\n");
            }
            break;
        }
          case '8':
        {
            i=2;
            j=1;
            if(tab[i][j]=='X'|| tab[i][j]=='O')
            {
                k=1;
                printf("Casilla ocupada.\n");
            }
            break;
        }
          case '9':
        {
            i=2;
            j=2;
            if(tab[i][j]=='X'|| tab[i][j]=='O')
            {
                k=1;
                printf("Casilla ocupada.\n");
            }
            break;
        }

     }
 }while(k==1);
 tab[i][j]= 'X'; //el usuario va a tener la X como ficha,e imprime la X en la casilla no ocupada
}
void turnopc(char tab[3][3])
{
    int i,j,k;
    srand(time(NULL));//generamos dos numero aleatorios para conseguir una posicion de la matriz
    do
    {
        i=rand()%3;
        j=rand()%3;
        k=0;
        if(tab[i][j]=='X'||tab[i][j]=='O')
        {
            k=1;
        }
    }while(k==1);//sale del bucle si la posicion escogida no esta ocupada
    tab[i][j]='O';//la ficha del pc es el circulo

}
void tablero(char tab[3][3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(j<2)
            {
            printf(" %c |",tab[i][j]);//imprime el numero y la separacion
            }
            else
            {
                printf(" %c ",tab[i][j]);//imprime el ultimo numero de la fila
            }
        }
        if(i<2)
        {
        printf("\n-----------\n");//separacion entre filas
        }
    }
    printf("\n\n");
}
int situaciones(char tab[3][3])
{
  if(tab[0][0]=='X'||tab[0][0]=='0')//si la posicion 1 1 esta ocupada por una x o por un circulo
  {
      if(tab[0][0]==tab[0][1]&&tab[0][0]==tab[0][2])//primera fila igual
      {
          if(tab[0][0]=='X')
          {
              return 0;//gana el usuario
          }
          else
          {
              return 1;//gana el pc
          }
      }
      if(tab[0][0]==tab[1][0]&&tab[0][0]==tab[2][0])//primera columna igual
      {
         if(tab[0][0]=='X')
          {
              return 0;
          }
          else
          {
              return 1;
          }
      }
  }
  if(tab[1][1]=='X'||tab[1][1]=='O')//la casilla numero 5 ocupada
  {
      if(tab[1][1]==tab[0][0]&&tab[1][1]==tab[2][2])//la diagonal principal igual
      {
        if(tab[1][1]=='X')
          {
              return 0;
          }
          else
          {
              return 1;
          }
      }
      if(tab[1][1]==tab[1][0]&&tab[1][1]==tab[1][2])//segunda fila igual
      {
          if(tab[1][1]=='X')
          {
              return 0;
          }
          else
          {
              return 1;
          }
      }
      if(tab[1][1]==tab[2][0]&&tab[1][1]==tab[0][2])//diagonal secundaria igual
      {
          if(tab[1][1]=='X')
          {
              return 0;
          }
          else
          {
              return 1;
          }
      }
      if(tab[1][1]==tab[0][1]&&tab[1][1]==tab[2][1])//la segunda columna igual
      {
          if(tab[1][1]=='X')
          {
              return 0;
          }
          else
          {
              return 1;
          }
      }

  }
  if(tab[2][2]=='X'||tab[2][2]=='O')//casilla numero 9 ocupada
  {
      if(tab[2][2]==tab[2][0]&&tab[2][2]==tab[2][1])//ultima fila igual
      {
          if(tab[2][2]=='X')
          {
              return 0;
          }
          else
          {
              return 1;
          }
      }
       if(tab[2][2]==tab[0][2]&&tab[2][2]==tab[1][2])//ultima columna igual
      {
          if(tab[2][2]=='X')
          {
              return 0;
          }
          else
          {
              return 1;
          }
      }
  }
  return 2;//si hay empate
}

