#include <stdio.h>
#include "penjumlahanArray.h"

int main() {
	
	int arrayA[10];
	int i;
	int arrayB[10];
	int arrayC[10];
	int urutanB = 0;
	int urutanC = 0;
	int totalB, totalC;
	
	for(i = 0; i < 10; i++){
		printf("Masukkan nilai dari index ke-%d: ", i+1);
		scanf("%d", &arrayA[i]);
		
		if(arrayA[i] % 2 == 0){
			arrayC[urutanC] = arrayA[i];
			urutanC++;
		}
		
		else {
			arrayB[urutanB] = arrayA[i];
			urutanB++;
		}
	}
	
	totalB = penjumlahanArray(urutanB, arrayB);
	totalC = penjumlahanArray(urutanC, arrayC);
	
	printf("\n\nJumlah Element dari array B: %d\nJumlah Element dari array C: %d\n", totalB, totalC);
	
	if(totalB > totalC){
		printf("\nJumlah Elemen array B lebih banyak\n");
	}
	
	else if(totalB == totalC){
		printf("\nJumlah Elemen array B dan array C Sama");
	}
	
	else {
		printf("\nJumlah Elemen array C lebih banyak");
	}
	
	return 0;
}
