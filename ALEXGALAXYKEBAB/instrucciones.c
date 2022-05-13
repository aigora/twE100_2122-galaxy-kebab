#include <stdio.h>
#include <string.h>
void printins()
{
    int op;
    printf("El juego consta de dos niveles de dificultad, FACIL y DIFICIL.\n");
    printf("Hay 5 salas en total.\n");
    printf("\n");
    printf("Nivel Facil: Tendras 5 puntos de vida,adivinanzas,retos y preguntas de cultura general asequibles.Este modo de juego tiene 3 salas.(recomendada para principiantes).\n");
    printf("Nivel Dificil: Tendras 3 puntos de vida,adivinanzas,retos y preguntas de cultura general complejas.Este modo de juego tiene 5 salas.(recomendada para valientes).\n");
    printf("\n");
    inicio1:
    printf("Si quieres saber mas sobre los puntos de vida pulse 1.\n");
    printf("\n");
    printf("Si quieres conocer mejor el tipo de preguntas, adivinanzas, juegos, etc... pulse 2.\n");
    printf("\n");
    printf("Si desea salir de las instrucciones pulse 3.\n");
    do
    {
    scanf("%d",&op);
    }
    while(op!=1&&op!=2&&op!=3);
    switch(op)
    {
        case 1:
        {
            printf("Los puntos de vida son las vidas que tienes y lo que te mantiene en el juego,en el momento en el que pierdas todos los puntos de vida el juego termina\n");
            printf("y por tanto habras fallado el intento del juego.\n");
            printf("A medida que vaya trascurriendo el juego,ira ganando o perdiendo puntos de vida. Es decir, si contesta bien una pregunta o se pasa un juego correctamente\n");
            printf("no perderas ningun punto de vida, pero si fallas se le restara un punto de vida.\n");
            printf("Por supuesto tambien habra acertijos,juegos o preguntas que le sumara a sus puntos de vida.\n");
            printf("Esto lo que consigue es que el juego se le sume un nivel de dificultad y por tanto sea mas entretenido.\n");
            printf("\n");
            goto inicio1;
            break;

        }
        case 2:
        {
            printf("Habra todo tipo de preguntas desde cultura general ya sea de ciencia,historia,arte hasta preguntas internas de\n");
            printf("la propia historia del scape room, como por ejemplo decisiones que variara el trascurso de la trama.\n");
            printf("Por tanto deberas estar muy atento a cada punto del juego para intentar acertar lo máximo posible y asi\n");
            printf("avanzar correctamente.\n");
            printf("Tambien te encontraras juegos durante el juego.\n");
            printf("\n");
            goto inicio1;
            break;
        }
        case 3:
            {
              break;
            }
    }
}
