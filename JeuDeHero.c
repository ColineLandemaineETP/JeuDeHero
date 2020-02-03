#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//type de structure
struct lieux {
  char nom[20];
  char description[150];
  int staminaDéplacement;   //ressource PV pour les déplacements 
}


typedef struct lieux lieux; 

lieux Opale = {"Opale", "Point de rencontre et lieu de repos pour les aventuriers de passage", 50};
lieux Roncenoir = {"Roncenoir", "Une ville sombre située à l'entrée de la Grande Forêt",50};
lieux Amaurath = {"Amaurath", "Ruines de l'ancien Palais des Sages, perdurant au fin fond de la Grande Forêt", 50};
lieux Repère = {"Repère", "Il s'agit du repère de la sorcière d'Ombre, la gardienne de la fôret et du Grand Arbre, ce 
n'est pas un endroit recommandable", 50};

  



int main(){
  int choix;
  int staminaJoueur = 100
  int choixRepos
  int repos = 50
}

char choixLieux [4];  //ID des Lieux
lieux[0] = Opale;
lieux[1] = Roncenoir;
lieux[2] = Amaurath;
lieux[3] = Repère


while (staminaJoueur > 0){

printf("Vous incarnez un aventurier commençant son aventure au point de rencontre Opale, un petit village vivant qui
  bouge beaucoup et où bon nombre de camarades se retrouve ou se rencontre ! Vous partez seul, votre objectif est de 
  trouver des feuilles du Grand Arbre, réputées pour leurs propriétés médicinales.\n");
printf("Veuillez choisir votre première destination. %s [1], %s [2], %s [3],\n");
scanf("%s", choixLieux);

 
if (choixLieux == 1){
  printf("Vous décidez de vous engager dans la forêt pour atteindre la ville principale et récolter des informations.\n");
     if (staminaJoueur <49){
     printf("Désolé, vous n'avez pas assez d'énergie pour atteindre cet endroit. Voulez-vous vous reposer ? Accepter[0], Refuser[1] \n", staminaJoueur);
     scanf("%d", &choixRepos);
      if (choixRepos == 1){
      staminaJoueur = staminaJoueur + repos
     }
  printf("%s\n", Roncenoir.description);
  staminaJoueur = staminaJoueur - staminaDéplacement;
  printf("vous avez %d points de stamina.\n", staminaJoueur);

    printf("Que souhaitez-vous faire ensuite ? Vous rendre à : %s [0]: %d, %s [2]: %d, %s [3]: %d\n",Opale.nom, Opale.ID, Amaurath.nom, Amaurath.ID, Repère.nom, Repère.ID);  //Chapitre -- Changer de chapitre / de lieux.
    scanf("%d", &choixID);
       if (choixLieux == 0){
    printf("Vous retournez à votre point de départ.\n");
    printf("%s\n", Opale.description); 
    staminaJoueur = staminaJoueur - staminaDéplacement;
      }
       if (choixLieux == 2){
    printf("En vous engageant dans la forêt, vous finissez par vous perdre, vous attérissez dans un tas de ruines mystérieuses
    et décidez donc de vous arrêter pour explorer.\n");
       if (staminaJoueur <49){
     printf("Désolé, vous n'avez pas assez d'énergie pour atteindre cet endroit. Voulez-vous vous reposer ? Accepter[0], Refuser[1] \n", staminaJoueur);
     scanf("%d", &choixRepos);
      if (choixRepos == 1){
      staminaJoueur = staminaJoueur + repos
     }
    printf("%s\n", Amaurath.description); 
    staminaJoueur = staminaJoueur - staminaDéplacement;
      }
       if (choixLieux == 3){
    printf("Après une longue exploration, fatigué, vous finissez par atteindre un arbre impossant qui semble... animé.\n");
       if (staminaJoueur <49){
     printf("Désolé, vous n'avez pas assez d'énergie pour atteindre cet endroit. Voulez-vous vous reposer ? Accepter[0], Refuser[1] \n", staminaJoueur);
     scanf("%d", &choixRepos);
      if (choixRepos == 1){
      staminaJoueur = staminaJoueur + repos
     }
    printf("%s\n", Repère.description); 
    staminaJoueur = staminaJoueur - staminaDéplacement;
      }

    
}

if (choixLieux == 2){
  printf("En vous engageant dans la forêt, vous finissez par vous perdre, vous attérissez dans un tas de ruines mystérieuses
  et décidez donc de vous arrêter pour explorer. \n");
  printf("%s\n", Amaurath.description);
  staminaJoueur = staminaJoueur - staminaDéplacement;
  printf("vous avez %d points de stamina.\n", staminaJoueur);
  printf("Que souhaitez-vous faire ensuite ? Vous rendre à : %s [0]: %d, %s [1]: %d, %s [3]: %d\n",Opale.nom, Opale.ID, Roncenoir.nom, Roncenoir.ID, Repère.nom, Repère.ID);  //Chapitre -- Changer de chapitre / de lieux.
  scanf("%d", &choixID);
     if (choixLieux == 0){
    printf("Vous retournez à votre point de départ.\n");
    printf("%s\n", Opale.description); 
    staminaJoueur = staminaJoueur - staminaDéplacement;
      }
       if (choixLieux == 1){
    printf("Vous décidez de vous engager dans la forêt pour atteindre la ville principale et récolter des informations.\n");
    printf("%s\n", Roncenoir.description); 
    staminaJoueur = staminaJoueur - staminaDéplacement;
      }
       if (choixLieux == 3){
    printf("Après une longue exploration, fatigué, vous finissez par atteindre un arbre impossant qui semble... animé.\n");
    printf("%s\n", Repère.description); 
    staminaJoueur = staminaJoueur - staminaDéplacement;
      }
}

if (choixLieux == 3){
  printf("Après une longue exploration, fatigué, vous finissez par atteindre un arbre impossant qui semble... animé. \n");
  printf("%s\n", Repère.description);
  staminaJoueur = staminaJoueur - staminaDéplacement;
  printf("vous avez %d points de stamina.\n", staminaJoueur);
  printf("Que souhaitez-vous faire ensuite ? Vous rendre à : %s [0]: %d, %s [1]: %d, %s [2]: %d\n",Opale.nom, Opale.ID, Roncenoir.nom, Roncenoir.ID, Amaurath.nom, Amaurath.ID);  //Chapitre -- Changer de chapitre / de lieux.
  scanf("%d", &choixID);
     if (choixLieux == 0){
    printf("Vous retournez à votre point de départ.\n");
    printf("%s\n", Opale.description); 
    staminaJoueur = staminaJoueur - staminaDéplacement;
      }
       if (choixLieux == 1){
    printf("Vous décidez de vous engager dans la forêt pour atteindre la ville principale et récolter des informations.\n");
    printf("%s\n", Roncenoir.description); 
    staminaJoueur = staminaJoueur - staminaDéplacement;
      }
       if (choixLieux == 2){
    printf("En vous engageant dans la forêt, vous finissez par vous perdre, vous attérissez dans un tas de ruines mystérieuses
    et décidez donc de vous arrêter pour explorer.\n");
    printf("%s\n", Amaurath.description); 
    staminaJoueur = staminaJoueur - staminaDéplacement;
      }
}

if(staminaJoueur = 0){
printf("Votre énergie tombe à 0, vous tombez de fatigue\n");
printf("G A M E   O V E R\n");

}

return 0;