#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include "crono.h"
#include "dificil.h"
#include "facil.h"
#include "ahorcado.h"
#include "tresenraya.h"
void juegodificil()
{
    int vidas[1]={3};
    printf("Es sabado por la ma%cana. Has estado estudiando y como hace un buen dia decides irte a comer al Galaxy Kebab.\n",164);
    printf("Cuando llegas el cocinero te saluda amablemente:\n");
    printf("<cocinero> ¿Que tal amigo?¿Te pongo lo de siempre, un durum mixto?\n");
    printf("<tu> Hola! Si lo de siempre, gracias.\n");
    printf("El cocinero te da el durum y te sientas a comer tranquilamente.\n");
    printf("Despues de estar un rato comiendo, te empiezas a sentir algo mareado, todo se empieza a mover, te caes y pierdes el conocimiento.\n");
    if(vidas[0]>0)
    {
    sala1(vidas);
    }
     if(vidas[0]>0)
     {
    sala2(vidas);
     }
    sala3(vidas);
     if(vidas[0]>0)
     {
    sala4(vidas);
     }
      if(vidas[0]>0)
      {
    sala5(vidas);
      }

}

void sala3(int vidas[])
{
    printf("\n");
    cronosec(0);
    char palabra[20];
     char op;
    int a,j=0,h=0;
    char pregunta1[]="Edison";
    printf("Se cierra la pesada puerta metalica detras de ti con un sonido seco.\n");
    printf("Tratas de volver a abrirla pero esta bloqueada y no puedes.\n");
    printf("No ves nada. Te encuentras en una habitacion oscura, sin luces ni ventanas\n");
    printf("Empiezas a tocar todas las paredes tratando de encontrar un interruptor.\n");
    printf("Y de repente,... EUREKA!\n");
    printf("Has encontrado lo que parece un cuadro de luces, pero...\n");
    printf("Para poder encender los plomos deberas contestar una pregunta.\n");
    printf("Quien fue el inverntor de la bombilla incandescente? y recuerda que los nombres propios empiezan en mayuscula.\n");
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
    printf("Se encienden las luces de repente y quedas cegado unos segundos.\n");
 printf("ves una habitacion peque%ca y muy sencilla. Una cama, un armario y un par de posters de decoracion.\n");
printf("De repente empieza a sonar la alarma de un despertador con un sonido muy desagradable, pero se escucha lo siguiente:\n",164);
 printf("Buenos dias, para apagar la alarma deberas responder bien la siguiente pregunta, Que gran ingeniero trato de construir la conocida Torre Tesla?\n");
 printf("a)Nikola Tesla.\n");
 printf("b)Elon Musk.\n");
 printf("c)Clash Royale.\n");
 do
 {
 scanf("%c",&op);
 switch(op)
 {
  case 'a':
      {
          printf("CORRECTO\n");
          break;
      }
  case 'b':
    {
      printf("INCORRECTO.\n");
      puntosdevidarestafac(vidas);
      break;
    }
  case 'c':
    {
         printf("INCORRECTO.\n");
         puntosdevidarestafac(vidas);
         break;
    }
 }
 }while(op!='a'&&op!='b'&&op!='c');
 printf("Tienes %d vidas.\n",vidas[0]);
     if(vidas[0]==0)
     {
         fin();
     }
     else
        {
printf("Se apaga la alarma y decides seguir investigando la habitacion.\n");
 printf("Abres el armario y ves un monton de ropa vieja y sucia pero ves algo extra%co.\n",164);
 printf("Una caja fuerte. Pero requieres de una llave que no tienes asique decides buscar por la habitacion.\n");
 printf("Buscas un buen rato, pero no encuentras nada. Ya desesperado, te apoyas en la pared para tratar de pensar pero notas algo extraño.\n");
 printf("La pared esta hueca. Extra%cado, empiezas a observarla.\n",164);
 printf("Te llama la atencion un cartel de Rick y Morty, donde se ve a ambos cruzar un portal. Sera una se%cal?\n",164);
 printf("La alarma del despertador se escucha de nuevo. <Veo que vas por buen camino, te dare una pista si sabes cual es el apellido de Rick ?>\n");
 h=0,j=0;
 char pregunta2[]={"Sanchez"};
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
         printf("Correcto, deberias tratar de cruzar en portal.\n");
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

 printf("Lo primero que se te ocurre es romper la pared pero no sabes como.\n");
 printf("Buscas por toda la habitacion, y bajo la cama encuentras una palanca. Para poder cogerla deberas responder otra pregunta.\n");
 printf("Quien cito: <Dadme un punto de apoyo y movere el mundo>?\n");
 printf("a)Aristoteles.\n");
 printf("b)Arquimedes.\n");
 printf("c)Platon.\n");
 do
 {
    scanf("%c",&op);
 switch(op)
 {
  case 'a':
      {
          printf("INCORRECTO\n");
          puntosdevidarestafac(vidas);
          break;
      }
  case 'b':
    {
      printf("CORRECTO.\n");
      break;
    }
  case 'c':
    {
         printf("INCORRECTO.\n");
         puntosdevidarestafac(vidas);
         break;
    }
 }
 }while(op!='a'&&op!='b'&&op!='c');
  printf("Tienes %d vidas.\n",vidas[0]);
     if(vidas[0]==0)
     {
         fin();
     }
     else
        {

 printf("Coges la palanca y rompes la pared.\n");
 printf("Tras el portal del poster encuentras una llave que no dudas en usar en la caja fuerte.\n");
 printf("Observas la caja fuerte, pero para abrirla requieres tambien de un codigo.\n");
 printf("Una vez mas suena la alarma del despertador y se escucha lo siguiente.\n");
 printf("<Que fisico ideo una paradoja de la mecanica cuantica sobre un gato>\n");
  h=0,j=0;
 char pregunta3[]={"Schrodinger"};
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
 printf("<Enhorabuena, sigues con vida, y recuerda que aqui hay gato encerrado>\n");
 printf("Abres la caja fuerte y quedas extra%cado. Solo habria un misero papel. Lo abres y ves un plano.\n",164);
 printf("Es un plano de la habitacion. En el observas que hay una especie de tunel tras en armario.\n");
 printf("Mueves el armario y ves la entrada de un conducto de ventilacion.\n");
 printf("Este tiene tornillos, pero recuerdas que en la cocina cogiste un destornillador.\n");
printf("Abres rapidamente el conducto y comienzas a gatear para escapar.\n");
    printf("Has tardado %ld segundos en pasarte la sala 3.\n",cronosec(1));
    system("PAUSE");
    }
    }
    }
    }
    }
}
void sala4(int vidas[])
{
cronosec(0);
printf("\n");
printf("Avanzas por el conducto y de pronto oyes un sonido extraño y cede caes al suelo del descansillo de unas escaleras\n");
 printf("Comienzas a bajar pero estan bloqueadas por una puerta\n");
 printf("Como no tienes otra opcion decides subirlas\n");
 printf("Tras un buen rato subiendo llegas a una puerta que abres de un empujon\n");
 printf("Llegas a la azotea, es de noche. Miras a tu alrededor y ves el skyline de madrid. estas en la zona de embajadores.\n");
 printf("No hay ni un alma en las oscuras calles de la nocturna madrid, por lo pue gritar para pedir ayuda seria inutil y podria alertar al secuestrador\n");
 printf("Miras a tu alrededor en busca de una pista, y en unas de las antenas de la azotea encuentras un mensaje grabado\n");
 printf("Si estas leyendo esto es que no he sido el ultimo secuestrado a si  que recuerda...a veces lo invisible se puede llegar a ver\n");
 printf("Rapidamente recuerdas que tienes una bombilla de luz ultravioleta que encontraste en la cocina pero necesitas una linterna\n");
 printf("Por lo que empiezas a buscar por la azotea de pronto encuentras una linterna detras de un aire acondicionado\n");
 printf("Conectas la bombilla de uv y descubras que en el suelo hay unas huellas que no dudas en seguir\n");
 printf("Finalmente encuentras otra grabadora que enciendes sin pensarlo\n");
 printf("Veo que has llegado lejos, enhorabuena. juguemos a un juego, simple pero divertido.Es muy sencillo y seguro que lo conoces, el ahorcado.\n");
 printf("Enfocas tu linterna al bordillo de la azotea y encuentras el juego\n");
    printf("Va a empezar el juego ahorcado.\n");
    system ("PAUSE");
    juegoahorcado(vidas);
    printf("Tienes %d vidas.\n",vidas[0]);
     if(vidas[0]==0 || vidas[0]<0)
    {
        fin();
    }
    else{
 printf("Enhorabuena has ganado, has recibido una llave\n");
 printf("Que no dudas en usar en la puerta cerrada bajando las escaleras.\n");
 printf("Introduces la llave y una panel se enciende a tu derecha\n");
 printf("Es un tres en raya, a la izquierda del panel pone: juguemos\n");
 system("PAUSE");
      juegotresenraya(vidas);
       printf("Tienes %d vidas.\n",vidas[0]);
       if(vidas[0]==0 || vidas[0]<0)
    {
        fin();
    }
    else{
 printf("Tras ganar la puerta se abre y sigues adelante\n");
 printf("Has tardado %ld segundos en pasarte la sala 4.\n",cronosec(1));
 system("PAUSE");
    }
    }
}
