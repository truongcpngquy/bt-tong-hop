#include<stdio.h>

int main() {
	int n;
	printf("nhap so nguyen to can tim : ");
	scanf("%d", &n);
	
	int count=0, num=2;
	printf("Cac so nguyen to dau tien la : \n");
	while(count < n) {
		int prime=1;
		
		int i=2;
		while(i * i <= num) {
			if(num % i == 0) {
				prime = 0;
				break;
			}
			i++;
		}
		if(prime){
			printf("%d", num);
			count++;
		}
		num++;
	}
	return 0;
}
