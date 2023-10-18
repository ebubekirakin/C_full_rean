#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int misir,su,kola,bilet,toplam;

printf("aldiginiz misir adedi:");
scanf("%d",&misir);

printf("aldiginiz kola adedi:");
scanf("%d",&kola);

printf("aldiginiz su adedi:");
scanf("%d",&su);

printf("aldiginiz bilet adedi:");
scanf("%d",&bilet);

toplam=misir*2+kola*2+su*1+bilet*8;

printf("odeyeceginiz toplam ucret: %d TL",toplam);













	return 0;
}
