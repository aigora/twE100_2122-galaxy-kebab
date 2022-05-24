typedef struct
{
	char nick[100];
	char password[100];
}usuario;
usuario datos[100];
int reconocerfich(usuario datos[], int *numusuarios);
void login(char printnick[], int *numusuarios,usuario datos[]);
void registrar(char printnick[], int *numusuarios,usuario datos[]);
