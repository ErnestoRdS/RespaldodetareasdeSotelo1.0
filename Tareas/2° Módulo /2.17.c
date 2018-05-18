#include<stdio.h> 
int main() 
{ 
	int cl, dur; 
	float cos; 
	printf("¿A qué parte del mundo llamó? \n"); 
	printf("América del Norte - 12 \n"); 
	printf("América Central   - 15 \n"); 
	printf("América del Sur   - 18 \n"); 
	printf("Europa            - 19 \n"); 
	printf("Asia              - 23 \n"); 
	printf("África            - 25 \n"); 
	printf("Oceanía           - 29 \n"); 
	scanf("%d", &cl); 
	printf("¿Cuántos minutos duró la llamada? \t"); 
       	scanf("%d", &dur); 
	switch (cl) 
	{ 
		case 12: 
			if (dur>=4) 
			{ 
				cos = (float) dur * 1.5; 
				printf("Pague %.2f", cos); 
			} 
			else 
			{ 
				cos = (float) dur * 2; 
			       	printf("Paga %.2f", cos); 
			} 
      break; 

		case 15: 
			if (dur>=4) 
			{
				cos = (float) dur * 1.8; 
				printf("Paga %.2f", cos); 
			} 
			else 
			{ 
				cos = (float) dur * 2.2; 
				printf("Paga %.2f", cos); 
			} 
      break; 

		case 18: 
			if (dur>=4) 
      { 
        cos = (float) dur * 3.5; 
        printf("Paga %.2f", cos); 
      }
      else 
      { 
        cos = (float) dur * 4.5; 
        printf("%.2f", cos); 
      }
      break; 

    case 19: 
			if (dur>=4) 
      { 
        cos = (float) dur * 2.7; 
        printf("Paga %.2f", cos); 
      }
      else 
      { 
        cos = (float) dur * 3.5; 
        printf("%.2f", cos); 
      }
      break; 

    case 23: 
			if (dur>=4) 
      { 
        cos = (float) dur * 4.6; 
        printf("Paga %.2f", cos); 
      }
      else 
      { 
        cos = (float) dur * 6; 
        printf("%.2f", cos); 
      }
      break;

     case 25: 
			if (dur>=4) 
      { 
        cos = (float) dur * 4.6; 
        printf("Paga %.2f", cos); 
      }
      else 
      { 
        cos = (float) dur * 6; 
        printf("%.2f", cos); 
      }
      break;

     case 29: 
			if (dur>=4) 
      { 
        cos = (float) dur * 3.9;
        printf("Paga %.2f", cos); 
      }
      else 
      { 
        cos = (float) dur * 5; 
        printf("%.2f", cos); 
      }
      break; 

      default: 
      printf("No tardé 10 minutos haciendo este programa absurdamente largo sólo para que alguien como Tú haga lo que quiera"); 
      break; 

  }
}
