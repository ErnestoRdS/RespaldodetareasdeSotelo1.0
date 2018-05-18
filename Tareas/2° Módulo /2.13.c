#include<stdio.h> 
#include<math.h> 
int main() 
{ 
	int x; 
       	float fx; 	
	printf("Introduce el valor de X \t"); 
	scanf("%d", &x); 
	if (x%4==0) 
	{ 
		fx = pow(x,2);
		printf("F(x) = %.0f \n",fx); 
	} 
	else if (x%4==1)
	{ 
		fx = (float) x / 6; 
		printf("El valor de F(x) es %.2f \n", fx); 
	} 
	else if (x%4==2) 
	{ 
		fx = sqrt(x); 
		printf("F(x) equivale a %.4f \n", fx); 
	} 
	else if(x%4==3) 
	{ 
		fx = pow(x,3) + 5; 
		printf("F(x) vale %.0f \n", fx); 
	} 
} 
