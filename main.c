//Vitor Witt Martin
//termino codificação: 10:50
//termino teste e formatação: 11:10

#include<stdio.h>
#include<conio.h>

#include "cor.h"


int main (void )
{
	int op;
	RGB exemplo[C];
	
	do {
		op = Menu();

		switch (op) {
			case 1: // Incluir
				InserirImagem(exemplo);	break;
				
			case 2: // Transformar em Tons de Cinza
				GerarCor(exemplo,corF); break;
				
			case 3: // Consultar
				Consultar(exemplo,corF); break;
		
		}
	} while (op != 4);

	return 0;	
}
