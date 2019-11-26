#include <stdio.h>

int main()
{
	int i = 0;
	alarm(5);
	printf("무한 루프\n");
	while(1) {
		i++;
		sleep(1);
		printf("%d초 경과 \n", i);
	}
	printf("실행되지 않음\n");
}
