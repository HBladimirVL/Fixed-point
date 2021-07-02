#include <iostream>
#include <stdio.h>
#include <math.h>

// BY BLADIMIR LOPEZ

int main(int argc, char** argv) {
	float p0, p , tol; int iteraciones,i=1;
	printf("      ---------------------------------------------------------\n");
	printf("                               BIENVENIDO\n");
	printf("                          METODO DEL PUNTO FIJO\n");
	printf("      ---------------------------------------------------------\n\n");
	printf("      >> Funcion orignal: f(x)= x^3 - 6.5x^2 + 11.2x - 3.1	\n\n");
    printf("      >> Funcion tranformada a la forma: x = g(x)\n");
    printf("      >> x = -x^3 + 6.5x^2 + 3.1 / 11.2\n\n");
    printf("      Ingrese Tolerancia: ");scanf("%f",&tol);
	printf("      Ingrese P0 (valor semilla): ");scanf("%f",&p0);
	printf("      Ingrese numero de iteraciones: ");scanf("%d",&iteraciones);
    printf("\n      i       Po          p\n");
	
	while(i <= iteraciones){
		p =((-pow(p0,3)+6.5*pow(p0,2)+3.1)/11.2);
		printf("      %d   %f   %f\n",i,p0,p);
		if(fabs(p-p0)<tol){
			printf("\n      EXITO EN LA %d ITERACION, P = %f \n\n",i,p);
			system("pause");
			exit(-1);
		}
		i++;
		p0=p;
	}
	printf("El metodo fallo despues de %d iteraciones",i);
	return 0;
}
