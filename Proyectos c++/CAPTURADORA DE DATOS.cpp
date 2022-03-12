#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<string.h>

struct persona
{
	char nombre[35];
	char direccion[45];
	char telefono[12];
	int edad;
	float ingresos;
	char correo[50];
};

persona companeros[20];

int r=1;

int main()
{
	do
	{

		system("cls");
		fflush(stdin);
		printf("nombre de la persona %d ",r);
		gets(companeros[r].nombre);
		fflush(stdin);
		printf("captura la direccion ");
		gets(companeros[r].direccion);
		fflush(stdin);
		printf("captura el telefono ");
		gets(companeros[r].telefono);
		fflush(stdin);
		printf("capture la edad ");
		scanf("%d",&companeros[r].edad);
		fflush(stdin);
		printf("capture los ingresos ");
		scanf("%f",&companeros[r].ingresos);
		fflush(stdin);
		printf("capture el email ");
		gets(companeros[r].correo);
		r++;
	}while(r<=3);
	
	system("cls");
	for(r=1;r<=3;r++)
	{
		printf("%s  ",companeros[r].nombre);
		printf("%s  ",companeros[r].direccion);
		printf("%s  ",companeros[r].telefono);
		printf("%d  ",companeros[r].edad);
		printf("%.2f  ",companeros[r].ingresos);
		printf("%s  \n",companeros[r].correo);
	}
	system("pause");
}
