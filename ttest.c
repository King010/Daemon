#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<signal.h>
void mydaemon()
{
	    umask(0);//1
		    if(fork()>0)//2
				        exit(1);   
			    setsid();//3
				    if(fork()>0)
						        exit(1);       
					    chdir("/");//4
						    close(0);//5
							    close(1);
								    close(2);
									    signal(SIGCHLD,SIG_IGN);//6
}
int main()
{
	 mydaemon();
	 while(1)
	{
		sleep(1);
	}
			    return 0;
}
