#include <stdio.h>
#include <stdlib.h>


int main() {
	
	char kitapad[10],yazar[15],sayfa[3],basimyil[4],basimevi[10],tur[10];
	
	printf("Kitap Adini Giriniz: ");
	scanf("%s",kitapad);
	
	printf("Yazar:  ");
	scanf("%s",yazar);
	
	printf("Sayfa Sayisi:  ");
	scanf("%s",sayfa);
	
	printf("Basim Yili:  ");
	scanf("%s",basimyil);
	
	printf("Basimevi:  ");
	scanf("%s",basimevi);
	
	printf("Turu:  ");
	scanf("%s",tur);
	
	printf("\n\n\n");
	
	printf("Kitap Adi:  %s\n",kitapad);
	printf("Yazar:  %s\n",yazar);
	printf("Sayfa Sayisi:  %s\n",sayfa);
	printf("Basim Yili:  %s\n",basimyil);
	printf("Basimevi:  %s\n",basimevi);
	printf("Turu:  %s",tur);
	
	
	return 0;
}
