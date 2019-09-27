#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int i = 0;
	char a_buf[512];
	char b_buf[512];
	FILE *file_pointer1;
	FILE *file_pointer2;
	
	if(argc < 3){
		fprintf(stderr, "사용법 : %s file1 file2\n", argv[0]);
		exit(1);
	}
	
	file_pointer1 = fopen(argv[1], "r");
	file_pointer2 = fopen(argv[2], "r");
	fgets(a_buf, sizeof(a_buf), file_pointer1);
	fgets(b_buf, sizeof(b_buf), file_pointer2);
	
	for(i = 0; i < sizeof(a_buf) + sizeof(b_buf); i++)
		if(a_buf[i] != b_buf[i]){
			printf("%d 번째에서 두 파일의 내용이 달라집니다.\n", ++i);
			break;
		}
	
	
	fclose(file_pointer1);
	fclose(file_pointer2);
	return 0;
}
