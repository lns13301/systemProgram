#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int cnt, repeat;
	char c;

	printf("반복 횟수 입력 : ");
	scanf("%d", &cnt);
	
	while(cnt > 0){
		printf("\n문자와 출력 횟수 입력 : ");
		getchar();
		scanf("%c %d", &c, &repeat);
		for(int i = 0; i < repeat; i++){
			printf("%c", c);
		}
		cnt--;
	}
	printf("\n");
	
	return 0;
}