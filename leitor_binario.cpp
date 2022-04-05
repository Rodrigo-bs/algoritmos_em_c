#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int pow(int number, int expo) {
	int i, final = 0;
	for (i = 0; i < expo; i++) {
		if (final == 0) final = 1;
		else final = final * number;
	}
	
	return final;
}

int main(void) {
	int i, j, count = 0, currentNumber, finalNumber;
	char code[80];
	
	printf("\n\nDigite a string binaria: ");
	fflush(stdin);
	gets(code);
	
	for (i = 0; (i < 80 && code[i] != '\0'); i++) count++;

	j = 0;
	for (i = count; i >= 0; i--) {
		if (code[i] == '1') finalNumber = finalNumber + pow(2, j);
		j++;
	}
	
	printf("\n\nO valor em decimal e: %d", finalNumber);
	printf("\n\nO valor em char e: %c", finalNumber);
	return 0;
}
