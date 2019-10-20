#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#define BUFSIZE 512

int main(int argc, char *argv[]){
	int fd;
	int chars = 0;
	int words = 0;
	int lines = 0;
	int size;
	char buf[BUFSIZE];
	
	if(argc < 2){
		fprintf(stderr,"사용법 : %s filename \n", argv[0]);
		exit(1);
	}
	
	if((fd = open(argv[1], O_RDONLY)) == -1){
		perror(argv[1]);
		exit(2);
	}
	
	printf("파일 %s의 분석 결과입니다.\n", argv[1]);
	while((size = (read(fd, buf, BUFSIZE))) > 0){
		for(int i = 0; i < BUFSIZE; i++){
			if(buf[i] == ' '){
				if(i > 0 && buf[i - 1] != ' ')
					words++;
			}
			else if(buf[i] == '\n'){
				lines ++;
				words ++;
			}
			if(size == i)
				break;
			chars++;
		}
	}
	printf("글자 수 : %d\t 단어 수 : %d\t 문장 수 : %d\n", chars, words, lines);
	close(fd);
	exit(0);
}