#include <stdio.h>
#include <string.h>
int main() {
	char data[32];
	int i, val;
	char value;
	for (i = 0; value!='\n'; i++) {
		scanf("%c", &value);
		data[i] = value;
	}
	val = (int)data[0];
	for(i = 0; data[i]; i++) {
		if(val++ != (int)data[i]) {
			printf("Missing letter:'%c'\n", --val);
			break;
		}	
	}
}
