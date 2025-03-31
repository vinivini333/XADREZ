#include <stdio.h>

//FUNÇÕES RECUSIVAS

void moverTorre(int casas1){
    if (casas1 > 0) {
    
       printf("Torre move para Direita\n");
       moverTorre(casas1 - 1);
    }     
}
void moverBispo(int vertical, int horizontal){
    if (vertical > 0 && horizontal > 0)
    {
       printf("Bispo move para Cima, Direita\n");
       moverBispo(vertical - 1 , horizontal - 1);
    }  
}
void moverRainha(int casas2){
    if (casas2 > 0)
    {
       printf("Rainha move para esquerda\n");
       moverRainha(casas2 - 1);
    }   
}

void moverCavalo1(int casasA){

   for(int i = 0 , j = 0; i <= casasA && j <= casasA; i++ , j++)
   { 
     printf("Cavalo Move para 'Baixo','Baixo','Esquerda'\n\n");
    moverCavalo1(casasA - 1 );
 }
}
void moverCavalo2(int casasB){

   for(int i = 0 , j = 0; i <= casasB && j <= casasB; i++ , j++)
   { 
     printf("Cavalo Move para 'Baixo','Baixo','Direita'\n\n");
    moverCavalo2(casasB - 1 );
 }
}
void moverCavalo3(int casasC){

   for(int i = 0 , j = 0; i <= casasC && j <= casasC; i++ , j++)
   { 
     printf("Cavalo Move para 'Cima','Cima','Esquerda'\n\n");
    moverCavalo3(casasC - 1 );
 }
}
void moverCavalo4(int casasD){

   for(int i = 0 , j = 0; i <= casasD && j <= casasD; i++ , j++)
   { 
     printf("Cavalo Move para 'Cima','Cima','Direita'\n\n");
    moverCavalo4(casasD - 1 );
 }
}
void moverCavalo5(int casasE){

   for(int i = 0 , j = 0; i <= casasE && j <= casasE; i++ , j++)
   { 
     printf("Cavalo Move para 'Esquerda','Esquerda','Cima'\n\n");
    moverCavalo5(casasE - 1 );
 }
}
void moverCavalo6(int casasF){

   for(int i = 0 , j = 0; i <= casasF && j <= casasF; i++ , j++)
   { 
     printf("Cavalo Move para 'Esquerda','Esquerda','Baixo'\n");
    moverCavalo6(casasF - 1 );
 }
}
void moverCavalo7(int casasG){

   for(int i = 0 , j = 0; i <= casasG && j <= casasG; i++ , j++)
   { 
     printf("Cavalo Move para 'Direita','Direita','Cima'\n");
    moverCavalo7(casasG - 1 );
 }
}
void moverCavalo8(int casasH){

   for(int i = 0 , j = 0; i <= casasH && j <= casasH; i++ , j++)
   { 
     printf("Cavalo Move para 'Direita','Direita','Baixo'\n");
    moverCavalo8(casasH - 1 );
 }
}


int main (){
    
    printf("\n##### TORRE #####\n");
    moverTorre (5);

    printf("\n##### BISPO #####\n");
    moverBispo (5 , 5);

    printf("\n##### RAINHA #####\n");
    moverRainha (8);

    printf("\n");

    int opcao;
    printf("Deseja mover Cavalo ?\n");  //MENU PARA MOVER CAVALO
    printf("1. Sim\n");
    printf("2. Não\n");
    scanf("%d" , &opcao);

    switch (opcao)
    {
    case 1: //OPÇÕES PARA MOVER CAVALO
        printf("1. Mover para 'Baixo','Baixo','Esquerda'\n");
        printf("2. Mover para 'Baixo','Baixo','Direita'\n");
        printf("3. Mover para 'Cima','Cima','Esquerda'\n");
        printf("4. Mover para 'Cima','Cima','Direita'\n");
        printf("5. Mover para 'Esquerda','Esquerda','Cima'\n");
        printf("6. Mover para 'Esquerda','Esquerda','Baixo'\n");
        printf("7. Mover para 'Direita','Direita','Cima'\n");
        printf("8. Mover para 'Direita','Direita','Baixo'\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
         case 1:
         printf("\n##### CAVALO #####\n");
         moverCavalo1 (0);
         break;
         case 2:
         printf("\n##### CAVALO #####\n");
         moverCavalo2 (0);
         break;
         case 3:
         printf("\n##### CAVALO #####\n");
         moverCavalo3 (0);
         break;
         case 4:
         printf("\n##### CAVALO #####\n");
         moverCavalo4 (0);
         break;
         case 5:
         printf("\n##### CAVALO #####\n");
         moverCavalo5 (0);
         break;
         case 6:
         printf("\n##### CAVALO #####\n");
         moverCavalo6 (0);
         break; 
         case 7:
         printf("\n##### CAVALO #####\n");
         moverCavalo7 (0);
         break;
         case 8:
         printf("\n##### CAVALO #####\n");
         moverCavalo8 (0);
         break;
        
        default:
         printf("Opção inválida\n");
         break;
        } 
        break;
   case 2:
   printf("Saindo...\n");
   break;
   default:
   printf("Opção inválida\n");
   break;
 }
 return 0;
}