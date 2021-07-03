/* program to CLEAR, SET, TOGGLE with bitwise operator using Macro */

#include<stdio.h>

#define CLEAR(val, MASK)	(val = val &~ MASK) 
#define SET(val,MASK)	(val = val | MASK)
#define TOGGLE(val, MASK)	(val = val ^ MASK)

int main()
{
	unsigned int num=0x31;
	CLEAR(num, 0x1);
	printf("After CLEAR BIT: 0x%x\n", num);

	num = 0x32;
	SET(num, 0x1);
	printf("After SET BIT: 0x%x\n", num);

	num = 0x12;
	TOGGLE(num, 0x10);
	printf("After TOGGLE BIT: 0x%x\n", num);

	return 0;
}

#if 0

After CLEAR BIT: 0x30
After SET BIT: 0x33
After TOGGLE BIT: 0x2

#endif
