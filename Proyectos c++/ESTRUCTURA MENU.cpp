#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<string.h>

struct producto
{
	int id;
	char marca[35];
	char descripcion[55];
	int depto;
	int tienda;
	int temporada;
	float precio, descuento, subtotal;
	float iva, total;
};

producto almacen[100],aux;

void menu();
void listagral();
void ordenar();

int opc,r,a,i,j,c,xdepto,xtemporada;
char otro;
float totales[6],xprecio;
int main()
{
	do
	{
		menu();
		fflush(stdin);
		printf("Que opcion quieres? ");
		scanf("%d",&opc);
		switch(opc)
		{
			case 1:
				do
        		{
        			system("cls");
        			r++;
					fflush(stdin);
					printf(" Ingrese el ID \n");
					scanf("%d",&almacen[r].id);
					
					fflush(stdin);
					printf(" Ingrese la marca \n");
					gets(almacen[r].marca);
					
					fflush(stdin);
					printf(" Ingrese la descripcion \n");
					gets(almacen[r].descripcion);
					
					fflush(stdin);
					printf("Ingrese el departamento \n");
					printf("1 Damas \n");
					printf("2 Caballeros \n");
					printf("3 Niños \n");
					printf("4 Mayores de edad \n");
					printf("5 Lacteos \n");
					printf("6 Vinos \n");
					scanf("%d",&almacen[r].depto);
					
					fflush(stdin);
					printf("Ingrese la temporada \n");
					printf("1 Otoño \n");
					printf("2 Invierno \n");
					printf("3 Primavera \n");
					printf("4 Verano \n");
					scanf("%d",&almacen[r].temporada);
					
					fflush(stdin);
					printf(" Ingrese la tienda de su eleccion \n");
					printf("1 Oasis \n");
					printf("2 Coapa \n");
					printf("3 Perisur \n");
					printf("4 Satelite \n");
					printf("5 Plaza mayor \n");
					scanf("%d",&almacen[r].tienda);
									
					fflush(stdin);
					printf(" Captura el precio \n");
					scanf("%f",&almacen[r].precio);
					switch(almacen[r].tienda)
					{
						case 1:
							almacen[r].descuento = almacen[r].precio*.10;
						break;
						
						case 2:
							almacen[r].descuento = almacen[r].precio*.15;
						break;
						
						case 3:
							almacen[r].descuento = almacen[r].precio*.08;
						break;
						
						case 4:
							almacen[r].descuento = almacen[r].precio*.18;
						break;
						
						case 5:
							almacen[r].descuento = almacen[r].precio*.12;
						break;
						
					}
					almacen[r].subtotal = almacen[r].precio - almacen[r].descuento;

					printf("%s",almacen[r].marca);
					fflush(stdin);
					printf("¿Quieres capturar otro dato?... 's' o 'n'");
					scanf("%c" ,&otro);		
				}while(otro=='s' || otro=='s');
			break;
			
			case 2:
				ordenar();
				system("cls");
				printf("ID MARCA DESCRIPCION DEPARTAMENTO TEMPORADA TIENDA PRECIO DESCUENTO SUBTOTAL IVA TOTAL \n\n");
				for(a=1;a<=r;a++)
				{
					listagral();
					totales[0]+=almacen[a].precio;
					totales[0]+=almacen[a].descuento;
					totales[0]+=almacen[a].subtotal;
					totales[0]+=almacen[a].iva;
					totales[0]+=almacen[a].total;
				}
				printf("\n");
				for(c=0;c<=5;c++)
				{
					printf(".2f ",totales[c]);
				}
				
				system("pause");
			break;
			
			case 3:
				system("cls");
				printf("Ingrese el departamento \n");
				printf("1 Damas \n");
				printf("2 Caballeros \n");
				printf("3 Niños \n");
				printf("4 Mayores de edad \n");
				printf("5 Lacteos \n");
				printf("6 Vinos \n");
				fflush(stdin);
				scanf("%d",&xdepto);
				printf("Ingrese la temporada \n");
				printf("1 Otoño \n");
				printf("2 Invierno \n");
				printf("3 Primavera \n");
				printf("4 Verano \n");
				fflush(stdin);
				scanf("%d",&xtemporada);
				system("cls");
				printf("ID MARCA DESCRIPCION DEPTO TEMPORADA TIENDA PRECIO DESCUENTO SUBTOTAL IVA TOTAL");
				for(a=1;a<=r;a++)
				{
					if(xdepto==almacen[a].depto && xtemporada==almacen[a].temporada)
					{
						listagral();
					}
				}
			break;
			
			case 4:
				system("cls");
					printf(" Ingrese la tienda de su eleccion \n");
					printf("1 Oasis \n");
					printf("2 Coapa \n");
					printf("3 Perisur \n");
					printf("4 Satelite \n");
					printf("5 Plaza mayor \n");
					fflush(stdin);
					printf("Ingrese el departamento \n");
					printf("1 Damas \n");
					printf("2 Caballeros \n");
					printf("3 Niños \n");
					printf("4 Mayores de edad \n");
					printf("5 Lacteos \n");
					printf("6 Vinos \n");
					fflush(stdin);
					scanf("%d",&xdepto);
					system("cls");
					printf("ID MARCA DESCRIPCION DEPTO TEMPORADA TIENDA PRECIO DESCUENTO SUBTOTAL IVA TOTAL \n");
					
			break;
			
			case 5:
				system("cls");
				fflush(stdin);
				system("cls");
				printf("a partir de que precio quieres listar");
				scanf("%f",&xprecio);
				printf("Ingrese el departamento a listar\n");
				printf("1 Damas \n");
				printf("2 Caballeros \n");
				printf("3 Niños \n");
				printf("4 Mayores de edad \n");
				printf("5 Lacteos \n");
				printf("6 Vinos \n");
				fflush(stdin);
				scanf("%d",&xdepto);
				system("cls");
				printf("ID MARCA DESCRIPCION DEPARTAMENTO TEMPORADA TIENDA PRECIO DESCUENTO SUBTOTAL IVA TOTAL \n");
				for(a=1;a<=r;a++)
				{
					if(xdepto==almacen[a].depto && xprecio>=almacen[a].precio)
					{
						listagral();
					}
				}
				system("pause");
			break;
			
			case 6:
				system("cls");
				a=0;
				band='f';
				fflush(stdin);
				printf("id del producto a buscar ");
				scanf("%d", &xid);
				while(band=='f' && a<=r)
				{
					a++;
					if(xid==almacen[a].id)
					{
						band='v';
					}
				}
				if(band=='v')
					listagral();
				else
					printf("id no encontrado ");
				
			break;
		}

	}while(opc<7);
}//termina main

void menu()
{
	system("cls");
	printf("MENU PRINCIPAL \n");
	system("cls");
        printf("MENU PRINCIPAL \n");
        printf("1 Captura de datos \n");
        printf("2 Lista general y ordenada \n");
        printf("3 Lista por departamento y temporada \n");
        printf("4 Lista por tienda y departamento \n");
        printf("5 lista por precio y temporada \n");
        printf("6 busqueda por ID \n");
        printf("7 Salir del programa \n");
}//termina void menú 

void ordenar()
{
	for(i=0;i<=r;i++)
	{
		for(j=1;j<r;j++)
		{
			if(almacen[j].id>almacen[j+1].id)
			{
				aux=almacen[j];
				almacen[j]=almacen[j+1];
				almacen[j+1]=aux;
			}
		}
	}
	
}//termina void ordenar

void listagral()
{
	printf("%d ", almacen[a].id);
	printf("%s ",almacen[a].marca);
	printf("%s ",almacen[a].descripcion);
	switch(almacen[a].depto)
	{
		case 1:
			printf(" Damas \n");
		break;
		
		case 2:
			printf(" Caballeros \n");
		break;
		
		case 3:
			printf(" Niños \n");
		break;
		
		case 4:
			printf(" Mayores de edad \n");
		break;
		
		case 5:
			printf(" Lacteos \n");
		break;
		
		case 6:
			printf(" Vinos \n");
		break;
	}//termina switch depto
	
	switch(almacen[a].temporada)
	{
		case 1:
			printf(" Otoño ");
		break;
		
		case 2:
			printf(" Invierno ");
		break;
		
		case 3:
			printf(" Primavera ");
		break;
		
		case 4:
			printf(" Verano ");
		break;						
	}//termina switch temporada
	
	switch(almacen[a].tienda)
	{
		case 1:
			printf(" Oasis ");
		break;
		
		case 2:
			printf(" Coapa ");
		break;
		
		case 3:
			printf(" Perisur ");
		break; 
		
		case 4:
			printf(" Satelite ");
		break;
		
		case 5:
			printf(" Plaza mayor ");
		break;
	}//termina switch tienda
	printf("%.2f ",almacen[a].precio);
	printf("%.2f ",almacen[a].descuento);
	printf("%.2f ",almacen[a].subtotal);
	printf("%.2f ",almacen[a].iva);
	printf("%.2f \n",almacen[a].total);
}

void limpiatotales()
{
	for(c=0;c<=6;c++)
		totales[c]=0;
}
