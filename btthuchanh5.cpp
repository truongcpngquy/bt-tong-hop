#include<stdio.h>
#include<math.h>
int main(){
	int kt=1, primeNumber;
	printf("nhap so nguyen duong : "); 
	scanf("%d", &primeNumber);
	for(int i = 2; i <= sqrt(primeNumber); i++){
	     if(primeNumber % i == 0){
			kt=0;
		}	
	}
	if(kt==0){
		printf(" %d khong phai so nguyen to", primeNumber);
	} else printf(" %d la so nguyen to",primeNumber);
	
	return 0;
}
