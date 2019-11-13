#include <stdio.h>
#include <string.h>

/*
struct agenda{
	char nombre[20];
	char apellidos [20];
	int tefce [20];
	int tefca [20];
	int teftr [20];
	char direc [50];
	char correo [30];
}datos [N];
*/


void menu();
//void buscar();

int main (){
int x;

        do{
            menu();
            scanf("%d",&x);
                //system ("cls");

            switch (x){
            case 1:
                //printf("funciom registro");
                system("pause");
                break;

            case 2:
               //printf("funciom buscar");
                system("pause");
                break;
            case 3:
                 //funcion  listado
                 system("pause");
                break;
            case 4:
                printf ("\n Gracias por venir vuelva pronto\n");
                break;
            default:
                printf("Opcion invalida, ingresa un num de la lista \n");
            }}while (x!=4);



return 0;
}


void menu()
{
    printf("AGENDA UNAM\t\t\t\n");
    printf("1. Registro \n");
    printf("2. buscar\n");
    printf("3. listado\n");
    printf("4. salir\n");

}


/* 
void buscar(){
	char busqueda[20];
	int i,conta;
	system("cls");
	conta=0;

	fflush(stdin);
	printf (" Buscar contacto \n Ingrese el nombre del contacto: \n");
	gets(busqueda);
	
	for(i=0;i<conta;i++){
		if(strcmpi(busqueda,//nombre_estructura[i].//nombre){
			printf("Nombre %s", //nombre_estructura[i].//nombre);
			printf("Telefono celular %d"),//nombre_estructura[i].//celular);
			printf("Telefono de casa %d"),//nombre_estructura[i].//telefono_de_casa);
		}
	}

}
*/                           
