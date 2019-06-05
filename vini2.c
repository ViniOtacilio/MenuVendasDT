#include <stdio.h>
#include <locale.h>
#include <rlutil.h>

int opcao;
int quantidade;
int escolha;
int precohamb1;
int precohamb2;
int precohamb3;
int pt;

int lanche1() {
		precohamb1 = quantidade * 10;
		return precohamb1; 
}
int lanche2() {
		precohamb2 = quantidade * 12;
		return precohamb2; 
}
int lanche3() {
		precohamb3 = quantidade * 14;
		return precohamb3; 
}
int precototal() {
	pt = precohamb1+precohamb2+precohamb3;
	return pt;
}


int main ()
{
		
    setlocale(LC_ALL, "Portuguese");
    setColor(RED);
    // Módulo de venda
	printf("\t\t\t\t\t\tMICKEY & DONALD'S\n\n");
	setColor(BLUE);
    printf ("\n\n \t\t\t\tBem vindo ao Drive Thru do Mickey & Donald's\n\n");
    do {
    	printf("\n\n Faça seu pedido\n\n");
    	setColor(WHITE);
    	printf ("\n 0. SAIR \n");
		printf ("\n 1. Hamburguer Vinicilia....................................R$%0.2f\n");
		printf ("\n 2. Hamburguer Arturlicia...................................R$%0.2f\n");
		printf ("\n 3. Hamburguer Joaolobomau..................................R$%0.2f\n");
			setColor(GREEN);
		printf ("\n\tOpção escolhida:\t");
		
		scanf("%i", &opcao);
		
		
		
		switch (opcao) 
		{
			case 0: 
						printf ("\nAgradecemos sua visita!");
						return 0;
						break;
						
			case 1 : 
						printf ("Hamburguer Vinicilia\n");
						printf("\n\tQuantas unidades deseja?");
						scanf ("%d", &quantidade);
						break;
						
			case 2 : 
						printf ("Hamburguer Arturlicia\n");
						printf("\n\tQuantas unidades deseja?");
						scanf ("%d", &quantidade);
						break;
						
			case 3 :
						printf("Hamburguer Joaolobomau\n");
						printf("\n\tQuantas unidades deseja?");
						scanf ("%d", &quantidade);
						break;
						
			default: 	printf ("Código inexistente");
						return 0;}
						
	printf ("Deseja continuar comprando? 1 pra sim e 2 pra não\n");
	scanf ("%d", &escolha);
}while (escolha==1);
	printf ("O preço total é %d", precototal);
}





