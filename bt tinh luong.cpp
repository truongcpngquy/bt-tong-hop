#include<stdio.h> 

int main() {
	int soGioLamViec;
	double mucLuongTheoGio=25,luongCoBan,phuCap,tongLuong;
	
	printf("So gio lam viec là :"),
	scanf("%d", &soGioLamViec);
	
	luongCoBan =   soGioLamViec * mucLuongTheoGio;
	
	if(soGioLamViec > 160) {
	phuCap = luongCoBan *  0.8 ;
	}
	
	tongLuong =  	luongCoBan + phuCap;
	
	printf("Luong co ban la %.2f\n", luongCoBan);
	printf("Phu cap la %.2f\n", phuCap);
	printf("Tong luong la %.2f\n",	tongLuong); 
	
	return 0; 
}
