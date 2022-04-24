#include <stdio.h>
#include <string.h>

void printins()
{
    int op;
    printf("El juego consta de dos niveles de dificultad, FACIL y DIFICIL.\n");
    printf("Nivel Facil:Tendras 5 puntos de vida,adivinanzas,retos y preguntas de cultura general asequibles(recomendada para principiantes).\n");
    printf("Nivel Dificil:Tendras 3 puntos de vida,adivinanzas,retos y preguntas de cultura general complejas(recomendada para valientes).\n");
    inicio1:
    printf("Si desea conocer que son los puntos de vida pulse 1.\n");
    printf("Si desea conocer mejor el tipo de preguntas/tipo de adivinanzas,etc... pulse 2.\n");
    printf("Si desea salir de las instrucciones pulse 3.\n");
    scanf("%d",&op);
    switch(op)
    {
        case 1:
        {
            printf("Los puntos de vida son las vidas que tienes y lo que te mantiene en el juego,en el momento en el que pierdas todos\n");
            printf("los puntos de vida el juego termina y por tanto usted habra fallado el intento del juego.\n");
            printf("A medida que vaya trascurriendo el juego,ira ganando o perdiendo puntos de vida. Es decir, si contesta bien una pregunta\n");
            printf("usted no perdera ningun punto de vida, pero si usted falla se le restara un punto de vida.\n");
            printf("Por supuesto tambien habra acertijos o preguntas que le sumara a sus puntos de vida, lo que se le llama recompensa\n");
            printf("por haber conseguido una racha de preguntas acertdas, o por haber acertado una pregunta bonus,etc...\n");
            printf("Esto lo que consigue es que el juego se le sume un nivel de dificultad y por tanto sea mas entretenido.\n");
            goto inicio1;
            break;

        }
        case 2:
        {
            printf("Habra todo tipo de preguntas desde cultura general ya sea de ciencia,historia,arte hasta preguntas internas de\n");
            printf("la propia historia del scape room, como por ejemplo decisiones que variara el trascurso de la trama.\n");
            printf("Por tanto usted debera estar muy atento a cada punto del juego para intentar acertar lo máximo posible y asi\n");
            printf("avanzar correctamente.\n");
            goto inicio1;
            break;
        }
        case 3:
            {
              break;
            }
    }
}
