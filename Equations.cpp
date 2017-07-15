#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
int a; int b; int c; int delta; float result1; float result2;
printf("CALCULO DO 2ºGRAU\n");
printf("Digite o valor a\n\n");
scanf("%d",&a);
printf("Digite o valor b\n\n");
scanf("%d",&b);
printf("Digite o valor c\n\n");
scanf("%d",&c);
delta = (b*b)-(4*a*c);
printf("O Delta e %d ",delta);
result1 = -(b + sqrt(delta))/2*a;
result2 = -(b - sqrt(delta))/2*a;
printf("Os resultados sao %f,%f",result1,result2);
getch();
}
