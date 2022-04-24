#include <stdio.h>
#include <string.h>
#include "facil.h"
void preguntas()
{
    char decision;
    int vidas=5;
    printf("Ha entrado en el establecimiento GALAXY KEBAB.\n");
    printf("Tienes %d vidas.\n",vidas);
    printf("Pierdes vida (S) Ganas vida extra(N)\n");
    fflush(stdin);
    scanf("%c",&decision);
    do
    {
        if(decision=='S')
        {
        printf("Ahora tienes %d vidas.\n",puntosdevidaresta(vidas));
        }
        if(decision=='N')
        {
             printf("Ahora tienes %d vidas.\n",puntosdevidasuma(vidas));
        }

    }
    while(decision!='S'&& decision!='N');
}
int puntosdevidasuma(int vidas)
{
   return vidas=vidas+1;
}
int puntosdevidaresta(int vidas)
{
   return vidas=vidas-1;

}

