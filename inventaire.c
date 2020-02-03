#include <stdio.h>
#include <string.h>

struct Item{
	char nomItem[100]; 
	int prix;
	char info[100];
};

typedef struct Item Item;

objet epee = {"Epee", 150, "Pratique au corp à corp"};
objet lance = {"Lance",80, "Permet de contrer les utilisateurs d'épée"};
objet armure = {"Armure",170, "Resiste à toutes les attaques de corps à corps basique"};
objet bouclier = {"Bouclier",50, "Une defense solide"};
objet potion = {"Potion",30, "Rend 20pv au joueur"};
objet amulette = {"Amulette",100, "Vous protège contre les mauvais sorts"};
objet chat = {"chat",50, "Un animal de compagnie qui vous suit tout le temps"};


int main()
{
    char nom[100];

    int choix ;
    int itemprix ;
    int argentJ = 450;
	
	int epee2 = 0;
	int lance2 = 0;
	int armure2 = 0;
	int bouclier2 = 0;
	int potion2 = 0;
	int amulette2 = 0;
	int chat2 = 0;



    printf("Salut, bienvenue dans ma boutique!");


   while (argentJ > 0){

    printf("Que voulez vous faire ? \n [1] acheter \n [2] vendre \n [3] Voir inventaire");
    scanf("%d", &choix);

    if (choix == 1){
    	printf("Que veux-tu acheter?\n");
    	printf(" [1] %s | %d | %s \n", epee.nomItem, epee.prix, epee.info);
       	printf(" [2] %s | %d | %s \n", lance.nomItem, lance.prix, lance.info);
    	printf(" [3] %s | %d | %s \n", armure.nomItem, armure.prix, armure.info);
    	printf(" [4] %s | %d | %s \n", bouclier.nomItem, bouclier.prix, bouclier.info);
    	printf(" [5] %s | %d | %s \n", potion.nomItem, potion.prix, potion.info);
    	printf(" [6] %s | %d | %s \n", amulette.nomItem, amulette.prix, amulette.info);
    	printf(" [7] %s | %d | %s \n", chat.nomItem, chat.prix, chat.info);

    		scanf("%d", &itemprix);

    		if (itemprix == 1){
    			printf("Vous avez choisit une epee \n");
    			argentJ = argentJ - epee.prix;
				epee2 = epee2 + 1;
    			printf("Il vous reste %d\n", argentJ );
    		}

    		if (itemprix == 2){
    			printf("Vous avez choisit une lance %n");
    			argentJ = argentJ - lance.prix;
				lance2 = lance2 + 1;
    			printf("Il vous reste %d\n", argentJ );
    		}

    		if (itemprix == 3){
    			printf("Vous avez choisit une armure%n");
    			argentJ = argentJ - armure.prix;
				armure2 = armure2 + 1;
    			printf("Il vous reste %d\n", argentJ );
    		}

    		if (itemprix == 4){
    			printf("Vous avez choisit un bouclier %n");
    			argentJ = argentJ - bouclier.prix;
				bouclier2 = bouclier2 + 1;
    			printf("Il vous reste %d\n", argentJ );
    		}

    		if (itemprix == 5){
    			printf("Vous avez choisit une potion %n");
    			argentJ = argentJ - potion.prix;
				potion2 = potion2 + 1;
    			printf("Il vous reste %d\n", argentJ );
    		}

    		if (itemprix == 6){
    			printf("Vous avez choisit une amulette %n");
    			argentJ = argentJ - amulette.prix;
				amulette2 = amulette2 + 1;
    			printf("Il vous reste %d\n", argentJ );
    		}

    		if (itemprix == 7){
    			printf("Vous avez choisit un chat %n");
    			argentJoueur = argentJ - chat.prix;
				chat2 = chat2 + 1;
    			printf("Il vous reste %d\n", argentJ );
    		}
	}

	if (choix == 2){
		printf("Vendre ?");
		printf("Que veux tu vendres ? : \n");
       	printf(" [1] %s | %d | %s \n", lance.nomItem, lance.prix, lance.info);
    	printf(" [2] %s | %d | %s \n", armure.nomItem, armure.prix, armure.info);
    	printf(" [3] %s | %d | %s \n", bouclier.nomItem, bouclier.prix, bouclier.info);
    	printf(" [4] %s | %d | %s \n", potion.nomItem, potion.prix, potion.info);

    		scanf("%d", &itemprix);

   		 	if (itemprix == 1){
    			printf("Vous avez vendue une lance \n");
    			argentJ = argentJ + lance.prix;
				lance2 = lance2 - 1;
    			printf("Vous avez maintenant %d\n", argentJ );
    		}

    		if (itemprix == 2){
    			printf("Vous avez vendue une armure \n");
    			argentJ = argentJ + armure.prix;
				armure2 = armure2 - 1;
    			printf("Vous avez maintenant %d\n", argentJ );
    		}

    		if (itemprix == 3){
    			printf("Vous avez vendue un bouclier \n");
    			argentJ = argentJ + bouclier.prix;
				bouclier2 = bouclier2 - 1;
    			printf("Vous avez maintenant %d\n", argentJ );
    		}

    		if (itemprix == 4){
    			printf("Vous avez vendue une potion \n");
    			argentJ = argentJ + potion.prix;
				potion2 = potion2 - 1;
    			printf("Vous avez maintenant %d\n", argentJ );
    		}
	}
	
		if (choix == 3){
		printf("Vous possédez dans votre inventaire : \n");
		printf("\n %d %s \n", lance2, lance.nomItem);
    	printf("\n %d %s \n", armure2, armure.nomItem);
		printf("\n %d %s \n", bouclier2, bouclier.nomItem);
    	printf("\n %d %s \n", potion2, potion.nomItem);
	}

		}

		if (argentJ <= 0){
			printf("Vous n'avez plus d'argent \n");
		}
		
    return 0;
}