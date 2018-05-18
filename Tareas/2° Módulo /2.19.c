//Programa para conversión de medidas. 
#include <stdio.h> 

int main(){ 
  int op; 
  char so; 
  float med; 

  printf("Introduzca la medida que quiere convertir \n"); 
  scanf("%f", &med); 

  printf("Elija su tipo de conversión \n"); 
  printf("1) Medidas de Longitud \n"); 
  printf("2) Medidas de Volumen \n"); 
  printf("3) Medidas de Peso \n"); 
  scanf("%d", &op); 

  switch(op){ 
    case 1: 
    printf("A) Para convertir de pulgadas a milı́metros.\n" 
           "B) Para convertir de yardas a metros. \n"
           "C) Para convertir de millas a kilómetros. \n"
           "D) Para convertir de pulgadas 2 a centimetros 2. \n" 
           "E) Para convertir de pies 2 a metros 2. \n"
           "F) Para convertir de yardas 2 a metros 2. \n"
           "G) Para convertir de acres a hectáreas. \n"
           "H) Para convertir de millas 2 a kilometros 2. \n");
    scanf(" %c", &so); 

    if((so == 'A')||(so == 'a')) 
    { 
      printf("%.4f in equivalen a %.4f milímetros \n", med, (med * 25.4)); 
    } 
    else if((so == 'B')||(so == 'b'))
    { 
      printf("%.4f yd equivalen a %.4f metros \n", med, (med * 0.9144)); 
    }
    else if((so == 'C')||(so == 'c')) 
    { 
      printf("%.4f mi equivalen a %.4f km \n", med, (med * 1.60934)); 
    }
    else if((so == 'D')||(so == 'd')) 
    { 
      printf("%.4f in2 equivalen a %.4f cm2 \n", med, (med * 6.4516)); 
    }
    else if((so == 'E')||(so == 'e')) 
    { 
      printf("%.4f ft2 equivalen a %.4f m2 \n", med, (med * 0.092903)); 
    }
    else if((so == 'F')||(so == 'f')) 
    { 
      printf("%.4f yd2 equivalen a %.4f m2 \n", med, (med * 0.836127)); 
    }
    else if((so == 'G')||(so == 'g')) 
    { 
      printf("%.4f acres equivalen a %.4f hectáreas \n", med, (med * 0.404686)); 
    }
    else if((so == 'H')||(so == 'h')) 
    { 
      printf("%.4f mi2 equivalen a %.4f km2 \n", med, (med * 2.58999)); 
    }
    else 
    { 
      printf("No existe lo que pides, pedazo de basura >:v \n"); 
    } 

    break; 

    case 2:
    printf("A) Para convertir de pies 3 a metros 3. \n"
           "B) Para convertir de yardas 3 a metros 3. \n"
           "C) Para convertir de pintas a litros. \n"
           "D) Para convertir de galón a litros. \n"); 
    scanf(" %c", &so); 

    if((so == 'A')||(so == 'a'))
    { 
      printf("%.4f ft3 equivalen a %.4f m3 \n", med, (med * 0.0283168));
    }
    else if((so == 'B')||(so == 'b')) 
    {
      printf("%.4f yd3 equivalen a %.4f m3 \n", med, (med * 0.764555));
    }
    else if((so == 'C')||(so == 'c')) 
    {
      printf("%.4f pintas equivalen a %.4f litros \n", med, (med * 0.568));
    }
    else if((so == 'D')||(so == 'd')) 
    {
      printf("%.4f galones equivalen a %.4f litros \n", med, (med * 3.7854)); 
    }
    else 
    {
      printf("No existe esa opción :p \n"); 
    }

    break; 

    case 3: 
    printf("A) Para convertir de onzas a gramos. \n"
           "B) Para convertir de libras a kilogramos. \n"
           "C) Para convertir de toneladas inglesas a toneladas. \n"); 
    scanf(" %c", &so); 

    if((so == 'A')||(so == 'a'))
    { 
      printf("%.4f Oz equivalen a %.4f gr \n", med, (med * 28.3495)); 
    } 
    else if((so == 'B')||(so == 'b'))
    {
      printf("%.4f lb equivalen a %.4f kg \n", med, (med * 0.453592)); 
    }
    else if((so == 'C')||(so == 'c'))
    {
      printf("%.4f toneladas inglesas equivalen a %.4f toneladas  \n", med, (med * 1.2)); 
    }
    else 
    { 
      printf("Erróneo :v \n"); 
    } 

    break; 

    default: 
    printf("¿De casualidad viste una cuarta opción? O, ¿por qué andas haciendo estas tonterías? >¿:v \n"); 
    break; 
  }
}
