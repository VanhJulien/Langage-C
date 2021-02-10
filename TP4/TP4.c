#include <stdio.h>
#include <stdlib.h>

float calcul (char c, int x, int y){
    float result;
    if (c==''){
        result=xy;
    }
    else{
        if (c=='/'){
            result=x/y;
        }
        else{
            if (c=='-'){
                result=x-y;
            }
            else{
                result=x+y;
            }
        }
    }
    return result;
}

int main(int argc, char **argv){
    int x, y;
    char operateur;
    float resultat;

    printf("Entrez x :\n");
    scanf("%d",&x);

    printf("Entrez y;\n");
    scanf("%d",&y);

    printf("Entrez le symbole, +, -, *, /\n");
    scanf(" %c",&operateur);

    resultat=calcul(operateur, x, y);
    printf("Le resultat est %f", resultat);
}

Envoyer un message à #général
