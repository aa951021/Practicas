#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<string.h>

int cuenta[65],opc,contar,c,r;
char alumno[65][50],clave,otro;
float calif [65][8],promedio;


int main()
{
	 do
    {
        system("cls");
        printf("MENU PRINCIPAL \n");
        printf("1 Captura de datos \n");
        printf("2 Lista general de alumnos \n");
        printf("3 Lista de alumnos con promedio aprobatorio \n");
        printf("4 Lista de alumnos con promedio no aprobado \n");
        printf("5 Busqueda por cuenta de alumno \n");
        printf("6 Lista por materia \n");
        printf("7 Salir del programa \n");
        
		fflush(stdin);
        printf("Que opcion desea ");
        scanf("%d",&opc);
        switch(opc)
        {
        	case 1:
        		do
        		{
        			system("cls");
        			contar++;
					fflush(stdin);
					printf("Ingrese la cuenta del alumno");
					scanf("%d ",&cuenta[contar]);
					
					fflush(stdin);
					printf("Ingrese el nombre del alumno");
					gets(alumno[contar]);
					scanf("%s ",&alumno[contar]);
					
					fflush(stdin);
					printf("Ingrese la calificacion de base de datos ");
					scanf("%d ",&calif[contar][1]);
					
					fflush(stdin);
					printf("Ingrese la calificacion de redes ");
					scanf("%d ",&calif[contar][2]);
					
					fflush(stdin);
					printf("Ingrese la calificacion de estructura ");
					scanf("%d ",&calif[contar][3]);
					
					fflush(stdin);
					printf("Ingrese la calificacion de sis op ");
					scanf("%d ",&calif[contar][4]);
					
					fflush(stdin);
					printf("Ingrese la calificacion de memorias ");
					scanf("%d ",&calif[contar][5]);
					
					fflush(stdin);
					printf("Ingrese la calificacion de metodos ");
					scanf("%d ",&calif[contar][6]);
					for(c=1;c<=6;c++)
						calif[contar][0]+=calif[contar][c];
					
					calif[contar][0]=calif[contar][0]/6;
					
					
					fflush(stdin);
					printf("¿Quieres capturar otro alumno?... 's' o 'n'");
					scanf("%c" ,&otro);		
				}while(otro=='s' || otro=='s');
        	break;
        	
    	  	case 2:
        		system("cls");
        		printf("clave  nombre  promedio  base datos  redes  estruct  sis op  memorias  metodos");
        		for(r=1;r<=contar;r++)
        		{
        			printf("%d ",cuenta[r]);
        			printf("%s ",alumno[r]);
        			for(c=0;c<=6;c++)
        			{
        				printf("%.2f ",calif[r][c]);
        				promedio[c]+=calif[r][c];
					}//termina for c
					printf("\n");
				}//termina for r
				
				for(c=0;c<=6;c++)
				{
					promedio[c]=promedio[c]/contar;
					printf("%.2f ",promedio[c]);
				}
				system("pause");
			
        	break;
        	case 3:
        		
        	break;
    	  	case 4:
        		
        	break;
        	case 5:
        		
        	break;
    	  	case 6:
        		
        	break;
		}//termina switch
	}while(opc<7);
}// termina main
