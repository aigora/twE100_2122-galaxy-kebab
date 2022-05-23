#include <stdio.h>
#include <string.h>
typedef struct
{
	char nick[100];
	char password[100];
}usuario;
usuario datos[100]; //vector para guardar el nombre y la contraseña para posteriormente pasarlo al fichero
int reconocerfich(usuario datos[], int *numusuarios)
{
	FILE * ficheroinicio; //llamamos asi al fichero
	int i;
	ficheroinicio = fopen("usuario.txt","r"); //abrimos el fichero y modo lectura

	if(ficheroinicio==NULL)
    {
		printf("No hay ningun fichero para abrir.\n");
    return 0; //devolvemos,para en el main indicar que el programa se termina ya que no existe fichero
	}
	i=0;
	while(fscanf(ficheroinicio,"%s %s\n",&datos[i].nick,&datos[i].password)!=EOF)//comprobamos los usuarios ya registrados,y hacemos un contador
    {
	i++;
	}
	*numusuarios=i;
	fclose(ficheroinicio); //cerramos el fichero
	return 1;//devolvemos 1,para indicar en el main que el programa puede seguir correctamente
}
int registrar(char printnick[], int *numusuarios,usuario datos[])
{

	FILE * ficheroinicio;
	int i;
	int rep=0;//numero entero para comprobar si hay usuario o contraseña ya introducido
	char printpassword[100];//vector tipo caracter para almacenar la contraseña introducida por el usuario
	do
        {
		printf("Introduzca su nick nuevo:\n");
		fflush(stdin);
		scanf("%s",printnick);
		for(i=0;i<*numusuarios;i++)
        {
			if(strcmp(printnick,datos[i].nick)==0) //comparamos con lo que hay en el fichero y el nombre que ha introducido el usuario
                {
				rep=1;
				break;
			    }
			else
                {
				rep=0;
			    }
		}

		if(rep==1)
        {
			printf("Ya existe este nick.Intentalo de nuevo.\n");
		}
		else
		{
			printf("Usuario valido\n");
			printf("Vas a ser el jugador %d registrado en este juego.\n",i+1);
			strcpy(datos[*numusuarios].nick,printnick);//con la libreria string.h,lo copiamos a nuestra estrucutra con su posicion correspondiente
		}

	}
	while(rep==1);
do
{
	printf("Introduzca una contrase%ca:\n",164);
	fflush(stdin);
	scanf("%s",printpassword);
	for(i=0;i<*numusuarios;i++)
        {
			if(strcmp(printpassword,datos[i].password)==0)//comparamos si ya esta esa contraseña en el fichero
            {
				rep=1;
				break;
            }
			else
                {
				rep=0;
			    }
        }

		if(rep==1)
        {
			printf("Ya existe esta contrase%ca.Intentalo de nuevo.\n",164);
		}
		else
		{

			strcpy(datos[*numusuarios].password,printpassword);
            ficheroinicio= fopen("usuario.txt","w");//modo escritura
	for(i=0;i<=*numusuarios;i++)
    {
		fprintf(ficheroinicio,"%s %s\n",datos[i].nick,datos[i].password);//lo imprimimos en el fichero

	}

	fclose(ficheroinicio); //cerramos el fichero
    }
}while(rep==1);//no se sale del bucle hasta que el usuario,introduzca un nick y una contraseña no repetida
}

void login(char printnick[], int *numusuarios,usuario datos[])
{

	int i;
	int rep=0;
	char printpassword[200];
	do
        {
		printf("Introduzca su nick:\n");
		fflush(stdin);
		scanf("%s",printnick);
		printf("Introduzca su contrase%ca:\n",164);
		fflush(stdin);
		scanf("%s",printpassword);

		for(i=0;i<*numusuarios;i++)
            {
			if(strcmp(printnick,datos[i].nick)==0 && strcmp(printpassword,datos[i].password)==0)//comprobar si esta en el fichero
            {
				rep=1;
				break;
			}
        else
            {
				rep=0;
			}
		    }

		if(rep==0)
            {
			printf("Datos incorrectos.\n");
		    }
		    else
		    {
			printf("Datos correctos.\n");
			printf("Eres el jugador %d registrado en el juego.\n",i+1);
		    }

	  }
	  while(rep==0);

}
