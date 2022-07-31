#include <stdio.h>

int main() {
	int input[4][3] = {
	{0, 0, 0},
	{0, 0, 0},
	{0, 0, 0},
	{0, 0, 0}
	};
	int jumlahInput;
	int i, x, y;
	int kota, partai;
	
	printf("=============================================== \n");
	printf("         PROGRAM PENGHITUNG SUARA\n");
	printf("=============================================== \n");
	printf("Masukkan jumlah pilihan: ");
	scanf("%d", &jumlahInput);
	printf("=============================================== \n");
	
	while (jumlahInput < 1) {
		printf("Jumlah yang dimasukkan tidak boleh minus\nBegitupun dengan nilai 0\n");
		printf("=============================================== \n");
		printf("Masukkan Jumlah pemilih: ");
		scanf("%d", &jumlahInput);
		printf("=============================================== \n");
	}
	
	for (i = 0; i < jumlahInput; i++) {
		printf("Kota    (Pilih 1 - 4): ");
		scanf("%d", &kota);
		printf("Pilihan (Pilih 1 - 3): ");
		scanf("%d", &partai);
		printf("=============================================== \n");	
		input[kota - 1][partai - 1]++;
	}
	
	printf("Partai\tKota 1\tKota 2\tKota 3\tKota 4\tTotal\n");
	printf("1\t%d\t%d\t%d\t%d\t%d\n", input[0][0], input[1][0], input[2][0], input[3][0], input[0][0] + input[1][0] + input[2][0] + input[3][0]);
	printf("2\t%d\t%d\t%d\t%d\t%d\n", input[0][1], input[1][1], input[2][1], input[3][1], input[0][1] + input[1][1] + input[2][1] + input[3][1]);
	printf("3\t%d\t%d\t%d\t%d\t%d\n", input[0][2], input[1][2], input[2][2], input[3][2], input[0][2] + input[1][2] + input[2][2] + input[3][2]);
	
	return 0;
}
