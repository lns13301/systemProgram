#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define BUFSIZE 512

int main(int argc, char *argv[]){
	int fd1, fd2;
	char buf1[BUFSIZE], buf2[BUFSIZE];
	int i = 0;
	int compareSize = 0;

	if(argc < 3){
		fprintf(stderr,"사용법 : %s file1 file2\n", argv[0]);
		exit(1);
	}

	if((fd1 = open(argv[1], O_RDONLY)) == -1){
		perror(argv[1]);
		exit(2);
	}
	else if((fd2 = open(argv[2], O_RDONLY)) == -1){
		perror(argv[2]);
		exit(3);
	}

	printf("%s와(과) %s 두 파일을 비교합니다.\n", argv[1], argv[2]);
	if(sizeof(read(fd1, buf1, BUFSIZE)) == sizeof(read(fd2, buf2, BUFSIZE)))
		compareSize = sizeof(read(fd1, buf1, BUFSIZE));

	while((read(fd1, buf1, BUFSIZE) > 0) && (read(fd2, buf2, BUFSIZE) > 0)){
		for(i = 0; i < BUFSIZE ; i++){
			if(buf1[i] != buf2[i]){
				printf("%d번째에서 두 파일이 달라집니다.\n", ++i);
				break;
			}
			else if(i == compareSize - 1){
				printf("두 파일의 내용이 일치합니다.\n");
				break;
			}
		}
	}
	close(fd1);
	close(fd2);
	exit(0);
}


