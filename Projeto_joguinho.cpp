#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
 char nome[30]; int erros,r1,r2;
 erros=0;
 printf("Ola, seja bem ao nosso teste\n");
 printf("Digite sua nome: ");
 scanf("%s",&nome);
 system("cls");
 printf("Hmm... %s\n",nome);
 printf("Lembre-se, voce so tem 3 vidas, nas as desperdisse.");
 printf("\nVamos comecar com um desafio simples...\n");
 do{
 	 if(erros == 0){
 	 	 printf("\nVIDAS: |S2| S2| S2|\n");
          }else if(erros ==1){
   	 	    printf("\nVIDAS: |S2| S2|\n");
             }else{
   	 	      printf("\nVIDAS: |S2|\n");
             }
 printf("\nQual a soma entre esse numeros 165 + 392?\n");
 scanf("%d",&r1);
     if (r1 != 557){
      erros=erros+1;
	 	system("cls");
         printf("Certo, acho que teve um equivoco, vamos tentar novamente\n");
        }
         if (erros == 2){
	      system("cls");
	        printf("Serio volta para a primeira serie...\n");
              }else if (erros == 3){
     	         system("cls");
	               printf("Saia porfavor.");
                     exit(0);
                  } 
               if(r1 == 557){
    	        system("cls");
                 printf("Facil nao e mesmo, certo vamos continuar..");
	            }
 }while (r1 !=557 );
  do{
 	 if(erros == 0){
 	 	 printf("\nVIDAS: |S2| S2| S2|\n");
   }else if(erros ==1){
   	 	 printf("\nVIDAS: |S2| S2|\n");
   }else{
   	 	 printf("\nVIDAS: |S2|\n");
   }
 printf("\nQuem foi o autor das 95 teses pregada na porta da Igreja?\n"
 	"\n"
        " º1-Jesus Cristo\n"
        " º2-Joao Calvino\n"
        " º3-Martinho Lutero\n"
		" º4-Pitagoras\n");
 scanf("%d",&r2);
 if (r2 != 3 ){
  erros=erros+1;

	 	system("cls");
  printf("Certo, acho que teve um equivoco, vamos tentar novamente\n");
  }
   if (erros == 2){
	system("cls");
	printf("Serio volta para a primeira serie...\n");
    }if (erros == 3){
     	system("cls");
	printf("Saia porfavor.");
 exit(0);
    }
    if(r2 ==3){
    	 system("cls");
 printf("Agora vai ficar mais dificil, prosseguindo...");
	}
}while( r2 !=3);
}
