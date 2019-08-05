#include<stdio.h>
#include<locale.h>
#include<rlutil.h>

int pagamento;
int opcao;
int quantidade;
int escolha;
int preco;
int r;
int tamanhocartao;
float valorLanche;
float resultadoTotal;
float precoVariavel;
char cartao[20];

int main ()
{
	//Arquivos TXT
	FILE*modulo;
	FILE*arquivo;
	FILE*texto;
	modulo=fopen("PRODUTOS.txt", "w");
	arquivo=fopen("PAGAMENTOS.txt", "w");
	texto=fopen("CARTOES.TXT", "w");
		
    setlocale(LC_ALL, "Portuguese");
    setColor(RED);
    // Módulo de venda
	printf("\t\t\t\t\t\tMICKEY & DONALD'S\n\n");
	setColor(BLUE);
    printf ("\n\n \t\t\t\tBem vindo ao Drive Thru do Mickey & Donald's\n\n");
    
	srand(time(NULL));/*semente gerada para a função rand*/
	r= rand() % 1000;
	printf("\nCÓDIGO DO PEDIDO: %d", r);
    fprintf(modulo,"\nCódigo do pedido: %d\n\n", r);
    fprintf(arquivo,"\nCódigo do pedido: %d\n\n", r);
    fprintf(texto,"\nCódigo do pedido: %d\n\n", r);
    //Menu no TXT
    fprintf(modulo,"Pedido:\n\n");
	fprintf(modulo,"CÓDIGO		PRODUTO		CUSTO UNITÁRIO		QUANTIDADE PEDIDA		VALOR DO ITEM\n");
	do {
    	printf("\n\n Faça seu pedido\n\n");
    	setColor(WHITE);
    	printf ("\n 0. SAIR \n");
		printf ("\n 1. Hamburguer Heisenberg....................................R$10,00\n");
		printf ("\n 2. Hamburguer Pinkman...................................R$12,00\n");
		printf ("\n 3. Hamburguer Jesse..................................R$14,00\n");
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
						printf ("\tHamburguer Heisenberg\n");
						fprintf(modulo,"01  		HEISENBERG	R$10,00\t\t");;
						printf("\n\tQuantas unidades deseja?");
						scanf ("%d", &quantidade);
						fprintf(modulo,"\t%d\t\t\t", quantidade);
						break;
						
			case 2 : 
						preco=12.00;
						printf ("\tHamburguer Pinkman\n");
						fprintf(modulo,"\n02  		PINKMAN		R$12,00\t\t");;
						printf("\n\tQuantas unidades deseja?");
						scanf ("%d", &quantidade);
						fprintf(modulo,"\t%d\t\t\t", quantidade);
						break;
						
			case 3 :
						preco=14.00;
						printf("\tHamburguer Jesse\n");
						fprintf(modulo,"\n03 		JESSE		R$14,00\t\t");;
						printf("\n\tQuantas unidades deseja?");
						scanf ("%d", &quantidade);
						fprintf(modulo,"\t%d\t\t\t", quantidade);
						break;
						
			default: 	printf ("Código inexistente");
						return 0;} 
			//teste (sucesso)
			valorLanche = preco*quantidade;
			printf("\nO valor total deste lanche foi de R$%.2f\n", valorLanche);
			fprintf(modulo,"\tR$%.2f\n",valorLanche);
			resultadoTotal = valorLanche+ precoVariavel;
			precoVariavel = resultadoTotal;
			printf("O valor do pedido é de: %.2f\n", precoVariavel);
			//fim do teste (sucesso)
			printf ("Deseja continuar comprando? 1 pra sim e 2 pra não\n");
			scanf ("%d", &escolha);
			
}while (escolha==1);
			fprintf(modulo,"\n								TOTAL DA COMPRA:	R$%.2f",resultadoTotal);
//MODULO DE VENDAS FINALIZADO

//MODULO DE PAGAMENTO COMEÇANDO
	setColor(WHITE);
	printf("Como você deseja realizar o pagamento?\n");
	printf("01.Dinheiro\n");
	printf("02.Cartao de crédito\n");
	printf("03.Cartão de débito\n");
	printf("04.Cheque\n");
	scanf("%d",&pagamento);
	switch (pagamento) {
		case 0: printf("Comando inválido");
			
		case 1:
			setColor(GREEN);
			printf("\nPEDIDO PAGO COM: DINHEIRO\n");
			setColor(GREY);
			fprintf (arquivo, "CÓDIGO DO PEDIDO");
			fprintf(arquivo, "FORMA DE PAGAMENTO: DINHEIRO\n");
			break;
		
		case 2: printf("Cartão de Crédito\n");
				while(tamanhocartao!=16){
				printf("\nQual o número do seu cartão? Ele deve ter 16 dígitos.\n");
				scanf("%s", &cartao);
				//determinar quantos números tem no número do cartão
				tamanhocartao=strlen(cartao);
				//cartão com menos ou mais de 16 caracteres.
				if(tamanhocartao!=16){
				setColor(WHITE);
				printf("CARTÃO INVÁLIDO!!\n");}}
				//cartão digitado de forma correta
				if(tamanhocartao=16){
				printf("\nPEDIDO PAGO COM: ");
				setColor(13);//LILÁS
				printf("CARTÃO DE CRÉDITO\n");
				//colocar o número do cartão no arquivo de texto com asterístico em determinadas posições
				cartao[4]='*'; cartao[5]='*'; cartao[6]='*'; cartao[7]='*'; cartao[8]='*'; cartao[9]='*'; cartao[10]='*'; cartao[11]='*';
				fprintf(texto,"NÚMERO DO CARTÃO: %s",cartao);}
				break;
				
				case 3: printf("Cartão de Débito\n");
				while(tamanhocartao!=16){
				printf("\nQual o número do seu cartão? Ele deve ter 16 dígitos.\n");
				scanf("%s", &cartao);
				//determinar quantos números tem no número do cartão
				tamanhocartao=strlen(cartao);
				//cartão com menos ou mais de 16 caracteres.
				if(tamanhocartao!=16){
				setColor(WHITE);
				printf("CARTÃO INVÁLIDO!!\n");}}
				//cartão digitado de forma correta
				if(tamanhocartao=16){
				printf("\nPEDIDO PAGO COM: ");
				setColor(13);//LILÁS
				printf("CARTÃO DE DÉBITO\n");
				//colocar o número do cartão no arquivo de texto com asterístico em determinadas posições
				cartao[4]='*'; cartao[5]='*'; cartao[6]='*'; cartao[7]='*'; cartao[8]='*'; cartao[9]='*'; cartao[10]='*'; cartao[11]='*';
				fprintf(texto,"NÚMERO DO CARTÃO: %s",cartao);}
				break;
		
				case 4:
				setColor(BLUE);
				printf("\nPEDIDO PAGO COM: CHEQUE\n");//AZUL
				setColor(GREY);
				fprintf(arquivo, "FORMA DE PAGAMENTO: CHEQUE\n");
				break;
				
				default:
				printf("\n");
				}
				setColor(3);		
			printf("\n\n\nObrigada! Volte sempre!");
			
			fprintf(arquivo, "VALOR TOTAL DO PEDIDO: R$%.2f", resultadoTotal);
			setColor(GREY);				
			}
