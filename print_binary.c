/* 
* author Srushti Wadekar, Arshia P 
*/
#include <stdint.h>
#include <stdio.h>

void Print_Binary(uint8_t value_to_convert);

int main() {
    uint8_t value_to_convert = 170;
    printf("Decimal: %d\n", value_to_convert);
    Print_Binary(value_to_convert);
    return 0;
}

void Print_Binary(uint8_t value_to_convert) {
    int binaryNum[8]; 
	int i = 0; 
	
	while (value_to_convert > 0) { 
		binaryNum[i] = value_to_convert % 2; 
		value_to_convert = value_to_convert / 2; 
		i++;
    }

    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
		printf("%d", binaryNum[j]);
		if (j % 4 == 0 && j != 0) {
			printf("_"); 
		}
	}
	printf("\n");
}
