#include <stdio.h>
#include <string.h>

struct calonKetua{
	char namaCalon[50];
	int jumlahTWTW;
	int nilaiFPT;
	char kondisiTugas[50];
};

int main(){
	struct dataTim tim[3];
	int i, total = 0;
	const char sasis1[40] = "Ducati";
	const char sasis2[40] = "Yamaha";
	const char sasis3[40] = "Honda";
	const char supTerkenal[40] = "Pertamina";
	
	
	printf("==================================================\n");
	printf("        PROGRAM PENGHITUNG UANG PER TIM\n");
	printf("==================================================\n");
	for (i = 0; i < 3; i++){
		printf("\nNama tim %d: ", i+1);
		scanf(" %255[^\n]s", &tim[i].namaTim);
		printf("Jenis sasis + mesin: ");
		scanf(" %255[^\n]s", &tim[i].sasisMesin);
		printf("Jumlah set ban: ");
		scanf("%d", &tim[i].setBan);
		while(tim[i].setBan < 0){
			printf("==================================================\n");
			printf("Nilai tidak boleh bernilai minus\nJumlah set ban: ");
			scanf("%d", &tim[i].setBan);
			printf("==================================================\n");
		}
		printf("Jumlah bensin dalam drum: ");
		scanf("%d", &tim[i].drum);
		while(tim[i].drum < 0){
			printf("==================================================\n");
			printf("Nilai tidak boleh bernilai minus\nJumlah bensin dalam drum: ");
			scanf("%d", &tim[i].drum);
			printf("==================================================\n");
		}
		printf("Supplier bensin: ");
		scanf(" %255[^\n]s", &tim[i].supplier);
	}
	
	printf("\n\n === HASIL HITUNGAN COST === \n");
	for (i = 0; i < 3; i++){
		total = 0;
		if(strcmp(tim[i].sasisMesin, sasis1) == 0){
			total += 750000;
		}
		
		else if(strcmp(tim[i].sasisMesin, sasis3) == 0){
			total += 725000;
		}
		
		else if(strcmp(tim[i].sasisMesin, sasis2) == 0){
			total += 700000;
		}
		
		else {
			printf("===============================================================================================\n");
			printf("Error karena Sasis pada tim %s tidak masuk ke dalam kategori\n", tim[i].namaTim);
			printf("===============================================================================================\n");
			break;
		}
		
		total += 15000 * tim[i].setBan;
		total += 2000 * tim[i].drum;
		
		if(strcmp(tim[i].supplier, supTerkenal) == 0){
			total = total * 0.9;
		}
		
		printf("Tim %s ($ %d)\n", tim[i].namaTim, total);
	}
	
	
	return 0;
}
