#include <stdio.h>

  int main(){
  printf("desafio trunfo! /n");

  char estado [19] = "maranhao";
  char numero = 100;
  char cidade = "são luiz"; 
  int populacao =  15000;
  float area =  10000;
  float pib = 1300;
  int pontos = 1000;
  
  printf("digite o nome do estado:");
  scanf("%19s", estado);

   printf("digite a sigla do estado:");
   scanf("%s", numero);

   printf("digite o nome da cidade:");
   scanf("%s", cidade);
   
   printf("digite um numero:");
   scanf("%d", &numero);

   printf("digite a populacao:");
   scanf("%d", &populacao);

   printf("digite a area:");
   scanf("%f", &area);

   printf("digite o pib:");
   scanf("%F", &pib);

   printf("digite os pontos:");
   scanf("%d", &pontos );

   return 0;
}
