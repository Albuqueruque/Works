#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

 main()
{do{
	float a,b,result;
	int codigo,c,d,i,fat,count;
	   system("cls");
		printf("    ººSELECIONE SUA OPERACAOºº\n"
		"\n"
        " º1-Soma\n"
        " º2-Subtracao\n"
        " º3-Multiplicacao\n"
        " º4-Divisao\n"
		" º5-Resto da Divisao\n"
		" º6-Expoente\n"
		" º7-Fatorial\n"
		" º8-Media\n"
		" º9-Raiz Quadrada\n"
		" º10-SAIR\n");
        scanf("%d",&codigo);          
        switch(codigo)//Valor para as operações indicadas acima
	     {
	     	case(1)://soma
	     		system("cls");
	     		printf("   ºº SOMA ºº\n");
	     		printf("Valor de A: ");
	     		scanf("%g",&a);
	     		printf("Valor de B: ");
	     		scanf("%g",&b);
	     		result=a+b;
	     		printf("%g + %g = %g",a,b,result);
	     		break;
	     	case(2)://subtração
	     		system("cls");
	     		printf("   ºº SUBTRACAO ºº\n");
	     		printf("Valor de A: ");
	     		scanf("%g",&a);
	     		printf("Valor de B: ");
	     		scanf("%g",&b);
	     		result=a-b;
	     		printf("%g - %g = %g",a,b,result);
	     		break;
	     	case(3)://multiplicação
	     		system("cls");
	     		printf("   ºº MULIPLICACAO ºº\n");
	     		printf("Valor de A: ");
	     		scanf("%g",&a);
	     		printf("Valor de B: ");
	     		scanf("%g",&b);
	     		result=a*b;
	     		printf("%g x %g = %g",a,b,result);
	     		break;
	     	case(4)://divisão
	     		system("cls");
	     		printf("   ºº DIVISAOºº\n");
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
	     		printf("   ºº MODULO ºº\n");
	     		printf("Valor de A: ");
	     		scanf("%d",&c);
	     		printf("Valor de B: ");
	     		scanf("%d",&d);
	     		fat= c % d;
	     		printf(" O modulo da divisao %d / %d e %d",c,d,fat);
	     		break;
			case(6)://expoente
	     		system("cls");
	     		printf("   ºº EXPOENTE ºº\n");
	     		printf("Valor de A: ");
	     		scanf("%g",&a);
	     		printf("Digite o expoente: ");
	     		scanf("%d",&c);
				result=pow(a,c);
	     	    printf ( "%g ^ %d: %g",a,c,result);
	     		break;
	     	case(7)://fatorial
	     		system("cls");
	     		printf("   ºº FATORIAL ºº\n");
	     		printf("Digite o numero que deseja calcular o fatorial: ");
                scanf("%d", &i);
	            for(fat = 1; i > 1; i = i - 1){
                fat = fat * i;
                }
                printf("\nFatorial calculado: %d", fat);
	     		break;	
			case(8)://Média 
			    system("cls");
			    printf("   ºº MEDIA ºº\n");
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
			    printf("   ºº RAIZ QUADRADA ºº\n");
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
}while(getch()==49); //49 é o numero 1 em ASCII 
}
