#include <stdio.h>

void output (int hasilInput[], int sentinel, int abstain, int i);

int main() {
	
	int sentinel;
	int abstain = 0;
	int i;
	int input[i+3];
	
	printf("=============================================== \n");
	printf("         PROGRAM PENGHITUNG SUARA\n");
	printf("=============================================== \n");
	printf("Masukkan Jumlah pemilih: ");
	scanf("%d", &sentinel);
	printf("=============================================== \n");
	
	while (sentinel < 1) {
		printf("Jumlah yang dimasukkan tidak boleh minus\nBegitupun dengan nilai 0\n");
		printf("=============================================== \n");
		printf("Masukkan Jumlah pemilih: ");
		scanf("%d", &sentinel);
		printf("=============================================== \n");
	}
	
	
	input[sentinel] = 0;
	input[sentinel + 1] = 0;
	input[sentinel + 2] = 0;
	
	for (i = 0; i < sentinel; i++){
		printf("Masukkan pilihan ke-%d: ", i+1);
		scanf("%d", &input[i]);
		
		if (input[i] == 1){
			input[sentinel] ++;
		}
		else if (input[i] == 2){
			input[sentinel + 1] ++;
		}
		else if (input[i] == 3){
			input[sentinel + 2] ++;
		}
		else {
			abstain ++;
		}
	}
	printf("=============================================== \n");
	printf("             Hasil Output \n");
	printf("=============================================== \n");
	
	for (i = 0; i < sentinel; i++){
		printf("%d \n", input[i]);
	}
	
	output(input, sentinel, abstain, i);
	
	return 0;
}

int histografi (int num) {
	int i;
	for(i = 0; i < num; i++){
	printf("#");
	}
	printf("\n");
}

void output (int hasilInput[], int sentinel, int abstain, int i) {
	
	printf("=============================================== \n");
	printf("Total Suara Sah = %d \n", hasilInput[sentinel] + hasilInput[sentinel + 1] + hasilInput[sentinel + 2]);
	printf("Abstain = %d \n", abstain);
	printf("=============================================== \n");
	printf("Partai            Suara             Histogram \n");
	printf("1                 %d                 ", hasilInput[i]);
	histografi(hasilInput[i]);
	printf("2                 %d                 ", hasilInput[i + 1]);
	histografi(hasilInput[i + 1]);
	printf("3                 %d                 ", hasilInput[i + 2]);
	histografi(hasilInput[i + 2]);
	
}

