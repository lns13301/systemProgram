#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if(argc < 2) {
		fprintf(stderr,"사용법 : %s 시간(초)\n", argv[0]);
		exit(0);
	}
	printf("Hello\n");
	sleep(atoi(argv[1]));
	printf("Bye\n");

	exit(0);
}
