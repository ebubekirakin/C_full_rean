#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {

printf(" ***Harfli Basari Notu Hesaplama*** \n\n");

float s1,s2,s3,proje,ort;

printf("1. Sinav Notunuz:");
scanf("%f",&s1);

printf("2. Sinav Notunuz:");
scanf("%f",&s2);

printf("3. Sinav Notunuz:");
scanf("%f",&s3);

printf("Proje Notunuz:");
scanf("%f",&proje);

ort=(s1+s2+s3+proje)/4;

if(ort<50)
{
    printf("Basari Durumu : ff");
}
if(ort<60 && ort>=50)
{
    printf("Basari Durumu : dd");
}
if(ort<70 && ort>=60)
{
    printf("Basari Durumu : cc");
}
if(ort<80 && ort>=70)
{
    printf("Basari Durumu : bb");
}
if(ort>=80)
{
	printf("Basari Durumu : aa");
	
}

	
	return 0;
}
