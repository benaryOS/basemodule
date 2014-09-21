#include <constants.h>

#define putchar(ch) asm volatile("int $0x30" : : "a" (SYSCALL_PUTCHAR), "b" ((ch)))

void _start(void)
{
	size_t i;
	while(1)
	{
		for(i=0;i<10;i++)
		{
			putchar('0'+i);
		}
	}
}
