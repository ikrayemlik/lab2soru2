#include <stdio.h>
#include <stdlib.h>

/* Boy ve kilo bilgisini alarak v�cut kitle indeksini hesaplayan kitleIndeks isimli bir fonksiyon yaz�n�z. Bu fonksiyon a�a��da
verilen tabloya g�re de�er d�nd�rmektedir. Yazd���n�z fonksiyonu main fonksiyonunda �a��rarak kullan�n ve bir
program yaz�n�z. Program�n �rnek �al��mas� �ekilde verildi�i gibi olmal�d�r. V�cut kitle indeksi hesab� a�a��da verilmi�tir*/


int kitleIndeks(float boy,float kilo){
	
 float vucutkitleindeks=kilo/boy*boy;	
	
if(vucutkitleindeks<=18 && vucutkitleindeks>0){
	
	return 1;
}	
	
else if(vucutkitleindeks>19 && vucutkitleindeks<25){
	return 2;
}	
	
	else if(vucutkitleindeks<30 && vucutkitleindeks>26){
		return 3;
	}
	
	else{
		return 4;
	}	
	
}








int main() {
float boyy,kiloo,vki;	
printf("boyunuzu giriniz");	
scanf("%f",&boyy);	
	
printf("kilonuzu giriniz");	
scanf("%f",&kiloo);	
vki=kitleIndeks(kiloo,boyy);	
if(vki==1){
	
	
	printf("zayif");
}	
	
else if(vki==2){
	printf("normal");
}	
	
	else if(vki==3){
		printf("kilolu");
	}
	
	else{
		printf("obez");
	}
	
	
	
	return 0;
}
