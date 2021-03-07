/*-----------------------------------------------------------------------------------
 *Program implements the number of palindromes possible in a given word
 * For Example: madam
 * 1. madam
 * 2. ada
 * Above are the two palindromes found in the word 'madam'
 * Author: Busam Hema Latha
 * Email: hemalatha.busam@gmail.com
 * -----------------------------------------------------------------------------------*/

#include <stdio.h>
#include<string.h>

int main() {
	char array[50];
	int flag = 1, n, j;
	printf("Enter the string");
	scanf("%s", array);
	for (int i = 0; i < strlen(array); i++) {
		for (j = i + 1; j < strlen(array); j++) {
			if (array[i] == array[j]) {
				for (int m = i, n = j; m < n; m++, n--) {
					if (array[m] == array[n]) {
						
					} else {
						flag = 0;
						break;
					}
				}
				if (flag == 1) {
					for (int m = i;  m <= j; m++)	{
						printf("%c", array[m]);
					}
					printf("\n");
				}
			}
		}
	}
}
