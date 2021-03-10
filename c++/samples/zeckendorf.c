/******************************************************************************************
 * Program implements the zeckendorf number representation, where number is represented as a
 * sum of one or zero times the distint members of fibonacci series and no two consecutive 
 * fibonacci series are used.
 * For Example:
 * Input:
 * Enter the value11
 * Output:
 * 1 1 2 3 5 8
 * 0 0 0 1 0 1
 * Input:
 * Enter the value42
 * Output:
 * 1 1 2 3 5 8 13 21 34
 *0 0 0 0 0 1 0 0 1
******************************************************************************************/

/*
 * Author(s): Busam Hema Latha <hemalatha.busam@gmail.com>
 */

#include <stdio.h>

int main() {
	int n1 = 1, n2 = 1, n3 = 0, i = 0;
	int num;
	printf("Enter the value");
	scanf("%d", &num);
	int arr[100]= {0};
	// Loop fills the fibonacci series in the array
	//TODO: Need to write seperate function
	while (1) {
		if(num == n1) {
			arr[i] = n1;
			break;
		} else if (num == n2) {
			arr[i] = n2;
			break;
		} else if ((num > n1) && (num < n2)) {
			arr[i] = n1;
			break;
		}
		arr[i] = n1;
		arr[++i] = n2;
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
	}

	int arr1[i];

	for (int l = 0; l < sizeof(arr1)/sizeof(arr1[0]); l++  ) {
		arr1[l] = 0;
	}
	arr1[i] = 1;
	for (int j = 0; arr[j]; j++) {
		printf("%d ",arr[j]);
	}
	printf("\n");
	int k = i;
	//Loop which represents the position notation of a number
	//TODO: Need to write seperate function
	for (i = i-2; i > 0; i--) {
		if (arr[k]+arr[i] < num) {
			arr1[i] = 1;
			k = i;
		} else if(arr[k]+arr[i] == num) {
			arr1[i] = 1;
			break;
		}
		arr1[i] = 0;
	}

	for (int j = 0; j <= sizeof(arr1)/sizeof(arr1[0]); j++) {
		printf("%d ", arr1[j]);
	}
}
