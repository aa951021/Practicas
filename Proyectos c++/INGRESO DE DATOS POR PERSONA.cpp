#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<string.h>

char nombre[45],genero,origen,nombrealta[45],nombrebaja[45];
int edad,contador,sumaedades,contarf,contarm,mayores,contaextra;
float peso,estatura,sumapeso,estaturaalta,estaturabaja=3,sumaextra,promextra,promedades,prompeso;

int main()
{
	system("cls");
	for(contador=1;contador<=10;contador++)
	{
		fflush(stdin);
		printf("captura el nombre de la persona %d",contador);
		gets(nombre);
		
		fflush(stdin);
		printf("captura su edad ");
		scanf("%d",&edad);
		
		fflush(stdin);
		printf("genero m = masculino, f = femenino ");
		scanf("%c",&genero);
		
		fflush(stdin);
		printf("su peso");
		scanf("%f",&peso);
		
		fflush(stdin);
		printf("captura su estatura");
		scanf("%f",&estatura);
		
		fflush(stdin);
		printf("la persona es mexicana? ");
		scanf("%c",&origen);
		
		if(genero=='f')
		{
			sumaedades+=edad;
			contarf++;
		}
		else
		{
			sumapeso+=peso;
			contarm++;
		}
		if(estatura>=estaturaalta)
		{
			estaturaalta=estatura;
			strcpy(nombrealta,nombre);
		}
		if(estatura<=estaturabaja)
		{
			estaturabaja=estatura;
			strcpy(nombrebaja,nombre);
		}
		if(edad>=18)
		{
			mayores++;
		}
		if(origen=='n')
		{
			sumaextra+=estatura;
			contarextran++;
		}
	}
	
	promedades=sumaedades/contarf;
	prompeso=sumapeso/contadorm;
	promextra=sumaextra/contraextra;
	
	system("cls");
	
	printf("La persona más alta es %S y mide %.2f \n",nombrealta,estaturaalta);
	printf("La persona más baja es %S y mide %.2f \n",nombrebaja,estaturabaja);
	printf("El promedio de edad de las mujeres es %.2f \n",promedades);
	printf("El promedio de peso de lso hombres es de %.2f \n",prompeso);
	printf("Los mayores de edad son %d \n",mayores);
}
