/*Program to Print bits in the character without using 
 * bitwise operator
 * */

#include<stdio.h>

typedef union{
	struct{
		unsigned int bit0: 1;
		unsigned int bit1: 1;
		unsigned int bit2: 1;
		unsigned int bit3: 1;
		unsigned int bit4: 1;
		unsigned int bit5: 1;
		unsigned int bit6: 1;
		unsigned int bit7: 1;
	}bits;

	char ch;
}BYTES_t;

int main()
{
	BYTES_t BYTE;
	int var = 0;
	printf("Enter the char value: ");
	scanf("%d", &var);
	BYTE.ch = var;
	
	printf("bit0: %d\n", BYTE.bits.bit0);	
	printf("bit1: %d\n", BYTE.bits.bit1);
	printf("bit2: %d\n", BYTE.bits.bit2);
	printf("bit3: %d\n", BYTE.bits.bit3);
	printf("bit4: %d\n", BYTE.bits.bit4);
	printf("bit5: %d\n", BYTE.bits.bit5);
	printf("bit6: %d\n", BYTE.bits.bit6);
	printf("bit7: %d\n", BYTE.bits.bit7);

	return 0;

}
#if 0
Enter the char value: 7
bit0: 1
bit1: 1
bit2: 1
bit3: 0
bit4: 0
bit5: 0
bit6: 0
bit7: 0
#endif

