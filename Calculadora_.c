#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

 main()
{do{
	float a,b,result;
	int codigo,c,d,i,fat,count;
	   system("cls");
		printf("    ��SELECIONE SUA OPERACAO��\n"
		"\n"
        " �1-Soma\n"
        " �2-Subtracao\n"
        " �3-Multiplicacao\n"
        " �4-Divisao\n"
		" �5-Resto da Divisao\n"
		" �6-Expoente\n"
		" �7-Fatorial\n"
		" �8-Media\n"
		" �9-Raiz Quadrada\n"
		" �10-SAIR\n");
        scanf("%d",&codigo);          
        switch(codigo)//Valor para as opera��es indicadas acima
	     {
	     	case(1)://soma
	     		system("cls");
	     		printf("   �� SOMA ��\n");
	     		printf("Valor de A: ");
	     		scanf("%g",&a);
	     		printf("Valor de B: ");
	     		scanf("%g",&b);
	     		result=a+b;
	     		printf("%g + %g = %g",a,b,result);
	     		break;
	     	case(2)://subtra��o
	     		system("cls");
	     		printf("   �� SUBTRACAO ��\n");
	     		printf("Valor de A: ");
	     		scanf("%g",&a);
	     		printf("Valor de B: ");
	     		scanf("%g",&b);
	     		result=a-b;
	     		printf("%g - %g = %g",a,b,result);
	     		break;
	     	case(3)://multiplica��o
	     		system("cls");
	     		printf("   �� MULIPLICACAO ��\n");
	     		printf("Valor de A: ");
	     		scanf("%g",&a);
	     		printf("Valor de B: ");
	     		scanf("%g",&b);
	     		result=a*b;
	     		printf("%g x %g = %g",a,b,result);
	     		break;
	     	case(4)://divis�o
	     		system("cls");
	     		printf("   �� DIVISAO��\n");
	     		printf("Valor de A: ");
	     		scanf("%g",&a);
	     		printf("Valor de B: ");
	     		scanf("%g",&b);
	     		if(b ==0){
	     			printf("VALOR INVALIDO");
	     			break;
				}else{
	     		result=a/b;
	     		printf("%g / %g = %g",a,b,result);
	     		break;
			    }
		    case(5)://modulo
	     		system("cls");
	     		printf("   �� MODULO ��\n");
	     		printf("Valor de A: ");
	     		scanf("%d",&c);
	     		printf("Valor de B: ");
	     		scanf("%d",&d);
	     		fat= c % d;
	     		printf(" O modulo da divisao %d / %d e %d",c,d,fat);
	     		break;
			case(6)://expoente
	     		system("cls");
	     		printf("   �� EXPOENTE ��\n");
	     		printf("Valor de A: ");
	     		scanf("%g",&a);
	     		printf("Digite o expoente: ");
	     		scanf("%d",&c);
				result=pow(a,c);
	     	    printf ( "%g ^ %d: %g",a,c,result);
	     		break;
	     	case(7)://fatorial
	     		system("cls");
	     		printf("   �� FATORIAL ��\n");
	     		printf("Digite o numero que deseja calcular o fatorial: ");
                scanf("%d", &i);
	            for(fat = 1; i > 1; i = i - 1){
                fat = fat * i;
                }
                printf("\nFatorial calculado: %d", fat);
	     		break;	
			case(8)://M�dia 
			    system("cls");
			    printf("   �� MEDIA ��\n");
			    count=0;
				do{
					printf("\nDigite as notas: ");
				    scanf("%f",&a);
		            b+=a;
				    count=count+1;
				    printf("\nDigite 0 para calcular ou continue adicionando as notas");
				}while(getch()!=48);
				system("cls");
                result = b/count;
                printf("\nTotal = %g",b);
                printf("\nA media do aluno: %g ",result);
				break;
			case(9)://Raiz quadrada
			    system("cls");
			    printf("   �� RAIZ QUADRADA ��\n");
			    printf("Valor de A: ");
			    scanf("%d",&c);
			    result=sqrt(c);
			    printf("Raiz quadrada de %d e %g",c,result);
			    break;
			case(10)://sair
			    return(0);	  
		 }
		   getch();
system("cls");
printf("Digite 1 para continuar Ou qualque tecla para Sair\n\n"
"\n"
);
}while(getch()==49); //49 � o numero 1 em ASCII 
}
