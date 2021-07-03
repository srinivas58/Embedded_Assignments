/* program to Swap the nibble in a byte without using bitwise operator. */

#include<stdio.h>

typedef union {
	struct {
		unsigned int FN : 4;
		unsigned int SN : 4;
	}Nibble;
	char ch;
}nib;

int main()
{
	nib byte;
	byte.ch = 0x17;
	
	printf("Before swap FirstNibble: 0x%x, SecondNibble: 0x%x\n", byte.Nibble.FN, byte.Nibble.SN);

	int tmp = byte.Nibble.FN;
	byte.Nibble.FN= byte.Nibble.SN;
	byte.Nibble.SN = tmp;

	printf("After swap value of ch: 0x%x\n", byte.ch);

	return 0;
}

#if 0

Before swap FirstNibble: 0x7, SecondNibble: 0x1
After swap value of ch: 0x71

#endif
