#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<string.h>

struct empleado
{
	long int id;
	char nombre[20];
	char,puesto[45],horario,tipo_salario;
	int departamento, sucursal, dias_trabajados;
	float salario_diario,salario_bruto,ISR,IVA_pagado,IVA_retenido,salario_neto;
		
};

int opc,contador=0;
empleado nomina[50];
void ordenar();
void listagral();
void totalizar();
int main()
{
	do
	syste,("cls");
	printf("1 captura de datos empleados \n 2 lista general ordenada y totalizada \n 3 lista por departamento \n 4 lista por salario tipo sucursal \n 5");
	scanf("%d",&opc);
	switch(opc)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			system("cls");
			printf("\n Tipo de salario a listar: [N]=nomina / [H]=honorarios");
			fflush(stdin);
			scanf("%d",&xtipo);
				printf("\n Seleccione la sucursal");
				printf("1 Oaxaca");
				printf("2 Puebla");
				printf("3 Jalapa");
				printf("4 Tlaxcala");
				printf("5 Leon");
				fflush(stdin);
				scanf("%d",&xsucursal);
				system("cls");
				printf(" ID NOMBRE PUESTO DEPARTAMENTO HORARIO SUCURSAL TIPO SALARIO SALARIO BRUTO IRS IVAP IVAR NETO \n");
				for(r=1;r<=contador;r++)
				{
					if(nomina[r].sucursal==xsucursal && nomina[r].tipo_salario==xtipo);
						listagral();
				}
				system("pause");
			
			break;
			
		case 5:
			system("cls");
			printf("\n [m] -> matutino \n [v] -> vespertino");
			printf("\n Ingrese el horario a listar: ");
			fflush(stdin);
			scanf("%c",&xhorario);
			fflush(stdin);
			priontf("ID NOMBRE PUESTO DEPARTAMENTO HORARIO SUCURSAL TIPO SALARIO SALARIO BRUTO IRS IVAP IVAR NETO \n");
			for(r=1;r<=contador;r=r++)
			{
				if(nomina[r].horario==xhorario && nomina[r].salario_bruto==xmonto);
						listagral();	
			}
			system("pause");
			break;
			
		case 6:
			system("cls");
			r=0;
			band='f';
			fflush(stdin);
			printf(" id del producto a buscar ");
			scanf("%d",&xid);
			while(band=='f' && r<=contador)
			{
				r++;
				if(xid==nomina[r].id)
				{
					band='v';
				}
			}
			if(band=='v')
				listagral();
			else
				printf("id no encontrado");
			system("pause");
			break;
		}//termina switch principal
	}while(opc!=7);
}

void captura()
{
	printf("Captura el ID del empleado: ");
	fflush(stdin);
	scanf("%d",&nomina[contador].id);
	printf("Nombre del empleado: ");
	fflush(stdin);
	gets(nomina[contador].nombre);
	printf("Cual es el puesto de trabajo: ");
	fflush(stdin);
	gets(nomina[contador].puesto);
	printf("1 RH \n");
	printf("2 Sistemas \n");
	printf("3 Publicidad \n");
	printf("4 Mercadotecnia \n");
	printf("5 Contabilidad \n");
	printf("Ingrese el tipo de departamento: ");
	fflush(stdin);
	scanf("%d",&nomina[contador].departamento);
	printf("[m] -> matutino \n [v] -> vespertino ");
	printf("Ingrese el horario: ");
	fflush(stdin);
	nomina[contador].horario = getchar();//oprime letra y retorna caracter
	printf("Sucursal");
	printf("1 Oaxaca");
	printf("2 Puebla");
	printf("3 Jalapa");
	printf("4 Tlaxcala");
	printf("5 Leon");
	fflush(stdin);
	scanf("%d",&nomina[contador].sucursal);
	printf("Tipo de salario: \n");
	fflush(stdin);
	scanf("%c",&nomina[contador].tipo_salario);
	printf("Salario diario: \n");
	fflush(stdin);
	scanf("%f",&nomina[contador].salario_diario);
	printf("Dias trabajados: \n");
	fflush(stdin);
	scanf("%d",&nomina[contador].dias_trabajados);
	fflush(stdin);
	scanf("%d",&nomina[contador].dias_trabajados);
	nomina[contador].salario_bruto = nomina[contado].slario_diario
}
