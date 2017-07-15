  #include<stdio.h>
  #include<conio.h>
  #include<stdlib.h>
  main()
{
        int codigo,voto1,voto2,voto3,contador;
        voto1=0; voto2=0; voto3=0;
        for(contador = 1; contador <= 3; contador++)
        {
        printf("Codigo do calculo:\n" "1522-Ana Lucia\n""1523-Carlos Ramos\n""1524-Teofilo\n");
        scanf("%d",&codigo);            
           if (codigo==1522)
           voto1=voto1+1;
           else if (codigo==1523)
           voto2=voto2+1;
           else if (codigo==1524)
           voto3=voto3+1;
           else
           printf("Voto não existe");
           getch();
           system("cls");
             }
        printf("Votos \n Ana Lucia: %d \nCarlos Ramos: %d \nTeofilo: %d",voto1,voto2,voto3);
         if ((voto1 > voto2) && (voto1 > voto3))
          printf("\nVencedor: Ana Lucia com %d\n",voto1);
            if ((voto2 > voto1) && (voto2 > voto3))
          printf("\nVencedor: Carlos Ramos com %d\n",voto2); 
            if ((voto3 > voto2) && (voto3 > voto1))
          printf("\nVencedor: Teofilo com %d\n",voto3);
            if (voto1 = voto2 =voto3)
          printf("\n EMPATE \n");    
  getch();
}
