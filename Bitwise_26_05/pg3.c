/* program as a Macro will take two arguments. It should return the position 1 or 0 */


#include<stdio.h>

#define BITVAL(val, position) (val = val & position)

int main()
{
	unsigned int num = 0x30;

	if(BITVAL(num, 0x10) == 0)
	{
		printf("value at position in 0x%x is 0\n",num);
	}
	else
		printf("value at position in 0x%x is 1\n",num);

	return 0;
}

#if 0

value at position in 0x10 is 1

#endif
