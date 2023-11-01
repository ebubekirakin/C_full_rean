#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {

int s1,s2,s3,i;
s1=1;
s2=1;

printf("%d \n%d \n",s1,s2);
for(i=1;i<=8;i++)
{
	
s3=s1+s2;
	
s1=s2;
s2=s3;	

printf("%d \n",s3);
}

printf("fibonacci serisinin 10. elemani = %d",s3);






	return 0;
}
