//Vitor Witt Martin
//termino codificação: 10:50
//termino teste e formatação: 11:10

#include<stdio.h>
#include<conio.h>
#define C 3
 
 typedef struct 
 {
 	int r[C][C];
 	int g[C][C];
 	int b[C][C];
 }RGB;
 
 int corF[C][C];
 
 
  void InserirImagem(RGB exemplo[C]);
  void GerarCor(RGB exemplo[C],int corF[C][C]);
  void Consultar(RGB exemplo[C],int corF[C][C]);
  int Menu();
 
  
  int Menu() {
	int op;
	
	
	do {
		printf("\n\n******* MENU *******\n");
		printf("1. Incluir\n");
		printf("2. Transformar em Tons de Cinza\n");
		printf("3. Consultar\n");
		printf("4. Sair\n");
		printf("\nDigite uma opcao: ");
		scanf("%d", &op);
		fflush(stdin);
	} while (op<1 || op>4);

	return op;
}
 
 
 
 
 void InserirImagem(RGB exemplo[C]) {
	// Inseri a imagem colorida
	
 int i,j;
	
	 printf ("\nDigite os valores para os elementos da matriz RGB\n\n");
	 
	 for(i=0; i<C; i++)
{
	 
	 for(j=0;j<C;j++)
	 {
	 
	
	 	do{
	
	 		printf("Insira o valor de R:");
	        scanf ("%d", &exemplo[ i ].r[i][j]);
	        fflush(stdin);
	       
	    }while(exemplo[ i ].r[i][j]>255);
	 		
			   
			   
	       
	    do{
	       printf("Insira o valor de G:");
	       scanf ("%d", &exemplo[ i ].g[i][j]);
	       fflush(stdin);
	       
	    }while(exemplo[ i ].g[i][j]>255);
	 		
	       
	       
	    do{
	       printf("Insira o valor de B:");
	       scanf ("%d", &exemplo[ i ].b[i][j]);
	       fflush(stdin);
	    }while(exemplo[ i ].b[i][j]>255);
	      	
	      }
	      	
	       
	   }
	   
	   
}

void GerarCor(RGB exemplo[C], int corF[C][C]){
	int i,j;
	
	for(i=0;i<C;i++)
	{
		for(j=0;j<C;j++)
			 {	 
	 			corF[i][j]= ( (exemplo[i].r[i][j] + exemplo[i].g[i][j] + exemplo[i].b[i][j]) /3.0); 
	 			fflush(stdin);	       
	   		}	
	}
}

void Consultar(RGB exemplo[C],int corF[C][C]) {
int i,j;
	
printf("\n\n\nRegistro: \n\n");			
printf("\n\n\nImagem Colorida: \n\n");
				
				
for(i=0; i<C; i++)
{
	for (j=0; j<C; j++) 
	{
			printf("R: %03d", exemplo[i].r[i][j]);
			printf("| G: %03d", exemplo[i].g[i][j]);
			printf("|B: %03d   ", exemplo[i].b[i][j]);
		
		
	}
	printf("\n\n");
}


printf("\n\n\nImagem em tons de cinza: \n\n");

for (i=0; i<C; i++) {
	for (j=0; j<C; j++) 
	{
			printf(" %03d |", corF[i][j]);
			
		
		
	}
	printf("\n\n");
}
	
			
}
