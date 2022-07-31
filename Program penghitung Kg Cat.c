//Program penghitung Cat Tembok
#include <stdio.h>

float hitung (float tinggi, float panjang, float lebar);

int main() {
	float tinggi = 0;
	float panjang = 0;
	float lebar = 0;
	float cat;

	printf("================================================\n");	
	printf("   PROGRAM PENGHITUNG CAT YANG DIBUTUHKAN\n");	
	printf("================================================\n");
	printf("Program akan mengasumsikan ruangan berbentuk\nkotak persegi panjang\n");
	printf("================================================\n");
	printf("Masukkan Tinggi (m) : ");
	scanf("%f", &tinggi);
	printf("Masukkan Panjang (m): ");
	scanf("%f", &panjang);
	printf("Masukkan Lebar (m)  : ");
	scanf("%f", &lebar);
	
	cat = hitung (tinggi, panjang, lebar);

	printf("================================================\n");	
	printf("Maka Cat yang anda butuhkan sebanyak %.2f kg", cat);
	
	return 0;
	
}

float hitung (float tinggi, float panjang, float lebar) {
	float hasil;
	float kgCat;
	
	hasil = tinggi * 2 * (panjang + lebar);
	kgCat = hasil / 10;
	
	return kgCat;
	
}
