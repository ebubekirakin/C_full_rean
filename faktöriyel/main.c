#include <stdio.h>
#include <stdlib.h>



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
