#include <stdio.h>
#include <string.h>

struct calonKetua{
	char namaCalon[50];
	int jumlahTWTW;
	float nilaiFPT;
	char kondisiTugas[50];
};

float hitung(struct calonKetua calon[], int y, int i);

int main(){
	int i, y;
	float nilai = 0;
	const char sudah[40] = "Sudah";
	const char belom[40] = "Belum";

	
	
	printf("==================================================\n");
	printf("        PROGRAM PENGHITUNG NILAI CALON\n");
	printf("==================================================\n");
	printf("Masukkan jumlah calon ketua: ");
	scanf("%d", &y);
	struct calonKetua calon[y];
	
	for (i = 0; i < y; i++){
		printf("\nMasukkan nama dari calon no. urut %d: ", i+1);
		scanf(" %255[^\n]s", &calon[i].namaCalon);
		printf("Jumlah TWTW senior yang sudah dilakukan: ");
		scanf("%d", &calon[i].jumlahTWTW);
		printf("Hasil Nilai FPT: ");
		scanf("%f", &calon[i].nilaiFPT);
		while (calon[i].nilaiFPT > 4 || calon[i].nilaiFPT < 0){
			printf("Nilai dari FPT tidak boleh melebihi 4 dan kurang dari 0\n");
			printf("Hasil Nilai FPT: ");
			scanf("%f", &calon[i].nilaiFPT);
		}
		printf("Sudah mengerjakan tugas caka atau belum: ");
		scanf(" %255[^\n]s", &calon[i].kondisiTugas);
		nilai = hitung(calon, y, i);
		printf("\nCalon dengan nama %s memiliki poin %.2f\n", calon[i].namaCalon, nilai);
	}
	
	
	return 0;
	}

float hitung(struct calonKetua calon[], int y, int i){
	float nilai = 0;
	const char sudah[40] = "Sudah";
	const char belum[40] = "Belum";

	if(strcmp(calon[i].kondisiTugas, sudah) == 0){
		nilai += 50;
	}
	else if(strcmp(calon[i].kondisiTugas, belum) == 0){
		nilai -= 25;
	}
	
	nilai += calon[i].jumlahTWTW * 10;
	nilai += calon[i].nilaiFPT * 25;
	
	return nilai;
}
