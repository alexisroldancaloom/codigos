#include <stdio.h>
#include <string.h>

void menu();
int main (){
int x;

        do{
            menu();
            scanf("%d",&x);

            switch (x){
            case 1:
                //printf("funciom registro");
                break;

            case 2:
               //printf("funciom buscar");
                break;
            case 3:
            //funcion  listado
            break;
            case 4:
                printf ("gracias por venir vuelva pronto");
                break;
            default:
                printf("opcion ibvalida, ingresa un num de la lista");
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

