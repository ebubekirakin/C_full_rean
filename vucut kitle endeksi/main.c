#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	
	
float kilo;
float boy;
float vki;

printf("Kilonuzu giriniz: ");
scanf("%f",&kilo);
printf("Boyunuzu giriniz (cm): ");
scanf("%f",&boy);
vki = kilo/pow(boy/100,2);
printf("Vucut kitle indeksiniz %.2f\n",vki);
printf("Durumunuz: ");

if(vki<=18.5){
printf("Zayýf, ");
printf("%.2f kilo almanýz gerekiyor",18.5*pow(boy/100,2-kilo));
}

else if(vki<=24.9){
printf("Normal ");        }

else if(vki<=29.9){
printf("kilolu, ");
printf("%.2f kilo vermeniz gerekiyor",kilo-24.9*pow(boy/100,2));
}

else if(vki<=39.9){
printf("fazla kilolu, ");
printf("%.2f kilo vermeniz gerekiyor",kilo-24.9*pow(boy/100,2));
}

else {
printf("obez, ");
printf("%.2f kilo vermeniz gerekiyor",kilo-24.9*pow(boy/100,2));
}
	
	
		
	
	
	
	
	
	
	
	return 0;
}
