#include <constants.h>

void _start(void)
{
	size_t i,j=0;
	while(1)
	{
		for(i=0;i<TEXT_WIDTH*TEXT_HEIGHT;i++)
		{
			TEXT_BUFFER[i*2]='0'+((i+j)%10);
		}
		j=(j+1)%10;
	}
}
