int valorLanche;
float resultadoTotal;
float precoVariavel;
int r;

//fprintf(mod1,"",);

int main ()
{
	FILE*modulo;
	modulo=fopen("PRODUTS.txt", "w");
		
    setlocale(LC_ALL, "Portuguese");
    setColor(RED);
    // MÃ³dulo de venda
	printf("\t\t\t\t\t\tMICKEY & DONALD'S\n\n");
	setColor(BLUE);
    printf ("\n\n \t\t\t\tBem vindo ao Drive Thru do Mickey & Donald's\n\n");
    
	srand(time(NULL));/*semente gerada para a função rand a partir da hora atual do sistema, usa os segundos-para que sempre que fizer uma nova execução do prg gerar um valor novo*/
	r= rand() % 1000;
	printf("\nCÓDIGO DO PEDIDO: %d", r);
    fprintf(modulo,"\nCódigo do pedido: %d\n", r);
	do {
    	printf("\n\n Faça seu pedido\n\n");
    	setColor(WHITE);
    	printf ("\n 0. SAIR \n");
		printf ("\n 1. Hamburguer Vinicilia....................................R$10,00\n");
		printf ("\n 2. Hamburguer Arturlicia...................................R$12,00\n");
		printf ("\n 3. Hamburguer Joaolobomau..................................R$14,00\n");
			setColor(GREEN);
		printf ("\n\t Opçao escolhida:\t");
		
		scanf("%i", &opcao);
		
		
		
		switch (opcao) 
		{
			case 0: 
						printf ("\nAgradecemos sua visita!");
						return 0;
						break;
						
			case 1 : 
						preco=10.00;
						printf ("Hamburguer Vinicilia\n");
						printf("\n\tQuantas unidades deseja?");
						scanf ("%d", &quantidade);
						break;
						
			case 2 : 
						preco=12.00;
						printf ("Hamburguer Arturlicia\n");
						printf("\n\tQuantas unidades deseja?");
						scanf ("%d", &quantidade);
						break;
						
			case 3 :
						preco=14.00;
						printf("Hamburguer Joaolobomau\n");
						printf("\n\tQuantas unidades deseja?");
						scanf ("%d", &quantidade);
						break;
						
			default: 	printf ("Código inexistente");
						return 0;}
						
			//teste (sucesso)
			valorLanche = preco*quantidade;
			printf("\nO valor total deste lanche foi de R$%d", valorLanche);
			resultadoTotal = valorLanche+ precoVariavel;
			printf("\n\nO preço total da compra até o momento é R$%.2f\n", resultadoTotal);
			precoVariavel = resultadoTotal;
			printf("O valor do pedido é de: %.2f\n", precoVariavel);
			//fim do teste (sucesso)
			printf ("Deseja continuar comprando? 1 pra sim e 2 pra não\n");
			scanf ("%d", &escolha);
			
}while (escolha==1);
			
//	printf ("O preço total é %d", precototal);
}

