/*-----------------------------------------------------------------------------------
 *Program implements the ZigZag matrix. A Zig Zag array is a square arrangement of 
 * the first N square integers, where the numbers increase sequentially as you 
 * zig-zag along the array's anti-diagonals.
 * Author: Busam Hema Latha
 * Email: hemalatha.busam@gmail.com
------------------------------------------------------------------------------------*/

#include<stdio.h>

int main() {
	int i, j = 0, k = 0 ,l = 0, count, value = 1, inc = 0, decval = 0, flag = 1;
	printf("Enter the count");
	scanf("%d", &count);
	int array[count][count];
	while (value) {
		/*If statement will be valid till the first half of the matrix diagonal. 
		 * For the second half else will work.*/
		if (!decval) {
			/* First If button to top and else will be valid from top to 
			 * bottom diagonally.*/
			if (flag) {
				for (i = value-1, j = 0; j < value; j++, i--) {
					array[i][j] = inc;
					inc++;
				}
				flag = 0;
			} else {
				for (i = 0, j = value-1; j >= 0; i++, j--) {
					array[i][j] = inc;
					inc++;
				}
				flag = 1;
			}
		} else {
			if (flag) {
				for (i = count - 1 , j = count - value ; j <= count-1  ; i--, j++) {
					array[i][j] = inc;
					inc ++;
				}
				flag = 0;
			} else {
				for (i = count-value, j = count - 1; i <= count-1; i++, j--) {	
					array[i][j] = inc;
					inc++;
			}
				flag = 1;
			}
		}
		if (value == count) {
			decval = 1;
		}
		if (decval) {
			value --;
		} else {
			value ++;
		}
	
	}
	
	for (i = 0; i < count; i++) {
		for (j = 0; j < count; j++) {
			printf("%d   ", array[i][j]);
		}
		printf("\n");
	}
}
