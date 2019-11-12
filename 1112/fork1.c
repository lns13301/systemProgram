#include <stdio.h>
#include <unistd.h>

int main()
{
	int pid;
	printf("[%d] 프로세스 시작 \n", getpid());
	pid = fork();
	printf("[%d] 프로세스 : 리턴 값 %d\n", getpid(), pid);
}
