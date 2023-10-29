#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

printf(" ***Sinema Ucretleri*** \n\n");
	
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
