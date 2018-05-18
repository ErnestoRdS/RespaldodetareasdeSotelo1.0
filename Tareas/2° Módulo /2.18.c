#include<stdio.h>
#include<math.h>

int main(){
  unsigned int A, B, C;
  float s, area;

  printf("Introduzca lado A: ");
  scanf("%d", &A);

  printf("Introduce lado B: ");
  scanf("%d", &B);

  printf("Introduce lado C: ");
  scanf("%d", &C); 

  if (((A + B) > C)&&((A + C) > B)&&((B + C) > C)) 
  { 
    if(((A == B)&&(A != C))||((A == C)&&(A != B))||((B == C)&&(B != C))) 
    { 
      printf("Es un triángulo Isosceles \n"); 
    }

    else if((A == C)&&(A == B)&&(B == C)) 
    { 
      printf("Es un triángulo Equilátero \n"); 
    }

    else 
    { 
      printf("Es un triángulo Escaleno \n"); 
    }
    
    s = A + B + C; 
    area = sqrt((s * (s - A) * (s - B) * (s - C))); 

    printf("El área es %.2f \n", area); 
  } 
}
