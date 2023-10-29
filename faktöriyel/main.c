#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int i,n;
int faktoriyel=1;

printf("Bir Sayi Giriniz:");
scanf("%d",&n);

for(i=1;i<=n;i++)
{	
faktoriyel=faktoriyel*i;
}

printf("%d",faktoriyel);



	return 0;
}
