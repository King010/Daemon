#include<unistd.h>

int main()
{
	daemon(0,0);
	while(1)
	{
		sleep(1);
	}
	return 0;
}

