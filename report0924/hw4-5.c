#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define BUFSIZE 512

int main(int argc, char *argv[]){
	char buf[BUFSIZE];
	int fd;
	ssize_t nread;
	long total = 0;
	int count = 0;
	int word = 0;
	int line = 0;
	int i = 0;
	
	if(argc < 2){
		fprintf(stderr, "사용법 : %s file\n", argv[0]);
		exit(1);
	}
	
	if((fd = open(argv[1], O_RDONLY)) == -1)
		perror(argv[1]);
	
	while((nread = read(fd, buf, BUFSIZE)) > 0)
		total += nread;
	
	if(total > 0 && count == 0)
		word++;
	
	for(i = 0; i < total; i++){
		if(buf[i] == 10){
			line++;
			count--;
		}
		if(buf[i] == 32){
			if(buf[i-1] == 32 && buf[i] == 32)
				word--;
			word++;
			if(buf[i-1] == 10 && buf[i] != 10 && buf[i] != 32)
				word++;
			count--;
		}
		count++;
	}
	word = word + line - 1;
	
	close(fd);
	printf("해당 문서의 문장 수 : %d\t 단어 수 : %d\t 문자 수 :%d\t\n",line, word, count);
	exit(0);
	
	/*fp = fopen(argv[1], "r");
	fgets(buf, sizeof(buf), fp);
	
	for(i = 0; i < sizeof(buf); i++){
		if(buf[i] == 0)
			break;
		if(line == 0 && word == 0 && sizeof(buf) > 0){
			line++;
			word++;
		}
		if(buf[i] == 10)
			line++;
		else if(buf[i] == 32)
			word++;
		if(buf[i-1] == 32 && buf[i] == 32)
			word--;
		else
			count++;
	}
	printf("해당 문서의 문장 수 : %d\t 단어 수 : %d\t 문자 수 :%d\t\n", line, word, count);
	
	fclose(fp);*/
	return 0;
}
