#include<stdio.h> 
#include<math.h> 
int main() 
{ 
	float tan, cot, ang; 
	printf("Introduzca el ángulo \n"); 
	scanf("%f", &ang); 
	if (cos(ang)!=0){ 
		tan = (sin(ang))/(cos(ang));  
		printf("La Tangente de %.2f es %.4f \t", ang, tan);}  
	if (sin(ang)!=0){ 
		cot = (cos(ang))/(sin(ang)); 
	       	printf("\n"); 
		printf("La Cotangente es %.4f \t", cot);} 
}
