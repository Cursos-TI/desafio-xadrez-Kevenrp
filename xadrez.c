#include <stdio.h>
int main()
{
    int cont = 1;

    
    printf("Bispo\n");
    for (int cont = 1; cont <= 5; cont++){
        printf("%d. Cima + ", cont);
        printf("Direita\n");
    }

    cont= 1;
    printf("Torre\n");

    while (cont <= 5){
        printf("%d. Direita \n", cont);
        cont++;
    }
    
    cont =1;
    printf("Rainha\n");

    do {
        printf("%d. Esquerda\n", cont);
        cont++;
    }
    while(cont <= 8);

    printf("Cavalo\n");

    
    for(int cont=1;cont<= 4 ; cont++){
        printf("%d. Baixo \n", cont);
    }
    cont = (4 + 2);
    while(cont > 4){
        printf("%d. Esquerda \n", cont);
        cont--;
    }

    return 0;
}
