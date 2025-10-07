#include <stdio.h>
    int main(){
        int populacao, area, turismo;
        float pib;
        char cidade[50];
//criei duas variaveis para cada cidade
          int populacao2, area2, turismo2;
        float pib2;
         char cidade2[50];
        //informar ao usuario que ele deve fazer
        printf("Olá, digite as respostas e aperte enter ao finalizar \n");
        //começar as perguntas
        printf("Você esta no jogo supertrufo, por favor digite o nome da cidade escolhida: \n");
        scanf("%s" , &cidade);

        printf("Qual é o tamanho da população \n");
        scanf("%d",&populacao);

        printf("Qual a area da cidade: \n");
        scanf("%d",&area);

         printf("Qual o número de pontos turisticos: \n");
        scanf("%d",&turismo);

         printf("Qual o pib da cidade?\n");
        scanf("%f",&pib);
      

        //repetir o código acima

         printf("cadastre a segunda cidade: \n");
        scanf("%s", &cidade2);

        printf("Qual é o tamanho da população \n");
        scanf("%d",&populacao2);

        printf("Qual a area da cidade: \n");
        scanf("%d",&area2);

         printf("Qual o número de pontos turisticos: \n");
        scanf("%d",&turismo2);

         printf("Qual o pib da cidade?\n");
        scanf("%f",&pib2);

        //impressão das variaveis

        

        printf("cidade: %s \n", cidade2);
        printf("População: %d \n", populacao2);
        printf("area: %d \n", area2);
        printf("ponto turistico: %d \n", turismo2);
        printf("pib: %f \n", pib2);



        return 0;
    }

