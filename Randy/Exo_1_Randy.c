//Crée un programme en langage C qui calcule et affiche le périmètre d'un rectange de longueur = 7.5 et de largeur = 2.4
#include <stdio.h>
#include <stdlib.h>

int main()
{
  //Crée un programme en langage C qui calcule et affiche le périmètre d'un rectange de longueur = 7.5 et de largeur = 2.4
float longueur = 7.5;
float largeur = 2.4;
float perimetredunrectangle = 2 * (longueur + largeur);
printf("%f + %f * 2 = %f", longueur, largeur, perimetredunrectangle);
  
  return 0;
}

//Très bien. La réponse est bonne mais il y a certains points à améliorer pour un meilleur code

/*
  - Quand tu déclares deux variables de même type tu peux les déclarer sur la même ligne
      - float longueur = 7.5, largeur = 2.4;
  - Je te conseille de toujours bien indenter tes instructions; ce n'est pas obligatoire mais cela te permet à toi et aux gens qui liront ton code de mieux le lire
  - Ça aussi ce n'est pas obligatoire, mais dans printf tu aurais dû mettre *2 en évidence pour respecter les règles de priorité
    printf("(%f + %f) * 2 = %f", longueur, largeur, perimetredunrectangle);
*/
