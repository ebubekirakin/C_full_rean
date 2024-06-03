#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

	
float turkce,mat,sos,fen,puan1,puan2,dpl;


printf(" *** TYT PUAN HESAPLAMA ARACI *** \n\n");

printf("Turkce Netinizi Girin:");
scanf("%f",&turkce);

printf("Matematik Netinizi Girin:");
scanf("%f",&mat);

printf("Sosyal Bilgiler Netinizi Girin:");
scanf("%f",&sos);

printf("Fen Bilimleri Netinizi Girin:");
scanf("%f",&fen);

printf("Lise Diploma Notunuz:");
scanf("%f",&dpl);

puan1=100+turkce*3.2+mat*3.55+sos*3+fen*3.5;
puan2=puan1+dpl*0.6;

printf("\nHAM PUANINIZ: %f\n",puan1);
printf("YERLESTIRME PUANINIZ: %f",puan2); 







	return 0;
}
