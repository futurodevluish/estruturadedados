#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_VETOR 100

void bubbleSort(int *vNumbers, int amountElements);

int main() {
//Declara��es
	int vNumbers1[MAX_VETOR] = {0}, vNumbers2[MAX_VETOR] = {0}, vNumbers3[MAX_VETOR] = {0};
	int countAmount;
//Inicializa��es 
	srand(time(NULL));
//Instru��es
	for(countAmount = 0; countAmount < MAX_VETOR; countAmount++) {
		vNumbers1[countAmount] = rand() % MAX_VETOR;
	}
	
	memcpy(vNumbers2, vNumbers1, sizeof(vNumbers1));
	memcpy(vNumbers3, vNumbers1, sizeof(vNumbers1));

	bubbleSort(vNumbers1, MAX_VETOR);

	for(countAmount = 0; countAmount < MAX_VETOR; countAmount++){
		printf("%3.i\n", vNumbers1[countAmount]);
	}
	
	/*printf("+---------+--------+\n");
	printf("| xNumber | Number |\n");
	printf("+---------+--------+\n");
	for(countAmount = 0; countAmount < MAX_VETOR; countAmount++){
		printf("|%-9.1i|%-8.3i|\n", countAmount, vNumbers1[countAmount]);
	}
	printf("+---------+--------+");
	
	printf("\n\n+---------+--------+\n");
	printf("| xNumber | Number |\n");
	printf("+---------+--------+\n");
	for(countAmount = 0; countAmount < MAX_VETOR; countAmount++){
		printf("|%-9.1i|%-8.3i|\n", countAmount, vNumbers2[countAmount]);
	}
	printf("+---------+--------+");*/
	
	return 0;
}

void bubbleSort(int *vNumbers, int amountElements){
//Declara��es
	int countAmount, countAux, tempVector;
//Instru��es
	for(countAmount = 0; countAmount < amountElements; countAmount++){
		for(countAux = 1; countAux < amountElements; countAux++){
			if(vNumbers[countAux - 1] > vNumbers[countAux]){
				tempVector = vNumbers[countAux - 1];
				vNumbers[countAux - 1] = vNumbers[countAux];
				vNumbers[countAux] = tempVector;
			}
		}
	}
}
