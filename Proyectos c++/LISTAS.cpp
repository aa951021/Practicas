//Tercera practica lista de Tlapaleria ocupando switch

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>

int claves[15],opc,contador,r,c;
char descripcion[15][25];
float promocion[15][5];

int main()

{
    do
    {
        system("cls");
        printf("MENU PRINCIPAL \n");
        printf("1 Captura de datos \n");
        printf("2 Lista general \n");
        printf("3 Salir del programa. \n");
        fflush(stdin);
        printf("Que opcion desea ");
        scanf("%d",&opc);
        switch(opc)
        {
        case 1:
            system("cls");
            fflush(stdin);
            contador++;
            fflush(stdin);
            
			printf("Favor de capturar la clave del producto ");
            scanf("%d",&claves[contador]);
            fflush(stdin);
            
			printf("Descripcion ");
            gets(descripcion[contador]);
            fflush(stdin);
            
            printf("Favor de indicar el precio ");
            scanf("%f",&promocion[contador][0]);
            promocion[contador][1]=promocion[contador][0]*0.30;
            promocion[contador][2]=promocion[contador][0]-promocion[contador][1];
            break;
            
        case 2:
        	system("cls");
        	printf("Clave Descripcion  Precio  Descuento  Importe \n\n ");
        	for(r=1;r<=contador;r++)
        	{
        		printf("%d  ",claves[r]);
        		printf("%s ",descripcion[r]);
        		for(c=0;c<=2;c++)
        		{
        			printf("%.2f  ",promocion[r][c]);
				}
				printf("\n");
			}
			system("pause");
            break;
            
        case 3:
        	
            break;
        }//Termina switch
    }while(opc<3);
}
