#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<string.h>



int claves[15],color[15],a,opc,r,c;
char producto[15][25];
float precio[15][3],subtotal,iva,total;



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
			for(a=1;a<=5;a++)
			{
				system("cls");
				fflush(stdin);
				printf("Favor de ingresar la clave del producto ");
				scanf("%d",&claves[a]);
				fflush(stdin);
				printf("Favor de ingresar el producto ");
				gets(producto[a]);
				printf("COLOR DE ETIQUETA \n");
				printf("1 Blanca \n");
				printf("2 Azul \n");
				printf("3 Verde \n");
				printf("4 Roja \n");
				fflush(stdin);
				printf("Que color de etiqueta desea ");
				scanf("%d",&color[a]);
				fflush(stdin);
				printf("Favor de ingresar el precio");
				scanf("%f",&precio[a][0]);
				switch(color[a])
				{
					case 1:
					precio[a][1]=0;
					break;
					case 2:
					precio[a][1]=precio[a][0]*.10;
					break;
					case 3:
					precio[a][1]=precio[a][0]*.25;
					break;
					case 4:
					precio[a][1]=precio[a][0]*.35;
					break;
				}//Cierra switch color

				precio[a][2]=precio[a][0]-precio[a][1];

			}//Cierra for

		break;
		case 2:
		system("cls");
		printf("Clave Producto Color Precio Descuento Importe \n\n");
		for(r=1;r<=a;r++)//Empieza for
		{
			printf("%d ",claves[r]);
			printf("%s ",producto[r]);
			switch(color[r])
			{
				case 1:
				printf("1 Blanca \n");
				break;
				case 2:
				printf("2 Azul \n");
				break;
				case 3:
				printf("3 Verde \n");
				break;
				case 4:
				printf("4 Roja \n");
				break;
			}
			for(c=0;c<=2;c++)
			{
				printf("%.2f ",precio[r][c]);
			}
				printf("\n");
				subtotal+=precio[r][2];
		}//Termina for
		iva=subtotal*.16;
		total=subtotal+iva;
		printf("%.2f \n",subtotal);
		printf("%.2f \n",iva);
		printf("%.2f \n",total);
		system("pause");
		break;

	}
	}while(opc<3);
}
