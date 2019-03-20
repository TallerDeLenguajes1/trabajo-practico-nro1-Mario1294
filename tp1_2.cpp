#include <stdio.h>
#include <stdlib.h>

int cuadrado(int a);
void cuadrado2(int a);
void invertir(int a, int b);

int main(void) 
{
	int num=5 , num2;
	int res=cuadrado(num);
	printf("Cuadrado de %d = %d\n",num,res);
	
	cuadrado2(num);
	
	printf("Ingrese un numero: ");
	scanf("%d",&num2);
	printf("Direccion: %p\n",&num2);
	printf("Valor: %d\n", num2);
	
	int a, b;
	printf("Ingrese a:");
	scanf("%d",&a);
	printf("Ingrese b:");
	scanf("%d",&b);
	
	invertir(a,b);

	return 0;
} 

int cuadrado(int a)
{
	int cuadrado;
	cuadrado = a*a;
	return cuadrado;
}
void cuadrado2(int a){
	printf("Cuadrado de %d = %d\n",a ,a*a);
}

void invertir(int a, int b)
{
	int c;
	c=a;
	a=b;
	b=c;
	printf("a = %d\n",a);
	printf("b = %d\n",b);
}
