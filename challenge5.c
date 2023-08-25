#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int sayi;
	int n=1,toplam=0;
	printf("lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	printf("sayinin bolenleri:");
	
	while(n<=sayi){
	    if(sayi%n==0){
	    printf("%d ",n);
		toplam=toplam+n;

		
	}
	n++;
	}
	printf("\nbolenlerin toplami:%d",toplam);
	
	
	
	
	return 0;
}
