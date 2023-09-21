#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	
	printf("a나누기 b를 하겠습니다.\n");
	printf("a를 입력하세요 : ");
	scanf("%d",&a);
	
	printf("b를 입력하세요 : ");
	scanf("%d", &b);
	
	float result =(float) a/b;
	printf("나누기의 결과는 %f 입니다.\n", result);
	return 0;
}
